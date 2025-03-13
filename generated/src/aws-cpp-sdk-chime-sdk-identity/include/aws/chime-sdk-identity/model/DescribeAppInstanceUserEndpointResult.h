/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult() = default;
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full details of an <code>AppInstanceUserEndpoint</code>: the
     * <code>AppInstanceUserArn</code>, ID, name, type, resource ARN, attributes, allow
     * messages, state, and created and last updated timestamps. All timestamps use
     * epoch milliseconds.</p>
     */
    inline const AppInstanceUserEndpoint& GetAppInstanceUserEndpoint() const { return m_appInstanceUserEndpoint; }
    template<typename AppInstanceUserEndpointT = AppInstanceUserEndpoint>
    void SetAppInstanceUserEndpoint(AppInstanceUserEndpointT&& value) { m_appInstanceUserEndpointHasBeenSet = true; m_appInstanceUserEndpoint = std::forward<AppInstanceUserEndpointT>(value); }
    template<typename AppInstanceUserEndpointT = AppInstanceUserEndpoint>
    DescribeAppInstanceUserEndpointResult& WithAppInstanceUserEndpoint(AppInstanceUserEndpointT&& value) { SetAppInstanceUserEndpoint(std::forward<AppInstanceUserEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppInstanceUserEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstanceUserEndpoint m_appInstanceUserEndpoint;
    bool m_appInstanceUserEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
