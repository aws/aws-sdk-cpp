﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseStatus.h>
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
  class CreateLicenseVersionResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult();
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License ARN.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }
    inline CreateLicenseVersionResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}
    inline CreateLicenseVersionResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}
    inline CreateLicenseVersionResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New version of the license.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateLicenseVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateLicenseVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateLicenseVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License status.</p>
     */
    inline const LicenseStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LicenseStatus& value) { m_status = value; }
    inline void SetStatus(LicenseStatus&& value) { m_status = std::move(value); }
    inline CreateLicenseVersionResult& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}
    inline CreateLicenseVersionResult& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLicenseVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLicenseVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLicenseVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseArn;

    Aws::String m_version;

    LicenseStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
