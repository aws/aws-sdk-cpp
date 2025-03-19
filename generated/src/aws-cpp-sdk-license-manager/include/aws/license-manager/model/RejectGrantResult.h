/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantStatus.h>
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
namespace LicenseManager
{
namespace Model
{
  class RejectGrantResult
  {
  public:
    AWS_LICENSEMANAGER_API RejectGrantResult() = default;
    AWS_LICENSEMANAGER_API RejectGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API RejectGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Grant ARN.</p>
     */
    inline const Aws::String& GetGrantArn() const { return m_grantArn; }
    template<typename GrantArnT = Aws::String>
    void SetGrantArn(GrantArnT&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::forward<GrantArnT>(value); }
    template<typename GrantArnT = Aws::String>
    RejectGrantResult& WithGrantArn(GrantArnT&& value) { SetGrantArn(std::forward<GrantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline GrantStatus GetStatus() const { return m_status; }
    inline void SetStatus(GrantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RejectGrantResult& WithStatus(GrantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RejectGrantResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RejectGrantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_grantArn;
    bool m_grantArnHasBeenSet = false;

    GrantStatus m_status{GrantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
