#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>

#include <sstream>

namespace Aws
{

typedef std::basic_stringstream< char, std::char_traits< char >, Aws::Allocator< char > > StringStream;
typedef std::basic_ostringstream< char, std::char_traits< char >, Aws::Allocator< char > > OStringStream;
typedef std::basic_stringbuf< char, std::char_traits< char >, Aws::Allocator< char > > StringBuf;

} // namespace Aws
