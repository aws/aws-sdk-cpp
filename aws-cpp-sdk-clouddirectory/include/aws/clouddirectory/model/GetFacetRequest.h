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
  class AWS_CLOUDDIRECTORY_API GetFacetRequest : public CloudDirectoryRequest
  {
  public:
    GetFacetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline GetFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline GetFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline GetFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline GetFacetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline GetFacetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the facet to retrieve.</p>
     */
    inline GetFacetRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
