/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/EndpointSettingTypeValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Endpoint settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/EndpointSetting">AWS
   * API Reference</a></p>
   */
  class EndpointSetting
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting() = default;
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you want to give the endpoint settings.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EndpointSetting& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline EndpointSettingTypeValue GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EndpointSettingTypeValue value) { m_typeHasBeenSet = true; m_type = value; }
    inline EndpointSetting& WithType(EndpointSettingTypeValue value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enumerated values to use for this endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnumValues() const { return m_enumValues; }
    inline bool EnumValuesHasBeenSet() const { return m_enumValuesHasBeenSet; }
    template<typename EnumValuesT = Aws::Vector<Aws::String>>
    void SetEnumValues(EnumValuesT&& value) { m_enumValuesHasBeenSet = true; m_enumValues = std::forward<EnumValuesT>(value); }
    template<typename EnumValuesT = Aws::Vector<Aws::String>>
    EndpointSetting& WithEnumValues(EnumValuesT&& value) { SetEnumValues(std::forward<EnumValuesT>(value)); return *this;}
    template<typename EnumValuesT = Aws::String>
    EndpointSetting& AddEnumValues(EnumValuesT&& value) { m_enumValuesHasBeenSet = true; m_enumValues.emplace_back(std::forward<EnumValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that marks this endpoint setting as sensitive.</p>
     */
    inline bool GetSensitive() const { return m_sensitive; }
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }
    inline void SetSensitive(bool value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }
    inline EndpointSetting& WithSensitive(bool value) { SetSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for this endpoint setting.</p>
     */
    inline const Aws::String& GetUnits() const { return m_units; }
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }
    template<typename UnitsT = Aws::String>
    void SetUnits(UnitsT&& value) { m_unitsHasBeenSet = true; m_units = std::forward<UnitsT>(value); }
    template<typename UnitsT = Aws::String>
    EndpointSetting& WithUnits(UnitsT&& value) { SetUnits(std::forward<UnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance or validity of an endpoint setting for an engine name and its
     * endpoint type.</p>
     */
    inline const Aws::String& GetApplicability() const { return m_applicability; }
    inline bool ApplicabilityHasBeenSet() const { return m_applicabilityHasBeenSet; }
    template<typename ApplicabilityT = Aws::String>
    void SetApplicability(ApplicabilityT&& value) { m_applicabilityHasBeenSet = true; m_applicability = std::forward<ApplicabilityT>(value); }
    template<typename ApplicabilityT = Aws::String>
    EndpointSetting& WithApplicability(ApplicabilityT&& value) { SetApplicability(std::forward<ApplicabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of an endpoint setting that is of type
     * <code>int</code>.</p>
     */
    inline int GetIntValueMin() const { return m_intValueMin; }
    inline bool IntValueMinHasBeenSet() const { return m_intValueMinHasBeenSet; }
    inline void SetIntValueMin(int value) { m_intValueMinHasBeenSet = true; m_intValueMin = value; }
    inline EndpointSetting& WithIntValueMin(int value) { SetIntValueMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of an endpoint setting that is of type
     * <code>int</code>.</p>
     */
    inline int GetIntValueMax() const { return m_intValueMax; }
    inline bool IntValueMaxHasBeenSet() const { return m_intValueMaxHasBeenSet; }
    inline void SetIntValueMax(int value) { m_intValueMaxHasBeenSet = true; m_intValueMax = value; }
    inline EndpointSetting& WithIntValueMax(int value) { SetIntValueMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the endpoint setting if no value is specified using
     * <code>CreateEndpoint</code> or <code>ModifyEndpoint</code>.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    EndpointSetting& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EndpointSettingTypeValue m_type{EndpointSettingTypeValue::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_enumValues;
    bool m_enumValuesHasBeenSet = false;

    bool m_sensitive{false};
    bool m_sensitiveHasBeenSet = false;

    Aws::String m_units;
    bool m_unitsHasBeenSet = false;

    Aws::String m_applicability;
    bool m_applicabilityHasBeenSet = false;

    int m_intValueMin{0};
    bool m_intValueMinHasBeenSet = false;

    int m_intValueMax{0};
    bool m_intValueMaxHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
