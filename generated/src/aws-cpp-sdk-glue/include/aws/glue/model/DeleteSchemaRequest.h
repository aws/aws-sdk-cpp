/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteSchemaRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSchema"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline DeleteSchemaRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline DeleteSchemaRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
