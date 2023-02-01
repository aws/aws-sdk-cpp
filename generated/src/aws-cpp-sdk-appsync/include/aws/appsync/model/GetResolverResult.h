/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/Resolver.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{
  class GetResolverResult
  {
  public:
    AWS_APPSYNC_API GetResolverResult();
    AWS_APPSYNC_API GetResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetResolverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Resolver</code> object.</p>
     */
    inline const Resolver& GetResolver() const{ return m_resolver; }

    /**
     * <p>The <code>Resolver</code> object.</p>
     */
    inline void SetResolver(const Resolver& value) { m_resolver = value; }

    /**
     * <p>The <code>Resolver</code> object.</p>
     */
    inline void SetResolver(Resolver&& value) { m_resolver = std::move(value); }

    /**
     * <p>The <code>Resolver</code> object.</p>
     */
    inline GetResolverResult& WithResolver(const Resolver& value) { SetResolver(value); return *this;}

    /**
     * <p>The <code>Resolver</code> object.</p>
     */
    inline GetResolverResult& WithResolver(Resolver&& value) { SetResolver(std::move(value)); return *this;}

  private:

    Resolver m_resolver;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
