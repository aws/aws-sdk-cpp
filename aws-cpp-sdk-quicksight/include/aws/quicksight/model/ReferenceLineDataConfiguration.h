/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReferenceLineStaticDataConfiguration.h>
#include <aws/quicksight/model/ReferenceLineDynamicDataConfiguration.h>
#include <aws/quicksight/model/AxisBinding.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The data configuration of the reference line.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineDataConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineDataConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline const ReferenceLineStaticDataConfiguration& GetStaticConfiguration() const{ return m_staticConfiguration; }

    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline bool StaticConfigurationHasBeenSet() const { return m_staticConfigurationHasBeenSet; }

    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline void SetStaticConfiguration(const ReferenceLineStaticDataConfiguration& value) { m_staticConfigurationHasBeenSet = true; m_staticConfiguration = value; }

    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline void SetStaticConfiguration(ReferenceLineStaticDataConfiguration&& value) { m_staticConfigurationHasBeenSet = true; m_staticConfiguration = std::move(value); }

    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline ReferenceLineDataConfiguration& WithStaticConfiguration(const ReferenceLineStaticDataConfiguration& value) { SetStaticConfiguration(value); return *this;}

    /**
     * <p>The static data configuration of the reference line data configuration.</p>
     */
    inline ReferenceLineDataConfiguration& WithStaticConfiguration(ReferenceLineStaticDataConfiguration&& value) { SetStaticConfiguration(std::move(value)); return *this;}


    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline const ReferenceLineDynamicDataConfiguration& GetDynamicConfiguration() const{ return m_dynamicConfiguration; }

    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline bool DynamicConfigurationHasBeenSet() const { return m_dynamicConfigurationHasBeenSet; }

    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline void SetDynamicConfiguration(const ReferenceLineDynamicDataConfiguration& value) { m_dynamicConfigurationHasBeenSet = true; m_dynamicConfiguration = value; }

    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline void SetDynamicConfiguration(ReferenceLineDynamicDataConfiguration&& value) { m_dynamicConfigurationHasBeenSet = true; m_dynamicConfiguration = std::move(value); }

    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline ReferenceLineDataConfiguration& WithDynamicConfiguration(const ReferenceLineDynamicDataConfiguration& value) { SetDynamicConfiguration(value); return *this;}

    /**
     * <p>The dynamic configuration of the reference line data configuration.</p>
     */
    inline ReferenceLineDataConfiguration& WithDynamicConfiguration(ReferenceLineDynamicDataConfiguration&& value) { SetDynamicConfiguration(std::move(value)); return *this;}


    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline const AxisBinding& GetAxisBinding() const{ return m_axisBinding; }

    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline bool AxisBindingHasBeenSet() const { return m_axisBindingHasBeenSet; }

    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline void SetAxisBinding(const AxisBinding& value) { m_axisBindingHasBeenSet = true; m_axisBinding = value; }

    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline void SetAxisBinding(AxisBinding&& value) { m_axisBindingHasBeenSet = true; m_axisBinding = std::move(value); }

    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline ReferenceLineDataConfiguration& WithAxisBinding(const AxisBinding& value) { SetAxisBinding(value); return *this;}

    /**
     * <p>The axis binding type of the reference line. Choose one of the following
     * options:</p> <ul> <li> <p>PrimaryY</p> </li> <li> <p>SecondaryY</p> </li> </ul>
     */
    inline ReferenceLineDataConfiguration& WithAxisBinding(AxisBinding&& value) { SetAxisBinding(std::move(value)); return *this;}

  private:

    ReferenceLineStaticDataConfiguration m_staticConfiguration;
    bool m_staticConfigurationHasBeenSet = false;

    ReferenceLineDynamicDataConfiguration m_dynamicConfiguration;
    bool m_dynamicConfigurationHasBeenSet = false;

    AxisBinding m_axisBinding;
    bool m_axisBindingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
