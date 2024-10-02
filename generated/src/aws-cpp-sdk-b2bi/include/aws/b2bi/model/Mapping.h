/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/MappingTemplateLanguage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Specifies the mapping template for the transformer. This template is used to
   * map the parsed EDI file using JSONata or XSLT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/Mapping">AWS API
   * Reference</a></p>
   */
  class Mapping
  {
  public:
    AWS_B2BI_API Mapping();
    AWS_B2BI_API Mapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Mapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transformation language for the template, either XSLT or JSONATA.</p>
     */
    inline const MappingTemplateLanguage& GetTemplateLanguage() const{ return m_templateLanguage; }
    inline bool TemplateLanguageHasBeenSet() const { return m_templateLanguageHasBeenSet; }
    inline void SetTemplateLanguage(const MappingTemplateLanguage& value) { m_templateLanguageHasBeenSet = true; m_templateLanguage = value; }
    inline void SetTemplateLanguage(MappingTemplateLanguage&& value) { m_templateLanguageHasBeenSet = true; m_templateLanguage = std::move(value); }
    inline Mapping& WithTemplateLanguage(const MappingTemplateLanguage& value) { SetTemplateLanguage(value); return *this;}
    inline Mapping& WithTemplateLanguage(MappingTemplateLanguage&& value) { SetTemplateLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the mapping template, in the transformation language
     * specified in <code>templateLanguage</code>.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }
    inline Mapping& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline Mapping& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline Mapping& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}
  private:

    MappingTemplateLanguage m_templateLanguage;
    bool m_templateLanguageHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
