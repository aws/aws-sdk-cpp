/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListDomainConfigurationsResult
  {
  public:
    AWS_IOT_API ListDomainConfigurationsResult();
    AWS_IOT_API ListDomainConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDomainConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
