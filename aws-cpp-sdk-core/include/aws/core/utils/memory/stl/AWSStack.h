#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSDeque.h>

#include <deque>
#include <stack>

namespace Aws
{

template< typename T > using Stack = std::stack< T, Deque< T > >;

} // namespace Aws
