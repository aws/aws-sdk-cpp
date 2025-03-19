/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>Structure representing one schema item associated with a managed
   * thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ManagedThingSchemaListItem">AWS
   * API Reference</a></p>
   */
  class ManagedThingSchemaListItem
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the endpoint for a managed thing.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    ManagedThingSchemaListItem& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the capability for a managed thing.</p>
     */
    inline const Aws::String& GetCapabilityId() const { return m_capabilityId; }
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }
    template<typename CapabilityIdT = Aws::String>
    void SetCapabilityId(CapabilityIdT&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::forward<CapabilityIdT>(value); }
    template<typename CapabilityIdT = Aws::String>
    ManagedThingSchemaListItem& WithCapabilityId(CapabilityIdT&& value) { SetCapabilityId(std::forward<CapabilityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation schema for one schema item associated with a managed
     * thing.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Utils::Document>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Utils::Document>
    ManagedThingSchemaListItem& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;

    Aws::Utils::Document m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
