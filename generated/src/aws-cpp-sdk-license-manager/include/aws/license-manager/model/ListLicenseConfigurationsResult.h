﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConfiguration.h>
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
  class ListLicenseConfigurationsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseConfigurationsResult();
    AWS_LICENSEMANAGER_API ListLicenseConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the license configurations.</p>
     */
    inline const Aws::Vector<LicenseConfiguration>& GetLicenseConfigurations() const{ return m_licenseConfigurations; }
    inline void SetLicenseConfigurations(const Aws::Vector<LicenseConfiguration>& value) { m_licenseConfigurations = value; }
    inline void SetLicenseConfigurations(Aws::Vector<LicenseConfiguration>&& value) { m_licenseConfigurations = std::move(value); }
    inline ListLicenseConfigurationsResult& WithLicenseConfigurations(const Aws::Vector<LicenseConfiguration>& value) { SetLicenseConfigurations(value); return *this;}
    inline ListLicenseConfigurationsResult& WithLicenseConfigurations(Aws::Vector<LicenseConfiguration>&& value) { SetLicenseConfigurations(std::move(value)); return *this;}
    inline ListLicenseConfigurationsResult& AddLicenseConfigurations(const LicenseConfiguration& value) { m_licenseConfigurations.push_back(value); return *this; }
    inline ListLicenseConfigurationsResult& AddLicenseConfigurations(LicenseConfiguration&& value) { m_licenseConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLicenseConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLicenseConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLicenseConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLicenseConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLicenseConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLicenseConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConfiguration> m_licenseConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
