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
    AWS_APPFLOW_API CustomConnectorSourceProperties() = default;
    AWS_APPFLOW_API CustomConnectorSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    CustomConnectorSourceProperties& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    CustomConnectorSourceProperties& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    CustomConnectorSourceProperties& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The API of the connector application that Amazon AppFlow uses to transfer
     * your data.</p>
     */
    inline const DataTransferApi& GetDataTransferApi() const { return m_dataTransferApi; }
    inline bool DataTransferApiHasBeenSet() const { return m_dataTransferApiHasBeenSet; }
    template<typename DataTransferApiT = DataTransferApi>
    void SetDataTransferApi(DataTransferApiT&& value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = std::forward<DataTransferApiT>(value); }
    template<typename DataTransferApiT = DataTransferApi>
    CustomConnectorSourceProperties& WithDataTransferApi(DataTransferApiT&& value) { SetDataTransferApi(std::forward<DataTransferApiT>(value)); return *this;}
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
