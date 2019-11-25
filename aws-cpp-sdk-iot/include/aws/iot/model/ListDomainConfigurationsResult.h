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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DomainConfigurationSummary.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListDomainConfigurationsResult
  {
  public:
    ListDomainConfigurationsResult();
    ListDomainConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDomainConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline const Aws::Vector<DomainConfigurationSummary>& GetDomainConfigurations() const{ return m_domainConfigurations; }

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline void SetDomainConfigurations(const Aws::Vector<DomainConfigurationSummary>& value) { m_domainConfigurations = value; }

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline void SetDomainConfigurations(Aws::Vector<DomainConfigurationSummary>&& value) { m_domainConfigurations = std::move(value); }

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline ListDomainConfigurationsResult& WithDomainConfigurations(const Aws::Vector<DomainConfigurationSummary>& value) { SetDomainConfigurations(value); return *this;}

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline ListDomainConfigurationsResult& WithDomainConfigurations(Aws::Vector<DomainConfigurationSummary>&& value) { SetDomainConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline ListDomainConfigurationsResult& AddDomainConfigurations(const DomainConfigurationSummary& value) { m_domainConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline ListDomainConfigurationsResult& AddDomainConfigurations(DomainConfigurationSummary&& value) { m_domainConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListDomainConfigurationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListDomainConfigurationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListDomainConfigurationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<DomainConfigurationSummary> m_domainConfigurations;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
