/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstance.h>
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
  class DescribeAppInstanceResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult() = default;
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline const AppInstance& GetAppInstance() const { return m_appInstance; }
    template<typename AppInstanceT = AppInstance>
    void SetAppInstance(AppInstanceT&& value) { m_appInstanceHasBeenSet = true; m_appInstance = std::forward<AppInstanceT>(value); }
    template<typename AppInstanceT = AppInstance>
    DescribeAppInstanceResult& WithAppInstance(AppInstanceT&& value) { SetAppInstance(std::forward<AppInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstance m_appInstance;
    bool m_appInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
