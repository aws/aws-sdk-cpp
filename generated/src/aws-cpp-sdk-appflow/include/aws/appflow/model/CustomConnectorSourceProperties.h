/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appflow/model/DataTransferApi.h>
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
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomConnectorSourceProperties">AWS
   * API Reference</a></p>
   */
  class CustomConnectorSourceProperties
  {
  public:
    AWS_APPFLOW_API CustomConnectorSourceProperties();
    AWS_APPFLOW_API CustomConnectorSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }
    inline CustomConnectorSourceProperties& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline CustomConnectorSourceProperties& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline CustomConnectorSourceProperties& WithEntityName(const char* value) { SetEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }
    inline CustomConnectorSourceProperties& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}
    inline CustomConnectorSourceProperties& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}
    inline CustomConnectorSourceProperties& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CustomConnectorSourceProperties& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The API of the connector application that Amazon AppFlow uses to transfer
     * your data.</p>
     */
    inline const DataTransferApi& GetDataTransferApi() const{ return m_dataTransferApi; }
    inline bool DataTransferApiHasBeenSet() const { return m_dataTransferApiHasBeenSet; }
    inline void SetDataTransferApi(const DataTransferApi& value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = value; }
    inline void SetDataTransferApi(DataTransferApi&& value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = std::move(value); }
    inline CustomConnectorSourceProperties& WithDataTransferApi(const DataTransferApi& value) { SetDataTransferApi(value); return *this;}
    inline CustomConnectorSourceProperties& WithDataTransferApi(DataTransferApi&& value) { SetDataTransferApi(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;

    DataTransferApi m_dataTransferApi;
    bool m_dataTransferApiHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
