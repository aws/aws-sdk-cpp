/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ErrorHandlingConfig.h>
#include <aws/appflow/model/WriteOperationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The properties that are applied when the custom connector is being used as a
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomConnectorDestinationProperties">AWS
   * API Reference</a></p>
   */
  class CustomConnectorDestinationProperties
  {
  public:
    AWS_APPFLOW_API CustomConnectorDestinationProperties();
    AWS_APPFLOW_API CustomConnectorDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity specified in the custom connector as a destination in the
     * flow.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }
    inline CustomConnectorDestinationProperties& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline CustomConnectorDestinationProperties& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline CustomConnectorDestinationProperties& WithEntityName(const char* value) { SetEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine how Amazon AppFlow handles an error when placing
     * data in the custom connector as destination.</p>
     */
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }
    inline CustomConnectorDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}
    inline CustomConnectorDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of write operation to be performed in the custom connector
     * when it's used as destination.</p>
     */
    inline const WriteOperationType& GetWriteOperationType() const{ return m_writeOperationType; }
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }
    inline void SetWriteOperationType(const WriteOperationType& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }
    inline void SetWriteOperationType(WriteOperationType&& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = std::move(value); }
    inline CustomConnectorDestinationProperties& WithWriteOperationType(const WriteOperationType& value) { SetWriteOperationType(value); return *this;}
    inline CustomConnectorDestinationProperties& WithWriteOperationType(WriteOperationType&& value) { SetWriteOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update, delete, or upsert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const{ return m_idFieldNames; }
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }
    inline void SetIdFieldNames(const Aws::Vector<Aws::String>& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = value; }
    inline void SetIdFieldNames(Aws::Vector<Aws::String>&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::move(value); }
    inline CustomConnectorDestinationProperties& WithIdFieldNames(const Aws::Vector<Aws::String>& value) { SetIdFieldNames(value); return *this;}
    inline CustomConnectorDestinationProperties& WithIdFieldNames(Aws::Vector<Aws::String>&& value) { SetIdFieldNames(std::move(value)); return *this;}
    inline CustomConnectorDestinationProperties& AddIdFieldNames(const Aws::String& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }
    inline CustomConnectorDestinationProperties& AddIdFieldNames(Aws::String&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(std::move(value)); return *this; }
    inline CustomConnectorDestinationProperties& AddIdFieldNames(const char* value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom properties that are specific to the connector when it's used as a
     * destination in the flow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }
    inline CustomConnectorDestinationProperties& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}
    inline CustomConnectorDestinationProperties& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}
    inline CustomConnectorDestinationProperties& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CustomConnectorDestinationProperties& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;

    WriteOperationType m_writeOperationType;
    bool m_writeOperationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
