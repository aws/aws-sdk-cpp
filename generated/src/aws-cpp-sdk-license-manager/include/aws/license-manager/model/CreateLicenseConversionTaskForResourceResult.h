﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
  class CreateLicenseConversionTaskForResourceResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult();
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskId = value; }
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskId = std::move(value); }
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskId.assign(value); }
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLicenseConversionTaskForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLicenseConversionTaskForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLicenseConversionTaskForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConversionTaskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
