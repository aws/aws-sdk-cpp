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
    AWS_LICENSEMANAGER_API DeleteLicenseResult();
    AWS_LICENSEMANAGER_API DeleteLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API DeleteLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License status.</p>
     */
    inline const LicenseDeletionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LicenseDeletionStatus& value) { m_status = value; }
    inline void SetStatus(LicenseDeletionStatus&& value) { m_status = std::move(value); }
    inline DeleteLicenseResult& WithStatus(const LicenseDeletionStatus& value) { SetStatus(value); return *this;}
    inline DeleteLicenseResult& WithStatus(LicenseDeletionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the license is deleted.</p>
     */
    inline const Aws::String& GetDeletionDate() const{ return m_deletionDate; }
    inline void SetDeletionDate(const Aws::String& value) { m_deletionDate = value; }
    inline void SetDeletionDate(Aws::String&& value) { m_deletionDate = std::move(value); }
    inline void SetDeletionDate(const char* value) { m_deletionDate.assign(value); }
    inline DeleteLicenseResult& WithDeletionDate(const Aws::String& value) { SetDeletionDate(value); return *this;}
    inline DeleteLicenseResult& WithDeletionDate(Aws::String&& value) { SetDeletionDate(std::move(value)); return *this;}
    inline DeleteLicenseResult& WithDeletionDate(const char* value) { SetDeletionDate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteLicenseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteLicenseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteLicenseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LicenseDeletionStatus m_status;

    Aws::String m_deletionDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
