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
  class AWS_CLOUDDIRECTORY_API ApplySchemaRequest : public CloudDirectoryRequest
  {
  public:
    ApplySchemaRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const{ return m_publishedSchemaArn; }

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(const Aws::String& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = value; }

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(Aws::String&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = value; }

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(const char* value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn.assign(value); }

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithPublishedSchemaArn(const Aws::String& value) { SetPublishedSchemaArn(value); return *this;}

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithPublishedSchemaArn(Aws::String&& value) { SetPublishedSchemaArn(value); return *this;}

    /**
     * <p>Published schema ARN that needs to be copied. For more information, see
     * <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithPublishedSchemaArn(const char* value) { SetPublishedSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> into which the schema is copied. For
     * more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

  private:
    Aws::String m_publishedSchemaArn;
    bool m_publishedSchemaArnHasBeenSet;
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
