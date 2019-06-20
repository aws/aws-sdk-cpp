/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
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
  class AWS_GLUE_API GetWorkflowRequest : public GlueRequest
  {
  public:
    GetWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline GetWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline GetWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline GetWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline bool GetIncludeGraph() const{ return m_includeGraph; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline GetWorkflowRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_includeGraph;
    bool m_includeGraphHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
