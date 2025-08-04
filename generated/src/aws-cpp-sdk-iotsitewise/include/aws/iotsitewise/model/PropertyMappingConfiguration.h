/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/PropertyMapping.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains configuration options for mapping properties from an interface asset
   * model to an asset model where the interface is applied.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PropertyMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class PropertyMappingConfiguration
  {
  public:
    AWS_IOTSITEWISE_API PropertyMappingConfiguration() = default;
    AWS_IOTSITEWISE_API PropertyMappingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyMappingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If true, properties are matched by name between the interface asset model and
     * the asset model where the interface is applied.</p>
     */
    inline bool GetMatchByPropertyName() const { return m_matchByPropertyName; }
    inline bool MatchByPropertyNameHasBeenSet() const { return m_matchByPropertyNameHasBeenSet; }
    inline void SetMatchByPropertyName(bool value) { m_matchByPropertyNameHasBeenSet = true; m_matchByPropertyName = value; }
    inline PropertyMappingConfiguration& WithMatchByPropertyName(bool value) { SetMatchByPropertyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, missing properties from the interface asset model are automatically
     * created in the asset model where the interface is applied.</p>
     */
    inline bool GetCreateMissingProperty() const { return m_createMissingProperty; }
    inline bool CreateMissingPropertyHasBeenSet() const { return m_createMissingPropertyHasBeenSet; }
    inline void SetCreateMissingProperty(bool value) { m_createMissingPropertyHasBeenSet = true; m_createMissingProperty = value; }
    inline PropertyMappingConfiguration& WithCreateMissingProperty(bool value) { SetCreateMissingProperty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of specific property mappings that override the automatic mapping by
     * name when an interface is applied to an asset model.</p>
     */
    inline const Aws::Vector<PropertyMapping>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Vector<PropertyMapping>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Vector<PropertyMapping>>
    PropertyMappingConfiguration& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesT = PropertyMapping>
    PropertyMappingConfiguration& AddOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides.emplace_back(std::forward<OverridesT>(value)); return *this; }
    ///@}
  private:

    bool m_matchByPropertyName{false};
    bool m_matchByPropertyNameHasBeenSet = false;

    bool m_createMissingProperty{false};
    bool m_createMissingPropertyHasBeenSet = false;

    Aws::Vector<PropertyMapping> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
