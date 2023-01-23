/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/License.h>
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
  class ListLicenseVersionsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseVersionsResult();
    AWS_LICENSEMANAGER_API ListLicenseVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License details.</p>
     */
    inline const Aws::Vector<License>& GetLicenses() const{ return m_licenses; }

    /**
     * <p>License details.</p>
     */
    inline void SetLicenses(const Aws::Vector<License>& value) { m_licenses = value; }

    /**
     * <p>License details.</p>
     */
    inline void SetLicenses(Aws::Vector<License>&& value) { m_licenses = std::move(value); }

    /**
     * <p>License details.</p>
     */
    inline ListLicenseVersionsResult& WithLicenses(const Aws::Vector<License>& value) { SetLicenses(value); return *this;}

    /**
     * <p>License details.</p>
     */
    inline ListLicenseVersionsResult& WithLicenses(Aws::Vector<License>&& value) { SetLicenses(std::move(value)); return *this;}

    /**
     * <p>License details.</p>
     */
    inline ListLicenseVersionsResult& AddLicenses(const License& value) { m_licenses.push_back(value); return *this; }

    /**
     * <p>License details.</p>
     */
    inline ListLicenseVersionsResult& AddLicenses(License&& value) { m_licenses.push_back(std::move(value)); return *this; }


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
    inline ListLicenseVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<License> m_licenses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
