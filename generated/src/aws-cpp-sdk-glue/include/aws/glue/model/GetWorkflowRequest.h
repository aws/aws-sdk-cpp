/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetWorkflowRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the workflow to retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline bool GetIncludeGraph() const{ return m_includeGraph; }
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }
    inline GetWorkflowRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_includeGraph;
    bool m_includeGraphHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
