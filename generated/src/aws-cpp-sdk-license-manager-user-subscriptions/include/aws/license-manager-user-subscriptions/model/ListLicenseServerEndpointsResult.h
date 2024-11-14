/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
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
  class ListLicenseServerEndpointsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LicenseServerEndpoint</code> resources that contain
     * detailed information about the RDS License Servers that meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<LicenseServerEndpoint>& GetLicenseServerEndpoints() const{ return m_licenseServerEndpoints; }
    inline void SetLicenseServerEndpoints(const Aws::Vector<LicenseServerEndpoint>& value) { m_licenseServerEndpoints = value; }
    inline void SetLicenseServerEndpoints(Aws::Vector<LicenseServerEndpoint>&& value) { m_licenseServerEndpoints = std::move(value); }
    inline ListLicenseServerEndpointsResult& WithLicenseServerEndpoints(const Aws::Vector<LicenseServerEndpoint>& value) { SetLicenseServerEndpoints(value); return *this;}
    inline ListLicenseServerEndpointsResult& WithLicenseServerEndpoints(Aws::Vector<LicenseServerEndpoint>&& value) { SetLicenseServerEndpoints(std::move(value)); return *this;}
    inline ListLicenseServerEndpointsResult& AddLicenseServerEndpoints(const LicenseServerEndpoint& value) { m_licenseServerEndpoints.push_back(value); return *this; }
    inline ListLicenseServerEndpointsResult& AddLicenseServerEndpoints(LicenseServerEndpoint&& value) { m_licenseServerEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLicenseServerEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLicenseServerEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLicenseServerEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLicenseServerEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLicenseServerEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLicenseServerEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseServerEndpoint> m_licenseServerEndpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
