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
   * <p>An object that sets information about a property.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class PropertyDefinitionRequest
  {
  public:
    AWS_IOTTWINMAKER_API PropertyDefinitionRequest();
    AWS_IOTTWINMAKER_API PropertyDefinitionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyDefinitionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains information about the data type.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline PropertyDefinitionRequest& WithDataType(const DataType& value) { SetDataType(value); return *this;}
    inline PropertyDefinitionRequest& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the property is required.</p>
     */
    inline bool GetIsRequiredInEntity() const{ return m_isRequiredInEntity; }
    inline bool IsRequiredInEntityHasBeenSet() const { return m_isRequiredInEntityHasBeenSet; }
    inline void SetIsRequiredInEntity(bool value) { m_isRequiredInEntityHasBeenSet = true; m_isRequiredInEntity = value; }
    inline PropertyDefinitionRequest& WithIsRequiredInEntity(bool value) { SetIsRequiredInEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the property ID comes from an external
     * data store.</p>
     */
    inline bool GetIsExternalId() const{ return m_isExternalId; }
    inline bool IsExternalIdHasBeenSet() const { return m_isExternalIdHasBeenSet; }
    inline void SetIsExternalId(bool value) { m_isExternalIdHasBeenSet = true; m_isExternalId = value; }
    inline PropertyDefinitionRequest& WithIsExternalId(bool value) { SetIsExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the property is stored externally.</p>
     */
    inline bool GetIsStoredExternally() const{ return m_isStoredExternally; }
    inline bool IsStoredExternallyHasBeenSet() const { return m_isStoredExternallyHasBeenSet; }
    inline void SetIsStoredExternally(bool value) { m_isStoredExternallyHasBeenSet = true; m_isStoredExternally = value; }
    inline PropertyDefinitionRequest& WithIsStoredExternally(bool value) { SetIsStoredExternally(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the property consists of time series
     * data.</p>
     */
    inline bool GetIsTimeSeries() const{ return m_isTimeSeries; }
    inline bool IsTimeSeriesHasBeenSet() const { return m_isTimeSeriesHasBeenSet; }
    inline void SetIsTimeSeries(bool value) { m_isTimeSeriesHasBeenSet = true; m_isTimeSeries = value; }
    inline PropertyDefinitionRequest& WithIsTimeSeries(bool value) { SetIsTimeSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the default value.</p>
     */
    inline const DataValue& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const DataValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(DataValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline PropertyDefinitionRequest& WithDefaultValue(const DataValue& value) { SetDefaultValue(value); return *this;}
    inline PropertyDefinitionRequest& WithDefaultValue(DataValue&& value) { SetDefaultValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping that specifies configuration information about the property. Use
     * this field to specify information that you read from and write to an external
     * source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline PropertyDefinitionRequest& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}
    inline PropertyDefinitionRequest& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline PropertyDefinitionRequest& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline PropertyDefinitionRequest& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A friendly name for the property.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline PropertyDefinitionRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline PropertyDefinitionRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline PropertyDefinitionRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_isRequiredInEntity;
    bool m_isRequiredInEntityHasBeenSet = false;

    bool m_isExternalId;
    bool m_isExternalIdHasBeenSet = false;

    bool m_isStoredExternally;
    bool m_isStoredExternallyHasBeenSet = false;

    bool m_isTimeSeries;
    bool m_isTimeSeriesHasBeenSet = false;

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
