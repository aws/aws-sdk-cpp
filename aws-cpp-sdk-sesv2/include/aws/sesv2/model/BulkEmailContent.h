/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Template.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains the body of the message. You can specify a template
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BulkEmailContent">AWS
   * API Reference</a></p>
   */
  class BulkEmailContent
  {
  public:
    AWS_SESV2_API BulkEmailContent();
    AWS_SESV2_API BulkEmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BulkEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline const Template& GetTemplate() const{ return m_template; }

    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline void SetTemplate(const Template& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline void SetTemplate(Template&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline BulkEmailContent& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline BulkEmailContent& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Template m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
