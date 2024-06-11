/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteSchemaVersionsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteSchemaVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSchemaVersions"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is a wrapper structure that may contain the schema name and Amazon
     * Resource Name (ARN).</p>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline DeleteSchemaVersionsRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}
    inline DeleteSchemaVersionsRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version range may be supplied which may be of the format:</p> <ul> <li>
     * <p>a single version number, 5</p> </li> <li> <p>a range, 5-8 : deletes versions
     * 5, 6, 7, 8</p> </li> </ul>
     */
    inline const Aws::String& GetVersions() const{ return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    inline void SetVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions = value; }
    inline void SetVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }
    inline void SetVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.assign(value); }
    inline DeleteSchemaVersionsRequest& WithVersions(const Aws::String& value) { SetVersions(value); return *this;}
    inline DeleteSchemaVersionsRequest& WithVersions(Aws::String&& value) { SetVersions(std::move(value)); return *this;}
    inline DeleteSchemaVersionsRequest& WithVersions(const char* value) { SetVersions(value); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_versions;
    bool m_versionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
