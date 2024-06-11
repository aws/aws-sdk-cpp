/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaVersionNumber.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetSchemaVersionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetSchemaVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaVersion"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. Either <code>SchemaArn</code> or <code>SchemaName</code> and
     * <code>RegistryName</code> has to be provided.</p> </li> <li>
     * <p>SchemaId$SchemaName: The name of the schema. Either <code>SchemaArn</code> or
     * <code>SchemaName</code> and <code>RegistryName</code> has to be provided.</p>
     * </li> </ul>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline GetSchemaVersionRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}
    inline GetSchemaVersionRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SchemaVersionId</code> of the schema version. This field is
     * required for fetching by schema ID. Either this or the <code>SchemaId</code>
     * wrapper has to be provided.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId.assign(value); }
    inline GetSchemaVersionRequest& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline GetSchemaVersionRequest& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline GetSchemaVersionRequest& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline const SchemaVersionNumber& GetSchemaVersionNumber() const{ return m_schemaVersionNumber; }
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }
    inline void SetSchemaVersionNumber(const SchemaVersionNumber& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = value; }
    inline void SetSchemaVersionNumber(SchemaVersionNumber&& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = std::move(value); }
    inline GetSchemaVersionRequest& WithSchemaVersionNumber(const SchemaVersionNumber& value) { SetSchemaVersionNumber(value); return *this;}
    inline GetSchemaVersionRequest& WithSchemaVersionNumber(SchemaVersionNumber&& value) { SetSchemaVersionNumber(std::move(value)); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
