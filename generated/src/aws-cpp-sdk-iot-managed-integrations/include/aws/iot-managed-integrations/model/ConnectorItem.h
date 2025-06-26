/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/EndpointConfig.h>
#include <aws/iot-managed-integrations/model/EndpointType.h>
#include <aws/iot-managed-integrations/model/CloudConnectorType.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure describing a connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ConnectorItem">AWS
   * API Reference</a></p>
   */
  class ConnectorItem
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorItem() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of the C2C connector.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectorItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the cloud connector endpoint, including
     * connection parameters and authentication requirements.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const { return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    template<typename EndpointConfigT = EndpointConfig>
    void SetEndpointConfig(EndpointConfigT&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::forward<EndpointConfigT>(value); }
    template<typename EndpointConfigT = EndpointConfig>
    ConnectorItem& WithEndpointConfig(EndpointConfigT&& value) { SetEndpointConfig(std::forward<EndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the C2C connector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectorItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint used for the C2C connector.</p>
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline ConnectorItem& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the C2C connector.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConnectorItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cloud connector created.</p>
     */
    inline CloudConnectorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CloudConnectorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ConnectorItem& WithType(CloudConnectorType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EndpointConfig m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EndpointType m_endpointType{EndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CloudConnectorType m_type{CloudConnectorType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
