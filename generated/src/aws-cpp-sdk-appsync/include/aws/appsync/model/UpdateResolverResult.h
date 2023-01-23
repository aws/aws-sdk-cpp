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
  class UpdateResolverResult
  {
  public:
    AWS_APPSYNC_API UpdateResolverResult();
    AWS_APPSYNC_API UpdateResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateResolverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline const Resolver& GetResolver() const{ return m_resolver; }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline void SetResolver(const Resolver& value) { m_resolver = value; }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline void SetResolver(Resolver&& value) { m_resolver = std::move(value); }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline UpdateResolverResult& WithResolver(const Resolver& value) { SetResolver(value); return *this;}

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline UpdateResolverResult& WithResolver(Resolver&& value) { SetResolver(std::move(value)); return *this;}

  private:

    Resolver m_resolver;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
