#include <aws/core/net/URI.h>

namespace Aws
{
    namespace Net
    {
      
        const char* SEPARATOR = "://";

        //ugh, this isn't even part of the canonicalization spec. It is part of how our services have implemented their signers though....
        //it doesn't really hurt anything to reorder it though, so go ahead and sort the values for parameters with the same key
        void InsertValueOrderedParameter(QueryStringParameterCollection& queryParams, const Aws::String& key, const Aws::String& value)
        {
            auto entriesAtKey = queryParams.equal_range(key);
            for (auto& entry = entriesAtKey.first; entry != entriesAtKey.second; ++entry)
            {
                if (entry->second > value)
                {
                    queryParams.emplace_hint(entry, key, value);
                    return;
                }
            }

            queryParams.emplace(key, value);
        }

    }
}