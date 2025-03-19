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
    AWS_APPFLOW_API CustomConnectorDestinationProperties() = default;
    AWS_APPFLOW_API CustomConnectorDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity specified in the custom connector as a destination in the
     * flow.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    CustomConnectorDestinationProperties& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine how Amazon AppFlow handles an error when placing
     * data in the custom connector as destination.</p>
     */
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const { return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    void SetErrorHandlingConfig(ErrorHandlingConfigT&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::forward<ErrorHandlingConfigT>(value); }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    CustomConnectorDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfigT&& value) { SetErrorHandlingConfig(std::forward<ErrorHandlingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of write operation to be performed in the custom connector
     * when it's used as destination.</p>
     */
    inline WriteOperationType GetWriteOperationType() const { return m_writeOperationType; }
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }
    inline void SetWriteOperationType(WriteOperationType value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }
    inline CustomConnectorDestinationProperties& WithWriteOperationType(WriteOperationType value) { SetWriteOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update, delete, or upsert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const { return m_idFieldNames; }
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    void SetIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::forward<IdFieldNamesT>(value); }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    CustomConnectorDestinationProperties& WithIdFieldNames(IdFieldNamesT&& value) { SetIdFieldNames(std::forward<IdFieldNamesT>(value)); return *this;}
    template<typename IdFieldNamesT = Aws::String>
    CustomConnectorDestinationProperties& AddIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.emplace_back(std::forward<IdFieldNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom properties that are specific to the connector when it's used as a
     * destination in the flow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    CustomConnectorDestinationProperties& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    CustomConnectorDestinationProperties& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;

    WriteOperationType m_writeOperationType{WriteOperationType::NOT_SET};
    bool m_writeOperationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
