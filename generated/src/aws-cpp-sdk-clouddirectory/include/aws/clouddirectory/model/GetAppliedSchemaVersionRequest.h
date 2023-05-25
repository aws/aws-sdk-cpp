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
  class GetAppliedSchemaVersionRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAppliedSchemaVersion"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline GetAppliedSchemaVersionRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline GetAppliedSchemaVersionRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the applied schema.</p>
     */
    inline GetAppliedSchemaVersionRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
