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
  class AWS_CLOUDDIRECTORY_API PublishSchemaRequest : public CloudDirectoryRequest
  {
  public:
    PublishSchemaRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetDevelopmentSchemaArn() const{ return m_developmentSchemaArn; }

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDevelopmentSchemaArn(const Aws::String& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = value; }

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDevelopmentSchemaArn(Aws::String&& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = value; }

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDevelopmentSchemaArn(const char* value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn.assign(value); }

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(const Aws::String& value) { SetDevelopmentSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(Aws::String&& value) { SetDevelopmentSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the development schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(const char* value) { SetDevelopmentSchemaArn(value); return *this;}

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline PublishSchemaRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline PublishSchemaRequest& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>Version under which the schema will be published.</p>
     */
    inline PublishSchemaRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline PublishSchemaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline PublishSchemaRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>New name under which the schema will be published. If this is not provided,
     * the development schema is considered.</p>
     */
    inline PublishSchemaRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_developmentSchemaArn;
    bool m_developmentSchemaArnHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
