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
   * <p> Specifies one or more severity values and one or more status values that are
   * used to search for insights. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsightsFilters">AWS
   * API Reference</a></p>
   */
  class SearchInsightsFilters
  {
  public:
    AWS_DEVOPSGURU_API SearchInsightsFilters();
    AWS_DEVOPSGURU_API SearchInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API SearchInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline const Aws::Vector<InsightSeverity>& GetSeverities() const{ return m_severities; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline void SetSeverities(const Aws::Vector<InsightSeverity>& value) { m_severitiesHasBeenSet = true; m_severities = value; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline void SetSeverities(Aws::Vector<InsightSeverity>&& value) { m_severitiesHasBeenSet = true; m_severities = std::move(value); }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline SearchInsightsFilters& WithSeverities(const Aws::Vector<InsightSeverity>& value) { SetSeverities(value); return *this;}

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline SearchInsightsFilters& WithSeverities(Aws::Vector<InsightSeverity>&& value) { SetSeverities(std::move(value)); return *this;}

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline SearchInsightsFilters& AddSeverities(const InsightSeverity& value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline SearchInsightsFilters& AddSeverities(InsightSeverity&& value) { m_severitiesHasBeenSet = true; m_severities.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline const Aws::Vector<InsightStatus>& GetStatuses() const{ return m_statuses; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline void SetStatuses(const Aws::Vector<InsightStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline void SetStatuses(Aws::Vector<InsightStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline SearchInsightsFilters& WithStatuses(const Aws::Vector<InsightStatus>& value) { SetStatuses(value); return *this;}

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline SearchInsightsFilters& WithStatuses(Aws::Vector<InsightStatus>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline SearchInsightsFilters& AddStatuses(const InsightStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline SearchInsightsFilters& AddStatuses(InsightStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline SearchInsightsFilters& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline SearchInsightsFilters& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline const ServiceCollection& GetServiceCollection() const{ return m_serviceCollection; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline void SetServiceCollection(const ServiceCollection& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = value; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline void SetServiceCollection(ServiceCollection&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::move(value); }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline SearchInsightsFilters& WithServiceCollection(const ServiceCollection& value) { SetServiceCollection(value); return *this;}

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline SearchInsightsFilters& WithServiceCollection(ServiceCollection&& value) { SetServiceCollection(std::move(value)); return *this;}

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
