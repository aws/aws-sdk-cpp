﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Options for a 64-bit signed integer field. Present if
   * <code>IndexFieldType</code> specifies the field is of type <code>int</code>. All
   * options are enabled by default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IntOptions">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API IntOptions
  {
  public:
    IntOptions();
    IntOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    IntOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * A value to use for the field if the field isn't specified for a document. This
     * can be important if you are using the field in an expression and that field is
     * not present in every document.
     */
    inline long long GetDefaultValue() const{ return m_defaultValue; }

    /**
     * A value to use for the field if the field isn't specified for a document. This
     * can be important if you are using the field in an expression and that field is
     * not present in every document.
     */
    inline void SetDefaultValue(long long value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * A value to use for the field if the field isn't specified for a document. This
     * can be important if you are using the field in an expression and that field is
     * not present in every document.
     */
    inline IntOptions& WithDefaultValue(long long value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline const Aws::String& GetSourceField() const{ return m_sourceField; }

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline void SetSourceField(const Aws::String& value) { m_sourceFieldHasBeenSet = true; m_sourceField = value; }

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline void SetSourceField(Aws::String&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = value; }

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline void SetSourceField(const char* value) { m_sourceFieldHasBeenSet = true; m_sourceField.assign(value); }

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline IntOptions& WithSourceField(const Aws::String& value) { SetSourceField(value); return *this;}

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline IntOptions& WithSourceField(Aws::String&& value) { SetSourceField(value); return *this;}

    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline IntOptions& WithSourceField(const char* value) { SetSourceField(value); return *this;}

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool GetFacetEnabled() const{ return m_facetEnabled; }

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline void SetFacetEnabled(bool value) { m_facetEnabledHasBeenSet = true; m_facetEnabled = value; }

    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline IntOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool GetSearchEnabled() const{ return m_searchEnabled; }

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline void SetSearchEnabled(bool value) { m_searchEnabledHasBeenSet = true; m_searchEnabled = value; }

    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline IntOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const{ return m_returnEnabled; }

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }

    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline IntOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}

    /**
     * <p>Whether the field can be used to sort the search results.</p>
     */
    inline bool GetSortEnabled() const{ return m_sortEnabled; }

    /**
     * <p>Whether the field can be used to sort the search results.</p>
     */
    inline void SetSortEnabled(bool value) { m_sortEnabledHasBeenSet = true; m_sortEnabled = value; }

    /**
     * <p>Whether the field can be used to sort the search results.</p>
     */
    inline IntOptions& WithSortEnabled(bool value) { SetSortEnabled(value); return *this;}

  private:
    long long m_defaultValue;
    bool m_defaultValueHasBeenSet;
    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet;
    bool m_facetEnabled;
    bool m_facetEnabledHasBeenSet;
    bool m_searchEnabled;
    bool m_searchEnabledHasBeenSet;
    bool m_returnEnabled;
    bool m_returnEnabledHasBeenSet;
    bool m_sortEnabled;
    bool m_sortEnabledHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
