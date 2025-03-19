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
   * <p>Specifies values used to filter responses when searching for insights. You
   * can use a <code>ResourceCollection</code>, <code>ServiceCollection</code>, array
   * of severities, and an array of status values. Each filter type contains one or
   * more values to search for. If you specify multiple filter types, the filter
   * types are joined with an <code>AND</code>, and the request returns only results
   * that match all of the specified filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsightsFilters">AWS
   * API Reference</a></p>
   */
  class SearchInsightsFilters
  {
  public:
    AWS_DEVOPSGURU_API SearchInsightsFilters() = default;
    AWS_DEVOPSGURU_API SearchInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API SearchInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SearchInsightsFilters& WithSeverities(SeveritiesT&& value) { SetSeverities(std::forward<SeveritiesT>(value)); return *this;}
    inline SearchInsightsFilters& AddSeverities(InsightSeverity value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }
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
    SearchInsightsFilters& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline SearchInsightsFilters& AddStatuses(InsightStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    SearchInsightsFilters& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline const ServiceCollection& GetServiceCollection() const { return m_serviceCollection; }
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }
    template<typename ServiceCollectionT = ServiceCollection>
    void SetServiceCollection(ServiceCollectionT&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::forward<ServiceCollectionT>(value); }
    template<typename ServiceCollectionT = ServiceCollection>
    SearchInsightsFilters& WithServiceCollection(ServiceCollectionT&& value) { SetServiceCollection(std::forward<ServiceCollectionT>(value)); return *this;}
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
