﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Options for text field. Present if <code>IndexFieldType</code> specifies the
   * field is of type <code>text</code>. A <code>text</code> field is always
   * searchable. All options are enabled by default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/TextOptions">AWS
   * API Reference</a></p>
   */
  class TextOptions
  {
  public:
    AWS_CLOUDSEARCH_API TextOptions();
    AWS_CLOUDSEARCH_API TextOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API TextOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline TextOptions& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline TextOptions& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline TextOptions& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSourceField() const{ return m_sourceField; }
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }
    inline void SetSourceField(const Aws::String& value) { m_sourceFieldHasBeenSet = true; m_sourceField = value; }
    inline void SetSourceField(Aws::String&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::move(value); }
    inline void SetSourceField(const char* value) { m_sourceFieldHasBeenSet = true; m_sourceField.assign(value); }
    inline TextOptions& WithSourceField(const Aws::String& value) { SetSourceField(value); return *this;}
    inline TextOptions& WithSourceField(Aws::String&& value) { SetSourceField(std::move(value)); return *this;}
    inline TextOptions& WithSourceField(const char* value) { SetSourceField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const{ return m_returnEnabled; }
    inline bool ReturnEnabledHasBeenSet() const { return m_returnEnabledHasBeenSet; }
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }
    inline TextOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the field can be used to sort the search results.</p>
     */
    inline bool GetSortEnabled() const{ return m_sortEnabled; }
    inline bool SortEnabledHasBeenSet() const { return m_sortEnabledHasBeenSet; }
    inline void SetSortEnabled(bool value) { m_sortEnabledHasBeenSet = true; m_sortEnabled = value; }
    inline TextOptions& WithSortEnabled(bool value) { SetSortEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether highlights can be returned for the field.</p>
     */
    inline bool GetHighlightEnabled() const{ return m_highlightEnabled; }
    inline bool HighlightEnabledHasBeenSet() const { return m_highlightEnabledHasBeenSet; }
    inline void SetHighlightEnabled(bool value) { m_highlightEnabledHasBeenSet = true; m_highlightEnabled = value; }
    inline TextOptions& WithHighlightEnabled(bool value) { SetHighlightEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an analysis scheme for a <code>text</code> field.</p>
     */
    inline const Aws::String& GetAnalysisScheme() const{ return m_analysisScheme; }
    inline bool AnalysisSchemeHasBeenSet() const { return m_analysisSchemeHasBeenSet; }
    inline void SetAnalysisScheme(const Aws::String& value) { m_analysisSchemeHasBeenSet = true; m_analysisScheme = value; }
    inline void SetAnalysisScheme(Aws::String&& value) { m_analysisSchemeHasBeenSet = true; m_analysisScheme = std::move(value); }
    inline void SetAnalysisScheme(const char* value) { m_analysisSchemeHasBeenSet = true; m_analysisScheme.assign(value); }
    inline TextOptions& WithAnalysisScheme(const Aws::String& value) { SetAnalysisScheme(value); return *this;}
    inline TextOptions& WithAnalysisScheme(Aws::String&& value) { SetAnalysisScheme(std::move(value)); return *this;}
    inline TextOptions& WithAnalysisScheme(const char* value) { SetAnalysisScheme(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet = false;

    bool m_returnEnabled;
    bool m_returnEnabledHasBeenSet = false;

    bool m_sortEnabled;
    bool m_sortEnabledHasBeenSet = false;

    bool m_highlightEnabled;
    bool m_highlightEnabledHasBeenSet = false;

    Aws::String m_analysisScheme;
    bool m_analysisSchemeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
