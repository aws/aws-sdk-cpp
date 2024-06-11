﻿/**
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
  class AcceptGrantResult
  {
  public:
    AWS_LICENSEMANAGER_API AcceptGrantResult();
    AWS_LICENSEMANAGER_API AcceptGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API AcceptGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Grant ARN.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }
    inline void SetGrantArn(const Aws::String& value) { m_grantArn = value; }
    inline void SetGrantArn(Aws::String&& value) { m_grantArn = std::move(value); }
    inline void SetGrantArn(const char* value) { m_grantArn.assign(value); }
    inline AcceptGrantResult& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}
    inline AcceptGrantResult& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}
    inline AcceptGrantResult& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline const GrantStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GrantStatus& value) { m_status = value; }
    inline void SetStatus(GrantStatus&& value) { m_status = std::move(value); }
    inline AcceptGrantResult& WithStatus(const GrantStatus& value) { SetStatus(value); return *this;}
    inline AcceptGrantResult& WithStatus(GrantStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline AcceptGrantResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AcceptGrantResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AcceptGrantResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AcceptGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AcceptGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AcceptGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_grantArn;

    GrantStatus m_status;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
