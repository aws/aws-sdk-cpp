/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ScopeFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace ScopeFilterKeyMapper
      {

        static const int BUCKET_CREATION_DATE_HASH = HashingUtils::HashString("BUCKET_CREATION_DATE");
        static const int OBJECT_EXTENSION_HASH = HashingUtils::HashString("OBJECT_EXTENSION");
        static const int OBJECT_LAST_MODIFIED_DATE_HASH = HashingUtils::HashString("OBJECT_LAST_MODIFIED_DATE");
        static const int OBJECT_SIZE_HASH = HashingUtils::HashString("OBJECT_SIZE");
        static const int TAG_HASH = HashingUtils::HashString("TAG");


        ScopeFilterKey GetScopeFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUCKET_CREATION_DATE_HASH)
          {
            return ScopeFilterKey::BUCKET_CREATION_DATE;
          }
          else if (hashCode == OBJECT_EXTENSION_HASH)
          {
            return ScopeFilterKey::OBJECT_EXTENSION;
          }
          else if (hashCode == OBJECT_LAST_MODIFIED_DATE_HASH)
          {
            return ScopeFilterKey::OBJECT_LAST_MODIFIED_DATE;
          }
          else if (hashCode == OBJECT_SIZE_HASH)
          {
            return ScopeFilterKey::OBJECT_SIZE;
          }
          else if (hashCode == TAG_HASH)
          {
            return ScopeFilterKey::TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopeFilterKey>(hashCode);
          }

          return ScopeFilterKey::NOT_SET;
        }

        Aws::String GetNameForScopeFilterKey(ScopeFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ScopeFilterKey::BUCKET_CREATION_DATE:
            return "BUCKET_CREATION_DATE";
          case ScopeFilterKey::OBJECT_EXTENSION:
            return "OBJECT_EXTENSION";
          case ScopeFilterKey::OBJECT_LAST_MODIFIED_DATE:
            return "OBJECT_LAST_MODIFIED_DATE";
          case ScopeFilterKey::OBJECT_SIZE:
            return "OBJECT_SIZE";
          case ScopeFilterKey::TAG:
            return "TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeFilterKeyMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
