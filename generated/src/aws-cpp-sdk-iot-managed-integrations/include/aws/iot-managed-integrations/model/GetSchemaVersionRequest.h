/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/SchemaVersionFormat.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class GetSchemaVersionRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaVersion"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of schema version.</p>
     */
    inline const SchemaVersionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SchemaVersionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SchemaVersionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GetSchemaVersionRequest& WithType(const SchemaVersionType& value) { SetType(value); return *this;}
    inline GetSchemaVersionRequest& WithType(SchemaVersionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schema id with a version specified. If the version is missing, it defaults to
     * latest version.</p>
     */
    inline const Aws::String& GetSchemaVersionedId() const{ return m_schemaVersionedId; }
    inline bool SchemaVersionedIdHasBeenSet() const { return m_schemaVersionedIdHasBeenSet; }
    inline void SetSchemaVersionedId(const Aws::String& value) { m_schemaVersionedIdHasBeenSet = true; m_schemaVersionedId = value; }
    inline void SetSchemaVersionedId(Aws::String&& value) { m_schemaVersionedIdHasBeenSet = true; m_schemaVersionedId = std::move(value); }
    inline void SetSchemaVersionedId(const char* value) { m_schemaVersionedIdHasBeenSet = true; m_schemaVersionedId.assign(value); }
    inline GetSchemaVersionRequest& WithSchemaVersionedId(const Aws::String& value) { SetSchemaVersionedId(value); return *this;}
    inline GetSchemaVersionRequest& WithSchemaVersionedId(Aws::String&& value) { SetSchemaVersionedId(std::move(value)); return *this;}
    inline GetSchemaVersionRequest& WithSchemaVersionedId(const char* value) { SetSchemaVersionedId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the schema version.</p>
     */
    inline const SchemaVersionFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const SchemaVersionFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(SchemaVersionFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline GetSchemaVersionRequest& WithFormat(const SchemaVersionFormat& value) { SetFormat(value); return *this;}
    inline GetSchemaVersionRequest& WithFormat(SchemaVersionFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}
  private:

    SchemaVersionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_schemaVersionedId;
    bool m_schemaVersionedIdHasBeenSet = false;

    SchemaVersionFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
