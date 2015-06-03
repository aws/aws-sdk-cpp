#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <functional>

#ifndef __GNUG__

namespace Aws
{

template<typename F>
std::function< F > BuildFunction(const F &f) 
{
    return std::function< F >( f, Aws::Allocator<void>() );
}

// some things, like bind results, don't implicity convert to direct function types, catch those with specializations
template<typename F>
std::function< F > BuildFunction(const std::function< F > &f) 
{
    return std::function< F >( f, Aws::Allocator<void>() );
}

template<typename F>
std::function< F > BuildFunction(std::function< F > &&f) 
{
    return std::function< F >( std::move(f), Aws::Allocator<void>() );
}

} // namespace Aws

#define AWS_BUILD_FUNCTION(func) Aws::BuildFunction(func)
#define AWS_BUILD_TYPED_FUNCTION(func, type) Aws::BuildFunction<type>(func)

#else // __GNUG__

namespace Aws
{

// gcc does not yet support passing allocators into functions

template<typename F>
F BuildFunction(F f)
{
    return f;
}

// some things, like bind results, don't implicity convert to direct function types, catch those with specializations
template<typename F>
std::function< F > BuildFunction(const std::function< F > &f)
{
  return std::function< F >( f );
}

template<typename F>
std::function< F > BuildFunction(std::function< F > &&f)
{
  return std::function< F >( std::move(f));
}

} // namespace Aws

#define AWS_BUILD_FUNCTION(func) Aws::BuildFunction(func)
#define AWS_BUILD_TYPED_FUNCTION(func, type) Aws::BuildFunction<type>(func)

#endif // __GNUG__
