/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>View content containing all content necessary to render a view except for
   * runtime input data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ViewContent">AWS
   * API Reference</a></p>
   */
  class ViewContent
  {
  public:
    AWS_CONNECT_API ViewContent();
    AWS_CONNECT_API ViewContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ViewContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline const Aws::String& GetInputSchema() const{ return m_inputSchema; }

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline void SetInputSchema(const Aws::String& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline void SetInputSchema(Aws::String&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::move(value); }

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline void SetInputSchema(const char* value) { m_inputSchemaHasBeenSet = true; m_inputSchema.assign(value); }

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline ViewContent& WithInputSchema(const Aws::String& value) { SetInputSchema(value); return *this;}

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline ViewContent& WithInputSchema(Aws::String&& value) { SetInputSchema(std::move(value)); return *this;}

    /**
     * <p>The data schema matching data that the view template must be provided to
     * render.</p>
     */
    inline ViewContent& WithInputSchema(const char* value) { SetInputSchema(value); return *this;}


    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline ViewContent& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline ViewContent& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The view template representing the structure of the view.</p>
     */
    inline ViewContent& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline ViewContent& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline ViewContent& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline ViewContent& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline ViewContent& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of possible actions from the view.</p>
     */
    inline ViewContent& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:

    Aws::String m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
