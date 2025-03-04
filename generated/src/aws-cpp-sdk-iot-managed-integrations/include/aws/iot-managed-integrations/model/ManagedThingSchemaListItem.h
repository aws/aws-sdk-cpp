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
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem();
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSchemaListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the endpoint for a managed thing.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline ManagedThingSchemaListItem& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline ManagedThingSchemaListItem& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline ManagedThingSchemaListItem& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the capability for a managed thing.</p>
     */
    inline const Aws::String& GetCapabilityId() const{ return m_capabilityId; }
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }
    inline void SetCapabilityId(const Aws::String& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = value; }
    inline void SetCapabilityId(Aws::String&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::move(value); }
    inline void SetCapabilityId(const char* value) { m_capabilityIdHasBeenSet = true; m_capabilityId.assign(value); }
    inline ManagedThingSchemaListItem& WithCapabilityId(const Aws::String& value) { SetCapabilityId(value); return *this;}
    inline ManagedThingSchemaListItem& WithCapabilityId(Aws::String&& value) { SetCapabilityId(std::move(value)); return *this;}
    inline ManagedThingSchemaListItem& WithCapabilityId(const char* value) { SetCapabilityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation schema for one schema item associated with a managed
     * thing.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::Utils::Document& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::Utils::Document&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline ManagedThingSchemaListItem& WithSchema(const Aws::Utils::Document& value) { SetSchema(value); return *this;}
    inline ManagedThingSchemaListItem& WithSchema(Aws::Utils::Document&& value) { SetSchema(std::move(value)); return *this;}
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
