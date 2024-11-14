/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class DeleteLicenseServerEndpointResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows details from the <code>LicenseServerEndpoint</code> resource that was
     * deleted.</p>
     */
    inline const LicenseServerEndpoint& GetLicenseServerEndpoint() const{ return m_licenseServerEndpoint; }
    inline void SetLicenseServerEndpoint(const LicenseServerEndpoint& value) { m_licenseServerEndpoint = value; }
    inline void SetLicenseServerEndpoint(LicenseServerEndpoint&& value) { m_licenseServerEndpoint = std::move(value); }
    inline DeleteLicenseServerEndpointResult& WithLicenseServerEndpoint(const LicenseServerEndpoint& value) { SetLicenseServerEndpoint(value); return *this;}
    inline DeleteLicenseServerEndpointResult& WithLicenseServerEndpoint(LicenseServerEndpoint&& value) { SetLicenseServerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteLicenseServerEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteLicenseServerEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteLicenseServerEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LicenseServerEndpoint m_licenseServerEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
