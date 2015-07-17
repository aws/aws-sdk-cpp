#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>

#include <string>

namespace Aws
{

typedef std::basic_string< char, std::char_traits< char >, Aws::Allocator< char > > String;

#ifdef _WIN32
typedef std::basic_string< wchar_t, std::char_traits< wchar_t >, Aws::Allocator< wchar_t > > WString;
#endif

} // namespace Aws
