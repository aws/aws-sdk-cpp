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


    /**
     * <p>License status.</p>
     */
    inline const LicenseDeletionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(const LicenseDeletionStatus& value) { m_status = value; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(LicenseDeletionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>License status.</p>
     */
    inline DeleteLicenseResult& WithStatus(const LicenseDeletionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>License status.</p>
     */
    inline DeleteLicenseResult& WithStatus(LicenseDeletionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Date when the license is deleted.</p>
     */
    inline const Aws::String& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline void SetDeletionDate(const Aws::String& value) { m_deletionDate = value; }

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline void SetDeletionDate(Aws::String&& value) { m_deletionDate = std::move(value); }

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline void SetDeletionDate(const char* value) { m_deletionDate.assign(value); }

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline DeleteLicenseResult& WithDeletionDate(const Aws::String& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline DeleteLicenseResult& WithDeletionDate(Aws::String&& value) { SetDeletionDate(std::move(value)); return *this;}

    /**
     * <p>Date when the license is deleted.</p>
     */
    inline DeleteLicenseResult& WithDeletionDate(const char* value) { SetDeletionDate(value); return *this;}

  private:

    LicenseDeletionStatus m_status;

    Aws::String m_deletionDate;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
