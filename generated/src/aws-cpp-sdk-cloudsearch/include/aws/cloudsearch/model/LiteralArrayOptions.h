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
   * <p>Options for a field that contains an array of literal strings. Present if
   * <code>IndexFieldType</code> specifies the field is of type
   * <code>literal-array</code>. All options are enabled by default.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/LiteralArrayOptions">AWS
   * API Reference</a></p>
   */
  class LiteralArrayOptions
  {
  public:
    AWS_CLOUDSEARCH_API LiteralArrayOptions();
    AWS_CLOUDSEARCH_API LiteralArrayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API LiteralArrayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline LiteralArrayOptions& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline LiteralArrayOptions& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline LiteralArrayOptions& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline const Aws::String& GetSourceFields() const{ return m_sourceFields; }
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }
    inline void SetSourceFields(const Aws::String& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = value; }
    inline void SetSourceFields(Aws::String&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::move(value); }
    inline void SetSourceFields(const char* value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.assign(value); }
    inline LiteralArrayOptions& WithSourceFields(const Aws::String& value) { SetSourceFields(value); return *this;}
    inline LiteralArrayOptions& WithSourceFields(Aws::String&& value) { SetSourceFields(std::move(value)); return *this;}
    inline LiteralArrayOptions& WithSourceFields(const char* value) { SetSourceFields(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool GetFacetEnabled() const{ return m_facetEnabled; }
    inline bool FacetEnabledHasBeenSet() const { return m_facetEnabledHasBeenSet; }
    inline void SetFacetEnabled(bool value) { m_facetEnabledHasBeenSet = true; m_facetEnabled = value; }
    inline LiteralArrayOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool GetSearchEnabled() const{ return m_searchEnabled; }
    inline bool SearchEnabledHasBeenSet() const { return m_searchEnabledHasBeenSet; }
    inline void SetSearchEnabled(bool value) { m_searchEnabledHasBeenSet = true; m_searchEnabled = value; }
    inline LiteralArrayOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const{ return m_returnEnabled; }
    inline bool ReturnEnabledHasBeenSet() const { return m_returnEnabledHasBeenSet; }
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }
    inline LiteralArrayOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_sourceFields;
    bool m_sourceFieldsHasBeenSet = false;

    bool m_facetEnabled;
    bool m_facetEnabledHasBeenSet = false;

    bool m_searchEnabled;
    bool m_searchEnabledHasBeenSet = false;

    bool m_returnEnabled;
    bool m_returnEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
