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
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting();
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EndpointSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you want to give the endpoint settings.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EndpointSetting& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EndpointSetting& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EndpointSetting& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline const EndpointSettingTypeValue& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EndpointSettingTypeValue& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EndpointSettingTypeValue&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EndpointSetting& WithType(const EndpointSettingTypeValue& value) { SetType(value); return *this;}
    inline EndpointSetting& WithType(EndpointSettingTypeValue&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enumerated values to use for this endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnumValues() const{ return m_enumValues; }
    inline bool EnumValuesHasBeenSet() const { return m_enumValuesHasBeenSet; }
    inline void SetEnumValues(const Aws::Vector<Aws::String>& value) { m_enumValuesHasBeenSet = true; m_enumValues = value; }
    inline void SetEnumValues(Aws::Vector<Aws::String>&& value) { m_enumValuesHasBeenSet = true; m_enumValues = std::move(value); }
    inline EndpointSetting& WithEnumValues(const Aws::Vector<Aws::String>& value) { SetEnumValues(value); return *this;}
    inline EndpointSetting& WithEnumValues(Aws::Vector<Aws::String>&& value) { SetEnumValues(std::move(value)); return *this;}
    inline EndpointSetting& AddEnumValues(const Aws::String& value) { m_enumValuesHasBeenSet = true; m_enumValues.push_back(value); return *this; }
    inline EndpointSetting& AddEnumValues(Aws::String&& value) { m_enumValuesHasBeenSet = true; m_enumValues.push_back(std::move(value)); return *this; }
    inline EndpointSetting& AddEnumValues(const char* value) { m_enumValuesHasBeenSet = true; m_enumValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that marks this endpoint setting as sensitive.</p>
     */
    inline bool GetSensitive() const{ return m_sensitive; }
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }
    inline void SetSensitive(bool value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }
    inline EndpointSetting& WithSensitive(bool value) { SetSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for this endpoint setting.</p>
     */
    inline const Aws::String& GetUnits() const{ return m_units; }
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }
    inline void SetUnits(const Aws::String& value) { m_unitsHasBeenSet = true; m_units = value; }
    inline void SetUnits(Aws::String&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }
    inline void SetUnits(const char* value) { m_unitsHasBeenSet = true; m_units.assign(value); }
    inline EndpointSetting& WithUnits(const Aws::String& value) { SetUnits(value); return *this;}
    inline EndpointSetting& WithUnits(Aws::String&& value) { SetUnits(std::move(value)); return *this;}
    inline EndpointSetting& WithUnits(const char* value) { SetUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance or validity of an endpoint setting for an engine name and its
     * endpoint type.</p>
     */
    inline const Aws::String& GetApplicability() const{ return m_applicability; }
    inline bool ApplicabilityHasBeenSet() const { return m_applicabilityHasBeenSet; }
    inline void SetApplicability(const Aws::String& value) { m_applicabilityHasBeenSet = true; m_applicability = value; }
    inline void SetApplicability(Aws::String&& value) { m_applicabilityHasBeenSet = true; m_applicability = std::move(value); }
    inline void SetApplicability(const char* value) { m_applicabilityHasBeenSet = true; m_applicability.assign(value); }
    inline EndpointSetting& WithApplicability(const Aws::String& value) { SetApplicability(value); return *this;}
    inline EndpointSetting& WithApplicability(Aws::String&& value) { SetApplicability(std::move(value)); return *this;}
    inline EndpointSetting& WithApplicability(const char* value) { SetApplicability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of an endpoint setting that is of type
     * <code>int</code>.</p>
     */
    inline int GetIntValueMin() const{ return m_intValueMin; }
    inline bool IntValueMinHasBeenSet() const { return m_intValueMinHasBeenSet; }
    inline void SetIntValueMin(int value) { m_intValueMinHasBeenSet = true; m_intValueMin = value; }
    inline EndpointSetting& WithIntValueMin(int value) { SetIntValueMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of an endpoint setting that is of type
     * <code>int</code>.</p>
     */
    inline int GetIntValueMax() const{ return m_intValueMax; }
    inline bool IntValueMaxHasBeenSet() const { return m_intValueMaxHasBeenSet; }
    inline void SetIntValueMax(int value) { m_intValueMaxHasBeenSet = true; m_intValueMax = value; }
    inline EndpointSetting& WithIntValueMax(int value) { SetIntValueMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the endpoint setting if no value is specified using
     * <code>CreateEndpoint</code> or <code>ModifyEndpoint</code>.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline EndpointSetting& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline EndpointSetting& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline EndpointSetting& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EndpointSettingTypeValue m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_enumValues;
    bool m_enumValuesHasBeenSet = false;

    bool m_sensitive;
    bool m_sensitiveHasBeenSet = false;

    Aws::String m_units;
    bool m_unitsHasBeenSet = false;

    Aws::String m_applicability;
    bool m_applicabilityHasBeenSet = false;

    int m_intValueMin;
    bool m_intValueMinHasBeenSet = false;

    int m_intValueMax;
    bool m_intValueMaxHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
