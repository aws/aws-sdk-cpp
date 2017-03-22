/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API CreateDirectoryRequest : public CloudDirectoryRequest
  {
  public:
    CreateDirectoryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline CreateDirectoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline CreateDirectoryRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the <a>Directory</a>. Should be unique per account, per region.</p>
     */
    inline CreateDirectoryRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN of the published schema that will be copied into the data
     * <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
