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
  class TemplateConfiguration
  {
  public:
    AWS_KENDRA_API TemplateConfiguration();
    AWS_KENDRA_API TemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline Aws::Utils::DocumentView GetTemplate() const{ return m_template; }

    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline void SetTemplate(const Aws::Utils::Document& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline void SetTemplate(Aws::Utils::Document&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline TemplateConfiguration& WithTemplate(const Aws::Utils::Document& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template schema used for the data source, where templates schemas are
     * supported.</p> <p>See <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/ds-schemas.html">Data source
     * template schemas</a>.</p>
     */
    inline TemplateConfiguration& WithTemplate(Aws::Utils::Document&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Aws::Utils::Document m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
