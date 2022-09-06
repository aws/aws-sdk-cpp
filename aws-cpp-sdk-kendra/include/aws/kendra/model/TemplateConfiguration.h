/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides a template for the configuration information to connect to your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API TemplateConfiguration
  {
  public:
    TemplateConfiguration();
    TemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline Aws::Utils::DocumentView GetTemplate() const{ return m_template; }

    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline void SetTemplate(const Aws::Utils::Document& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline void SetTemplate(Aws::Utils::Document&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline TemplateConfiguration& WithTemplate(const Aws::Utils::Document& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template schema used for the data source.</p> <p>The following links to
     * the template schema for data sources where templates are supported:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-zendesk.html#zendesk-template-schema">Zendesk
     * template schema</a> </p> </li> </ul>
     */
    inline TemplateConfiguration& WithTemplate(Aws::Utils::Document&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Aws::Utils::Document m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
