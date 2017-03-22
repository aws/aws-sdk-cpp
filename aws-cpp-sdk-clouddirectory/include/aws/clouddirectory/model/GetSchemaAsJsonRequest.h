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
  class AWS_CLOUDDIRECTORY_API GetSchemaAsJsonRequest : public CloudDirectoryRequest
  {
  public:
    GetSchemaAsJsonRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline GetSchemaAsJsonRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline GetSchemaAsJsonRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema to retrieve.</p>
     */
    inline GetSchemaAsJsonRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:
    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
