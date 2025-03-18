/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/FilterByComponentType.h>
#include <aws/iottwinmaker/model/FilterByEntity.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job AWS IoT TwinMaker source configuration
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/IotTwinMakerSourceConfigurationFilter">AWS
   * API Reference</a></p>
   */
  class IotTwinMakerSourceConfigurationFilter
  {
  public:
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter() = default;
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter by component type.</p>
     */
    inline const FilterByComponentType& GetFilterByComponentType() const { return m_filterByComponentType; }
    inline bool FilterByComponentTypeHasBeenSet() const { return m_filterByComponentTypeHasBeenSet; }
    template<typename FilterByComponentTypeT = FilterByComponentType>
    void SetFilterByComponentType(FilterByComponentTypeT&& value) { m_filterByComponentTypeHasBeenSet = true; m_filterByComponentType = std::forward<FilterByComponentTypeT>(value); }
    template<typename FilterByComponentTypeT = FilterByComponentType>
    IotTwinMakerSourceConfigurationFilter& WithFilterByComponentType(FilterByComponentTypeT&& value) { SetFilterByComponentType(std::forward<FilterByComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter by entity.</p>
     */
    inline const FilterByEntity& GetFilterByEntity() const { return m_filterByEntity; }
    inline bool FilterByEntityHasBeenSet() const { return m_filterByEntityHasBeenSet; }
    template<typename FilterByEntityT = FilterByEntity>
    void SetFilterByEntity(FilterByEntityT&& value) { m_filterByEntityHasBeenSet = true; m_filterByEntity = std::forward<FilterByEntityT>(value); }
    template<typename FilterByEntityT = FilterByEntity>
    IotTwinMakerSourceConfigurationFilter& WithFilterByEntity(FilterByEntityT&& value) { SetFilterByEntity(std::forward<FilterByEntityT>(value)); return *this;}
    ///@}
  private:

    FilterByComponentType m_filterByComponentType;
    bool m_filterByComponentTypeHasBeenSet = false;

    FilterByEntity m_filterByEntity;
    bool m_filterByEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
