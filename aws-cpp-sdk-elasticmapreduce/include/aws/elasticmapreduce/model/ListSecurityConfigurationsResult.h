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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SecurityConfigurationSummary.h>
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
namespace EMR
{
namespace Model
{
  class AWS_EMR_API ListSecurityConfigurationsResult
  {
  public:
    ListSecurityConfigurationsResult();
    ListSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline const Aws::Vector<SecurityConfigurationSummary>& GetSecurityConfigurations() const{ return m_securityConfigurations; }

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline void SetSecurityConfigurations(const Aws::Vector<SecurityConfigurationSummary>& value) { m_securityConfigurations = value; }

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline void SetSecurityConfigurations(Aws::Vector<SecurityConfigurationSummary>&& value) { m_securityConfigurations = std::move(value); }

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(const Aws::Vector<SecurityConfigurationSummary>& value) { SetSecurityConfigurations(value); return *this;}

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(Aws::Vector<SecurityConfigurationSummary>&& value) { SetSecurityConfigurations(std::move(value)); return *this;}

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(const SecurityConfigurationSummary& value) { m_securityConfigurations.push_back(value); return *this; }

    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfigurationSummary&& value) { m_securityConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline ListSecurityConfigurationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline ListSecurityConfigurationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline ListSecurityConfigurationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<SecurityConfigurationSummary> m_securityConfigurations;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
