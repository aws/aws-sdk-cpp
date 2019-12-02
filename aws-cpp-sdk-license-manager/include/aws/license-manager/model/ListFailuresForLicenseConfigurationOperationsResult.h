/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult
  {
  public:
    ListFailuresForLicenseConfigurationOperationsResult();
    ListFailuresForLicenseConfigurationOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFailuresForLicenseConfigurationOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
