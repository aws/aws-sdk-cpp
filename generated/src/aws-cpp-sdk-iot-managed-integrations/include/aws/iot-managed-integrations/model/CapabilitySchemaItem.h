/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/SchemaVersionFormat.h>
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
   * <p>Structure representing a capability schema item that defines the
   * functionality and features supported by a managed thing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilitySchemaItem">AWS
   * API Reference</a></p>
   */
  class CapabilitySchemaItem
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilitySchemaItem() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilitySchemaItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilitySchemaItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the capability schema, which defines how the schema is
     * structured and interpreted.</p>
     */
    inline SchemaVersionFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(SchemaVersionFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CapabilitySchemaItem& WithFormat(SchemaVersionFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the capability defined in the schema.</p>
     */
    inline const Aws::String& GetCapabilityId() const { return m_capabilityId; }
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }
    template<typename CapabilityIdT = Aws::String>
    void SetCapabilityId(CapabilityIdT&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::forward<CapabilityIdT>(value); }
    template<typename CapabilityIdT = Aws::String>
    CapabilitySchemaItem& WithCapabilityId(CapabilityIdT&& value) { SetCapabilityId(std::forward<CapabilityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier for the capability, used when referencing the
     * capability outside of the AWS ecosystem.</p>
     */
    inline const Aws::String& GetExtrinsicId() const { return m_extrinsicId; }
    inline bool ExtrinsicIdHasBeenSet() const { return m_extrinsicIdHasBeenSet; }
    template<typename ExtrinsicIdT = Aws::String>
    void SetExtrinsicId(ExtrinsicIdT&& value) { m_extrinsicIdHasBeenSet = true; m_extrinsicId = std::forward<ExtrinsicIdT>(value); }
    template<typename ExtrinsicIdT = Aws::String>
    CapabilitySchemaItem& WithExtrinsicId(ExtrinsicIdT&& value) { SetExtrinsicId(std::forward<ExtrinsicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the external capability definition, used to track
     * compatibility with external systems.</p>
     */
    inline int GetExtrinsicVersion() const { return m_extrinsicVersion; }
    inline bool ExtrinsicVersionHasBeenSet() const { return m_extrinsicVersionHasBeenSet; }
    inline void SetExtrinsicVersion(int value) { m_extrinsicVersionHasBeenSet = true; m_extrinsicVersion = value; }
    inline CapabilitySchemaItem& WithExtrinsicVersion(int value) { SetExtrinsicVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual schema definition that describes the capability's properties,
     * actions, and events.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Utils::Document>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Utils::Document>
    CapabilitySchemaItem& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}
  private:

    SchemaVersionFormat m_format{SchemaVersionFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;

    Aws::String m_extrinsicId;
    bool m_extrinsicIdHasBeenSet = false;

    int m_extrinsicVersion{0};
    bool m_extrinsicVersionHasBeenSet = false;

    Aws::Utils::Document m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
