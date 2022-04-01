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
   * <p>Options for a field that contains an array of 64-bit signed integers. Present
   * if <code>IndexFieldType</code> specifies the field is of type
   * <code>int-array</code>. All options are enabled by default.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IntArrayOptions">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API IntArrayOptions
  {
  public:
    IntArrayOptions();
    IntArrayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    IntArrayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline long long GetDefaultValue() const{ return m_defaultValue; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline void SetDefaultValue(long long value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline IntArrayOptions& WithDefaultValue(long long value) { SetDefaultValue(value); return *this;}


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
    inline IntArrayOptions& WithSourceFields(const Aws::String& value) { SetSourceFields(value); return *this;}

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline IntArrayOptions& WithSourceFields(Aws::String&& value) { SetSourceFields(std::move(value)); return *this;}

    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline IntArrayOptions& WithSourceFields(const char* value) { SetSourceFields(value); return *this;}


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
    inline IntArrayOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}


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
    inline IntArrayOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}


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
    inline IntArrayOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}

  private:

    long long m_defaultValue;
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
