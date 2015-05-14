#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <regex>

namespace Aws
{

class StringRegexTraits : public std::regex_traits< char >
{
    public:

        using string_type = Aws::String;
};

class StringSubMatch : public std::sub_match< const char * >
{
    public:

        using string_type = Aws::String;
};

class StringMatchResults : public std::match_results<const char*, Aws::Allocator< StringSubMatch > >
{
    public:
    
    using string_type = Aws::String;
    using value_type = StringSubMatch;
    using allocator_type = Aws::Allocator< StringSubMatch >;
    using reference = const value_type&;
    using const_reference = const value_type&;
};

using StringRegex = std::basic_regex< char, StringRegexTraits >;

} // namespace Aws
