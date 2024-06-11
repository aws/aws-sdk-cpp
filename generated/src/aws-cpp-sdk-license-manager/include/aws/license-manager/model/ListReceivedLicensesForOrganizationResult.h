﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantedLicense.h>
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
  class ListReceivedLicensesForOrganizationResult
  {
  public:
    AWS_LICENSEMANAGER_API ListReceivedLicensesForOrganizationResult();
    AWS_LICENSEMANAGER_API ListReceivedLicensesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListReceivedLicensesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the licenses the organization has received.</p>
     */
    inline const Aws::Vector<GrantedLicense>& GetLicenses() const{ return m_licenses; }
    inline void SetLicenses(const Aws::Vector<GrantedLicense>& value) { m_licenses = value; }
    inline void SetLicenses(Aws::Vector<GrantedLicense>&& value) { m_licenses = std::move(value); }
    inline ListReceivedLicensesForOrganizationResult& WithLicenses(const Aws::Vector<GrantedLicense>& value) { SetLicenses(value); return *this;}
    inline ListReceivedLicensesForOrganizationResult& WithLicenses(Aws::Vector<GrantedLicense>&& value) { SetLicenses(std::move(value)); return *this;}
    inline ListReceivedLicensesForOrganizationResult& AddLicenses(const GrantedLicense& value) { m_licenses.push_back(value); return *this; }
    inline ListReceivedLicensesForOrganizationResult& AddLicenses(GrantedLicense&& value) { m_licenses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReceivedLicensesForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReceivedLicensesForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReceivedLicensesForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReceivedLicensesForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReceivedLicensesForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReceivedLicensesForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GrantedLicense> m_licenses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
