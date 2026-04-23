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
#include <aws/license-manager/model/LicenseSpecification.h>
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
  class AWS_LICENSEMANAGER_API ListLicenseSpecificationsForResourceResult
  {
  public:
    ListLicenseSpecificationsForResourceResult();
    ListLicenseSpecificationsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLicenseSpecificationsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline void SetLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { m_licenseSpecifications = value; }

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline void SetLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { m_licenseSpecifications = std::move(value); }

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& WithLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { SetLicenseSpecifications(value); return *this;}

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& WithLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& AddLicenseSpecifications(const LicenseSpecification& value) { m_licenseSpecifications.push_back(value); return *this; }

    /**
     * <p>License configurations associated with a resource.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& AddLicenseSpecifications(LicenseSpecification&& value) { m_licenseSpecifications.push_back(std::move(value)); return *this; }


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
    inline ListLicenseSpecificationsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseSpecificationsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LicenseSpecification> m_licenseSpecifications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
