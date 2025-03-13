/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AggregatorFilterResourceType.h>
#include <aws/config/model/AggregatorFilterServicePrincipal.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object to filter the data you specify for an aggregator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregatorFilters">AWS
   * API Reference</a></p>
   */
  class AggregatorFilters
  {
  public:
    AWS_CONFIGSERVICE_API AggregatorFilters() = default;
    AWS_CONFIGSERVICE_API AggregatorFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatorFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to filter the configuration recorders based on the resource types
     * in scope for recording.</p>
     */
    inline const AggregatorFilterResourceType& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = AggregatorFilterResourceType>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = AggregatorFilterResourceType>
    AggregatorFilters& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to filter service-linked configuration recorders in an aggregator
     * based on the linked Amazon Web Services service.</p>
     */
    inline const AggregatorFilterServicePrincipal& GetServicePrincipal() const { return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    template<typename ServicePrincipalT = AggregatorFilterServicePrincipal>
    void SetServicePrincipal(ServicePrincipalT&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::forward<ServicePrincipalT>(value); }
    template<typename ServicePrincipalT = AggregatorFilterServicePrincipal>
    AggregatorFilters& WithServicePrincipal(ServicePrincipalT&& value) { SetServicePrincipal(std::forward<ServicePrincipalT>(value)); return *this;}
    ///@}
  private:

    AggregatorFilterResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    AggregatorFilterServicePrincipal m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
