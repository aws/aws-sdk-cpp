/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ServiceCollection.h>
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
   * <p> Specifies one or more service names that are used to list anomalies.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsightFilters">AWS
   * API Reference</a></p>
   */
  class ListAnomaliesForInsightFilters
  {
  public:
    AWS_DEVOPSGURU_API ListAnomaliesForInsightFilters() = default;
    AWS_DEVOPSGURU_API ListAnomaliesForInsightFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListAnomaliesForInsightFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ServiceCollection& GetServiceCollection() const { return m_serviceCollection; }
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }
    template<typename ServiceCollectionT = ServiceCollection>
    void SetServiceCollection(ServiceCollectionT&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::forward<ServiceCollectionT>(value); }
    template<typename ServiceCollectionT = ServiceCollection>
    ListAnomaliesForInsightFilters& WithServiceCollection(ServiceCollectionT&& value) { SetServiceCollection(std::forward<ServiceCollectionT>(value)); return *this;}
    ///@}
  private:

    ServiceCollection m_serviceCollection;
    bool m_serviceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
