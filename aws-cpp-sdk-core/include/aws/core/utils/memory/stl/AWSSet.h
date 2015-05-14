#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>

#include <set>

namespace Aws
{

template< typename T > using Set = std::set< T, std::less< T >, Aws::Allocator< T > >;

} // namespace Aws
