/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure containing summary information about a connector destination, which
   * defines how a cloud-to-cloud connector connects to a customer's AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ConnectorDestinationSummary">AWS
   * API Reference</a></p>
   */
  class ConnectorDestinationSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorDestinationSummary() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ConnectorDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of the connector destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectorDestinationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connector destination.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectorDestinationSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cloud connector associated with this connector
     * destination.</p>
     */
    inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
    inline bool CloudConnectorIdHasBeenSet() const { return m_cloudConnectorIdHasBeenSet; }
    template<typename CloudConnectorIdT = Aws::String>
    void SetCloudConnectorId(CloudConnectorIdT&& value) { m_cloudConnectorIdHasBeenSet = true; m_cloudConnectorId = std::forward<CloudConnectorIdT>(value); }
    template<typename CloudConnectorIdT = Aws::String>
    ConnectorDestinationSummary& WithCloudConnectorId(CloudConnectorIdT&& value) { SetCloudConnectorId(std::forward<CloudConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the connector destination.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConnectorDestinationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cloudConnectorId;
    bool m_cloudConnectorIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
