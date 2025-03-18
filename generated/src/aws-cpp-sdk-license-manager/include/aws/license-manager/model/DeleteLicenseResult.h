/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseDeletionStatus.h>
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
namespace LicenseManager
{
namespace Model
{
  class DeleteLicenseResult
  {
  public:
    AWS_LICENSEMANAGER_API DeleteLicenseResult() = default;
    AWS_LICENSEMANAGER_API DeleteLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API DeleteLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License status.</p>
     */
    inline LicenseDeletionStatus GetStatus() const { return m_status; }
    inline void SetStatus(LicenseDeletionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteLicenseResult& WithStatus(LicenseDeletionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the license is deleted.</p>
     */
    inline const Aws::String& GetDeletionDate() const { return m_deletionDate; }
    template<typename DeletionDateT = Aws::String>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::String>
    DeleteLicenseResult& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteLicenseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LicenseDeletionStatus m_status{LicenseDeletionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_deletionDate;
    bool m_deletionDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
