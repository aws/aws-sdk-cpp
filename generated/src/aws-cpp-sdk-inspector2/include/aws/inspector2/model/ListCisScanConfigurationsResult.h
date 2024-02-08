/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisScanConfiguration.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCisScanConfigurationsResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult();
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline const Aws::Vector<CisScanConfiguration>& GetScanConfigurations() const{ return m_scanConfigurations; }

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline void SetScanConfigurations(const Aws::Vector<CisScanConfiguration>& value) { m_scanConfigurations = value; }

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline void SetScanConfigurations(Aws::Vector<CisScanConfiguration>&& value) { m_scanConfigurations = std::move(value); }

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline ListCisScanConfigurationsResult& WithScanConfigurations(const Aws::Vector<CisScanConfiguration>& value) { SetScanConfigurations(value); return *this;}

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline ListCisScanConfigurationsResult& WithScanConfigurations(Aws::Vector<CisScanConfiguration>&& value) { SetScanConfigurations(std::move(value)); return *this;}

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline ListCisScanConfigurationsResult& AddScanConfigurations(const CisScanConfiguration& value) { m_scanConfigurations.push_back(value); return *this; }

    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline ListCisScanConfigurationsResult& AddScanConfigurations(CisScanConfiguration&& value) { m_scanConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCisScanConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCisScanConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCisScanConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CisScanConfiguration> m_scanConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
