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
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter();
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfigurationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter by component type.</p>
     */
    inline const FilterByComponentType& GetFilterByComponentType() const{ return m_filterByComponentType; }

    /**
     * <p>Filter by component type.</p>
     */
    inline bool FilterByComponentTypeHasBeenSet() const { return m_filterByComponentTypeHasBeenSet; }

    /**
     * <p>Filter by component type.</p>
     */
    inline void SetFilterByComponentType(const FilterByComponentType& value) { m_filterByComponentTypeHasBeenSet = true; m_filterByComponentType = value; }

    /**
     * <p>Filter by component type.</p>
     */
    inline void SetFilterByComponentType(FilterByComponentType&& value) { m_filterByComponentTypeHasBeenSet = true; m_filterByComponentType = std::move(value); }

    /**
     * <p>Filter by component type.</p>
     */
    inline IotTwinMakerSourceConfigurationFilter& WithFilterByComponentType(const FilterByComponentType& value) { SetFilterByComponentType(value); return *this;}

    /**
     * <p>Filter by component type.</p>
     */
    inline IotTwinMakerSourceConfigurationFilter& WithFilterByComponentType(FilterByComponentType&& value) { SetFilterByComponentType(std::move(value)); return *this;}


    /**
     * <p>Filter by entity.</p>
     */
    inline const FilterByEntity& GetFilterByEntity() const{ return m_filterByEntity; }

    /**
     * <p>Filter by entity.</p>
     */
    inline bool FilterByEntityHasBeenSet() const { return m_filterByEntityHasBeenSet; }

    /**
     * <p>Filter by entity.</p>
     */
    inline void SetFilterByEntity(const FilterByEntity& value) { m_filterByEntityHasBeenSet = true; m_filterByEntity = value; }

    /**
     * <p>Filter by entity.</p>
     */
    inline void SetFilterByEntity(FilterByEntity&& value) { m_filterByEntityHasBeenSet = true; m_filterByEntity = std::move(value); }

    /**
     * <p>Filter by entity.</p>
     */
    inline IotTwinMakerSourceConfigurationFilter& WithFilterByEntity(const FilterByEntity& value) { SetFilterByEntity(value); return *this;}

    /**
     * <p>Filter by entity.</p>
     */
    inline IotTwinMakerSourceConfigurationFilter& WithFilterByEntity(FilterByEntity&& value) { SetFilterByEntity(std::move(value)); return *this;}

  private:

    FilterByComponentType m_filterByComponentType;
    bool m_filterByComponentTypeHasBeenSet = false;

    FilterByEntity m_filterByEntity;
    bool m_filterByEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
