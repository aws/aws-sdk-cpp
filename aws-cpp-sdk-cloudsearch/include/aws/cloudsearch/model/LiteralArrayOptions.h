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
  class AWS_CLOUDSEARCH_API LiteralArrayOptions
  {
  public:
    LiteralArrayOptions();
    LiteralArrayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    LiteralArrayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline LiteralArrayOptions& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline LiteralArrayOptions& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline LiteralArrayOptions& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline const Aws::String& GetSourceFields() const{ return m_sourceFields; }

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline void SetSourceFields(const Aws::String& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = value; }

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline void SetSourceFields(Aws::String&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::move(value); }

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline void SetSourceFields(const char* value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.assign(value); }

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline LiteralArrayOptions& WithSourceFields(const Aws::String& value) { SetSourceFields(value); return *this;}

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline LiteralArrayOptions& WithSourceFields(Aws::String&& value) { SetSourceFields(std::move(value)); return *this;}

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline LiteralArrayOptions& WithSourceFields(const char* value) { SetSourceFields(value); return *this;}


    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool GetFacetEnabled() const{ return m_facetEnabled; }

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool FacetEnabledHasBeenSet() const { return m_facetEnabledHasBeenSet; }

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline void SetFacetEnabled(bool value) { m_facetEnabledHasBeenSet = true; m_facetEnabled = value; }

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline LiteralArrayOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}


    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool GetSearchEnabled() const{ return m_searchEnabled; }

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool SearchEnabledHasBeenSet() const { return m_searchEnabledHasBeenSet; }

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline void SetSearchEnabled(bool value) { m_searchEnabledHasBeenSet = true; m_searchEnabled = value; }

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline LiteralArrayOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}


    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const{ return m_returnEnabled; }

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool ReturnEnabledHasBeenSet() const { return m_returnEnabledHasBeenSet; }

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline LiteralArrayOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_sourceFields;
    bool m_sourceFieldsHasBeenSet;

    bool m_facetEnabled;
    bool m_facetEnabledHasBeenSet;

    bool m_searchEnabled;
    bool m_searchEnabledHasBeenSet;

    bool m_returnEnabled;
    bool m_returnEnabledHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
