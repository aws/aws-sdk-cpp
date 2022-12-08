/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpoint.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class DescribeAppInstanceUserEndpointResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult();
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline const AppInstanceUserEndpoint& GetAppInstanceUserEndpoint() const{ return m_appInstanceUserEndpoint; }

    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline void SetAppInstanceUserEndpoint(const AppInstanceUserEndpoint& value) { m_appInstanceUserEndpoint = value; }

    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline void SetAppInstanceUserEndpoint(AppInstanceUserEndpoint&& value) { m_appInstanceUserEndpoint = std::move(value); }

    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline DescribeAppInstanceUserEndpointResult& WithAppInstanceUserEndpoint(const AppInstanceUserEndpoint& value) { SetAppInstanceUserEndpoint(value); return *this;}

    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline DescribeAppInstanceUserEndpointResult& WithAppInstanceUserEndpoint(AppInstanceUserEndpoint&& value) { SetAppInstanceUserEndpoint(std::move(value)); return *this;}

  private:

    AppInstanceUserEndpoint m_appInstanceUserEndpoint;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
