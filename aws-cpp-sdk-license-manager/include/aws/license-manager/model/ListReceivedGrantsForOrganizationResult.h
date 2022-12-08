/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/Grant.h>
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
  class ListReceivedGrantsForOrganizationResult
  {
  public:
    AWS_LICENSEMANAGER_API ListReceivedGrantsForOrganizationResult();
    AWS_LICENSEMANAGER_API ListReceivedGrantsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListReceivedGrantsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline const Aws::Vector<Grant>& GetGrants() const{ return m_grants; }

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline void SetGrants(const Aws::Vector<Grant>& value) { m_grants = value; }

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline void SetGrants(Aws::Vector<Grant>&& value) { m_grants = std::move(value); }

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& WithGrants(const Aws::Vector<Grant>& value) { SetGrants(value); return *this;}

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& WithGrants(Aws::Vector<Grant>&& value) { SetGrants(std::move(value)); return *this;}

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& AddGrants(const Grant& value) { m_grants.push_back(value); return *this; }

    /**
     * <p>Lists the grants the organization has received.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& AddGrants(Grant&& value) { m_grants.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedGrantsForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Grant> m_grants;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
