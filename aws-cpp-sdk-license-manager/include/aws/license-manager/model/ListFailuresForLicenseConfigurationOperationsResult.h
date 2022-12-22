/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseOperationFailure.h>
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
  class ListFailuresForLicenseConfigurationOperationsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult();
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License configuration operations that failed.</p>
     */
    inline const Aws::Vector<LicenseOperationFailure>& GetLicenseOperationFailureList() const{ return m_licenseOperationFailureList; }

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline void SetLicenseOperationFailureList(const Aws::Vector<LicenseOperationFailure>& value) { m_licenseOperationFailureList = value; }

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline void SetLicenseOperationFailureList(Aws::Vector<LicenseOperationFailure>&& value) { m_licenseOperationFailureList = std::move(value); }

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& WithLicenseOperationFailureList(const Aws::Vector<LicenseOperationFailure>& value) { SetLicenseOperationFailureList(value); return *this;}

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& WithLicenseOperationFailureList(Aws::Vector<LicenseOperationFailure>&& value) { SetLicenseOperationFailureList(std::move(value)); return *this;}

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& AddLicenseOperationFailureList(const LicenseOperationFailure& value) { m_licenseOperationFailureList.push_back(value); return *this; }

    /**
     * <p>License configuration operations that failed.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& AddLicenseOperationFailureList(LicenseOperationFailure&& value) { m_licenseOperationFailureList.push_back(std::move(value)); return *this; }


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
    inline ListFailuresForLicenseConfigurationOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListFailuresForLicenseConfigurationOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LicenseOperationFailure> m_licenseOperationFailureList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
