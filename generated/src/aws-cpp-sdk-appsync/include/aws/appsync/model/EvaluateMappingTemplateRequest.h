/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class EvaluateMappingTemplateRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API EvaluateMappingTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateMappingTemplate"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The mapping template; this can be a request or response template. A
     * <code>template</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateMappingTemplateRequest& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
