/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class PutSchemaFromJsonRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API PutSchemaFromJsonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSchemaFromJson"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline PutSchemaFromJsonRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline PutSchemaFromJsonRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema to update.</p>
     */
    inline PutSchemaFromJsonRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The replacement JSON schema.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline PutSchemaFromJsonRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline PutSchemaFromJsonRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The replacement JSON schema.</p>
     */
    inline PutSchemaFromJsonRequest& WithDocument(const char* value) { SetDocument(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
