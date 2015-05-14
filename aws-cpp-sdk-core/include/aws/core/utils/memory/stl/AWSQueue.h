#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSDeque.h>

#include <deque>
#include <queue>

namespace Aws
{

template< typename T > using Queue = std::queue< T, Deque< T > >;

} // namespace Aws
