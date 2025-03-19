/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/Identity.h>
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
  class CreateAppInstanceAdminResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult() = default;
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN and name of the administrator, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline const Identity& GetAppInstanceAdmin() const { return m_appInstanceAdmin; }
    template<typename AppInstanceAdminT = Identity>
    void SetAppInstanceAdmin(AppInstanceAdminT&& value) { m_appInstanceAdminHasBeenSet = true; m_appInstanceAdmin = std::forward<AppInstanceAdminT>(value); }
    template<typename AppInstanceAdminT = Identity>
    CreateAppInstanceAdminResult& WithAppInstanceAdmin(AppInstanceAdminT&& value) { SetAppInstanceAdmin(std::forward<AppInstanceAdminT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    CreateAppInstanceAdminResult& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAppInstanceAdminResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Identity m_appInstanceAdmin;
    bool m_appInstanceAdminHasBeenSet = false;

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
