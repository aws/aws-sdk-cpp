/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/ServiceCollection.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Filters you can use to specify which events are returned when
   * <code>ListEvents</code> is called. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchOrganizationInsightsFilters">AWS
   * API Reference</a></p>
   */
  class SearchOrganizationInsightsFilters
  {
  public:
    AWS_DEVOPSGURU_API SearchOrganizationInsightsFilters() = default;
    AWS_DEVOPSGURU_API SearchOrganizationInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API SearchOrganizationInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline const Aws::Vector<InsightSeverity>& GetSeverities() const { return m_severities; }
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }
    template<typename SeveritiesT = Aws::Vector<InsightSeverity>>
    void SetSeverities(SeveritiesT&& value) { m_severitiesHasBeenSet = true; m_severities = std::forward<SeveritiesT>(value); }
    template<typename SeveritiesT = Aws::Vector<InsightSeverity>>
    SearchOrganizationInsightsFilters& WithSeverities(SeveritiesT&& value) { SetSeverities(std::forward<SeveritiesT>(value)); return *this;}
    inline SearchOrganizationInsightsFilters& AddSeverities(InsightSeverity value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline const Aws::Vector<InsightStatus>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Vector<InsightStatus>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<InsightStatus>>
    SearchOrganizationInsightsFilters& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline SearchOrganizationInsightsFilters& AddStatuses(InsightStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    SearchOrganizationInsightsFilters& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCollection& GetServiceCollection() const { return m_serviceCollection; }
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }
    template<typename ServiceCollectionT = ServiceCollection>
    void SetServiceCollection(ServiceCollectionT&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::forward<ServiceCollectionT>(value); }
    template<typename ServiceCollectionT = ServiceCollection>
    SearchOrganizationInsightsFilters& WithServiceCollection(ServiceCollectionT&& value) { SetServiceCollection(std::forward<ServiceCollectionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InsightSeverity> m_severities;
    bool m_severitiesHasBeenSet = false;

    Aws::Vector<InsightStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    ServiceCollection m_serviceCollection;
    bool m_serviceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
