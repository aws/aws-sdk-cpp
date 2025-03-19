/**
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
   * <p>Options for a field that contains an array of dates. Present if
   * <code>IndexFieldType</code> specifies the field is of type
   * <code>date-array</code>. All options are enabled by default.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DateArrayOptions">AWS
   * API Reference</a></p>
   */
  class DateArrayOptions
  {
  public:
    AWS_CLOUDSEARCH_API DateArrayOptions() = default;
    AWS_CLOUDSEARCH_API DateArrayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DateArrayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * A value to use for the field if the field isn't specified for a document.
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    DateArrayOptions& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source fields to map to the field. </p>
     */
    inline const Aws::String& GetSourceFields() const { return m_sourceFields; }
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }
    template<typename SourceFieldsT = Aws::String>
    void SetSourceFields(SourceFieldsT&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::forward<SourceFieldsT>(value); }
    template<typename SourceFieldsT = Aws::String>
    DateArrayOptions& WithSourceFields(SourceFieldsT&& value) { SetSourceFields(std::forward<SourceFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool GetFacetEnabled() const { return m_facetEnabled; }
    inline bool FacetEnabledHasBeenSet() const { return m_facetEnabledHasBeenSet; }
    inline void SetFacetEnabled(bool value) { m_facetEnabledHasBeenSet = true; m_facetEnabled = value; }
    inline DateArrayOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool GetSearchEnabled() const { return m_searchEnabled; }
    inline bool SearchEnabledHasBeenSet() const { return m_searchEnabledHasBeenSet; }
    inline void SetSearchEnabled(bool value) { m_searchEnabledHasBeenSet = true; m_searchEnabled = value; }
    inline DateArrayOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const { return m_returnEnabled; }
    inline bool ReturnEnabledHasBeenSet() const { return m_returnEnabledHasBeenSet; }
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }
    inline DateArrayOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_sourceFields;
    bool m_sourceFieldsHasBeenSet = false;

    bool m_facetEnabled{false};
    bool m_facetEnabledHasBeenSet = false;

    bool m_searchEnabled{false};
    bool m_searchEnabledHasBeenSet = false;

    bool m_returnEnabled{false};
    bool m_returnEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
