/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdmin.h>
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
  class DescribeAppInstanceAdminResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult() = default;
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline const AppInstanceAdmin& GetAppInstanceAdmin() const { return m_appInstanceAdmin; }
    template<typename AppInstanceAdminT = AppInstanceAdmin>
    void SetAppInstanceAdmin(AppInstanceAdminT&& value) { m_appInstanceAdminHasBeenSet = true; m_appInstanceAdmin = std::forward<AppInstanceAdminT>(value); }
    template<typename AppInstanceAdminT = AppInstanceAdmin>
    DescribeAppInstanceAdminResult& WithAppInstanceAdmin(AppInstanceAdminT&& value) { SetAppInstanceAdmin(std::forward<AppInstanceAdminT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppInstanceAdminResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstanceAdmin m_appInstanceAdmin;
    bool m_appInstanceAdminHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
