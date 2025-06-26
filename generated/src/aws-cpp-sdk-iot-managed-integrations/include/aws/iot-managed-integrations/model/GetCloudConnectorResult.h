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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetCloudConnectorResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetCloudConnectorResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetCloudConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetCloudConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The display name of the C2C connector.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCloudConnectorResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the cloud connector endpoint, including
     * connection parameters and authentication requirements.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const { return m_endpointConfig; }
    template<typename EndpointConfigT = EndpointConfig>
    void SetEndpointConfig(EndpointConfigT&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::forward<EndpointConfigT>(value); }
    template<typename EndpointConfigT = EndpointConfig>
    GetCloudConnectorResult& WithEndpointConfig(EndpointConfigT&& value) { SetEndpointConfig(std::forward<EndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the C2C connector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCloudConnectorResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint used for the cloud connector, which defines how the
     * connector communicates with external services.</p>
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline GetCloudConnectorResult& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cloud connector.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetCloudConnectorResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cloud connector created.</p>
     */
    inline CloudConnectorType GetType() const { return m_type; }
    inline void SetType(CloudConnectorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetCloudConnectorResult& WithType(CloudConnectorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
