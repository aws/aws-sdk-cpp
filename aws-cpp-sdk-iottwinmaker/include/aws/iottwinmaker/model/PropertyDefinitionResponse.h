/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/DataType.h>
#include <aws/iottwinmaker/model/DataValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that contains response data from a property definition
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class PropertyDefinitionResponse
  {
  public:
    AWS_IOTTWINMAKER_API PropertyDefinitionResponse();
    AWS_IOTTWINMAKER_API PropertyDefinitionResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyDefinitionResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline PropertyDefinitionResponse& WithDataType(const DataType& value) { SetDataType(value); return *this;}

    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline PropertyDefinitionResponse& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property consists of time series
     * data.</p>
     */
    inline bool GetIsTimeSeries() const{ return m_isTimeSeries; }

    /**
     * <p>A Boolean value that specifies whether the property consists of time series
     * data.</p>
     */
    inline bool IsTimeSeriesHasBeenSet() const { return m_isTimeSeriesHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property consists of time series
     * data.</p>
     */
    inline void SetIsTimeSeries(bool value) { m_isTimeSeriesHasBeenSet = true; m_isTimeSeries = value; }

    /**
     * <p>A Boolean value that specifies whether the property consists of time series
     * data.</p>
     */
    inline PropertyDefinitionResponse& WithIsTimeSeries(bool value) { SetIsTimeSeries(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property is required in an
     * entity.</p>
     */
    inline bool GetIsRequiredInEntity() const{ return m_isRequiredInEntity; }

    /**
     * <p>A Boolean value that specifies whether the property is required in an
     * entity.</p>
     */
    inline bool IsRequiredInEntityHasBeenSet() const { return m_isRequiredInEntityHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property is required in an
     * entity.</p>
     */
    inline void SetIsRequiredInEntity(bool value) { m_isRequiredInEntityHasBeenSet = true; m_isRequiredInEntity = value; }

    /**
     * <p>A Boolean value that specifies whether the property is required in an
     * entity.</p>
     */
    inline PropertyDefinitionResponse& WithIsRequiredInEntity(bool value) { SetIsRequiredInEntity(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property ID comes from an external
     * data store.</p>
     */
    inline bool GetIsExternalId() const{ return m_isExternalId; }

    /**
     * <p>A Boolean value that specifies whether the property ID comes from an external
     * data store.</p>
     */
    inline bool IsExternalIdHasBeenSet() const { return m_isExternalIdHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property ID comes from an external
     * data store.</p>
     */
    inline void SetIsExternalId(bool value) { m_isExternalIdHasBeenSet = true; m_isExternalId = value; }

    /**
     * <p>A Boolean value that specifies whether the property ID comes from an external
     * data store.</p>
     */
    inline PropertyDefinitionResponse& WithIsExternalId(bool value) { SetIsExternalId(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property is stored externally.</p>
     */
    inline bool GetIsStoredExternally() const{ return m_isStoredExternally; }

    /**
     * <p>A Boolean value that specifies whether the property is stored externally.</p>
     */
    inline bool IsStoredExternallyHasBeenSet() const { return m_isStoredExternallyHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property is stored externally.</p>
     */
    inline void SetIsStoredExternally(bool value) { m_isStoredExternallyHasBeenSet = true; m_isStoredExternally = value; }

    /**
     * <p>A Boolean value that specifies whether the property is stored externally.</p>
     */
    inline PropertyDefinitionResponse& WithIsStoredExternally(bool value) { SetIsStoredExternally(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property definition is imported
     * from an external data store.</p>
     */
    inline bool GetIsImported() const{ return m_isImported; }

    /**
     * <p>A Boolean value that specifies whether the property definition is imported
     * from an external data store.</p>
     */
    inline bool IsImportedHasBeenSet() const { return m_isImportedHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property definition is imported
     * from an external data store.</p>
     */
    inline void SetIsImported(bool value) { m_isImportedHasBeenSet = true; m_isImported = value; }

    /**
     * <p>A Boolean value that specifies whether the property definition is imported
     * from an external data store.</p>
     */
    inline PropertyDefinitionResponse& WithIsImported(bool value) { SetIsImported(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property definition can be
     * updated.</p>
     */
    inline bool GetIsFinal() const{ return m_isFinal; }

    /**
     * <p>A Boolean value that specifies whether the property definition can be
     * updated.</p>
     */
    inline bool IsFinalHasBeenSet() const { return m_isFinalHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property definition can be
     * updated.</p>
     */
    inline void SetIsFinal(bool value) { m_isFinalHasBeenSet = true; m_isFinal = value; }

    /**
     * <p>A Boolean value that specifies whether the property definition can be
     * updated.</p>
     */
    inline PropertyDefinitionResponse& WithIsFinal(bool value) { SetIsFinal(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the property definition is inherited
     * from a parent entity.</p>
     */
    inline bool GetIsInherited() const{ return m_isInherited; }

    /**
     * <p>A Boolean value that specifies whether the property definition is inherited
     * from a parent entity.</p>
     */
    inline bool IsInheritedHasBeenSet() const { return m_isInheritedHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether the property definition is inherited
     * from a parent entity.</p>
     */
    inline void SetIsInherited(bool value) { m_isInheritedHasBeenSet = true; m_isInherited = value; }

    /**
     * <p>A Boolean value that specifies whether the property definition is inherited
     * from a parent entity.</p>
     */
    inline PropertyDefinitionResponse& WithIsInherited(bool value) { SetIsInherited(value); return *this;}


    /**
     * <p>An object that contains the default value.</p>
     */
    inline const DataValue& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>An object that contains the default value.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>An object that contains the default value.</p>
     */
    inline void SetDefaultValue(const DataValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>An object that contains the default value.</p>
     */
    inline void SetDefaultValue(DataValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>An object that contains the default value.</p>
     */
    inline PropertyDefinitionResponse& WithDefaultValue(const DataValue& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>An object that contains the default value.</p>
     */
    inline PropertyDefinitionResponse& WithDefaultValue(DataValue&& value) { SetDefaultValue(std::move(value)); return *this;}


    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping that specifies configuration information about the property.</p>
     */
    inline PropertyDefinitionResponse& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }


    /**
     * <p>A friendly name for the property.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A friendly name for the property.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A friendly name for the property.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A friendly name for the property.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A friendly name for the property.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A friendly name for the property.</p>
     */
    inline PropertyDefinitionResponse& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A friendly name for the property.</p>
     */
    inline PropertyDefinitionResponse& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the property.</p>
     */
    inline PropertyDefinitionResponse& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_isTimeSeries;
    bool m_isTimeSeriesHasBeenSet = false;

    bool m_isRequiredInEntity;
    bool m_isRequiredInEntityHasBeenSet = false;

    bool m_isExternalId;
    bool m_isExternalIdHasBeenSet = false;

    bool m_isStoredExternally;
    bool m_isStoredExternallyHasBeenSet = false;

    bool m_isImported;
    bool m_isImportedHasBeenSet = false;

    bool m_isFinal;
    bool m_isFinalHasBeenSet = false;

    bool m_isInherited;
    bool m_isInheritedHasBeenSet = false;

    DataValue m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
