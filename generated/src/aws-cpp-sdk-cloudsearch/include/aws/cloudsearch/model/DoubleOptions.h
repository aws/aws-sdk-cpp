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
   * <p>Options for a double-precision 64-bit floating point field. Present if
   * <code>IndexFieldType</code> specifies the field is of type <code>double</code>.
   * All options are enabled by default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DoubleOptions">AWS
   * API Reference</a></p>
   */
  class DoubleOptions
  {
  public:
    AWS_CLOUDSEARCH_API DoubleOptions() = default;
    AWS_CLOUDSEARCH_API DoubleOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DoubleOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A value to use for the field if the field isn't specified for a document.
     * This can be important if you are using the field in an expression and that field
     * is not present in every document.</p>
     */
    inline double GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(double value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline DoubleOptions& WithDefaultValue(double value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source field to map to the field. </p>
     */
    inline const Aws::String& GetSourceField() const { return m_sourceField; }
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }
    template<typename SourceFieldT = Aws::String>
    void SetSourceField(SourceFieldT&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::forward<SourceFieldT>(value); }
    template<typename SourceFieldT = Aws::String>
    DoubleOptions& WithSourceField(SourceFieldT&& value) { SetSourceField(std::forward<SourceFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether facet information can be returned for the field.</p>
     */
    inline bool GetFacetEnabled() const { return m_facetEnabled; }
    inline bool FacetEnabledHasBeenSet() const { return m_facetEnabledHasBeenSet; }
    inline void SetFacetEnabled(bool value) { m_facetEnabledHasBeenSet = true; m_facetEnabled = value; }
    inline DoubleOptions& WithFacetEnabled(bool value) { SetFacetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field are searchable.</p>
     */
    inline bool GetSearchEnabled() const { return m_searchEnabled; }
    inline bool SearchEnabledHasBeenSet() const { return m_searchEnabledHasBeenSet; }
    inline void SetSearchEnabled(bool value) { m_searchEnabledHasBeenSet = true; m_searchEnabled = value; }
    inline DoubleOptions& WithSearchEnabled(bool value) { SetSearchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the contents of the field can be returned in the search results.</p>
     */
    inline bool GetReturnEnabled() const { return m_returnEnabled; }
    inline bool ReturnEnabledHasBeenSet() const { return m_returnEnabledHasBeenSet; }
    inline void SetReturnEnabled(bool value) { m_returnEnabledHasBeenSet = true; m_returnEnabled = value; }
    inline DoubleOptions& WithReturnEnabled(bool value) { SetReturnEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the field can be used to sort the search results.</p>
     */
    inline bool GetSortEnabled() const { return m_sortEnabled; }
    inline bool SortEnabledHasBeenSet() const { return m_sortEnabledHasBeenSet; }
    inline void SetSortEnabled(bool value) { m_sortEnabledHasBeenSet = true; m_sortEnabled = value; }
    inline DoubleOptions& WithSortEnabled(bool value) { SetSortEnabled(value); return *this;}
    ///@}
  private:

    double m_defaultValue{0.0};
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet = false;

    bool m_facetEnabled{false};
    bool m_facetEnabledHasBeenSet = false;

    bool m_searchEnabled{false};
    bool m_searchEnabledHasBeenSet = false;

    bool m_returnEnabled{false};
    bool m_returnEnabledHasBeenSet = false;

    bool m_sortEnabled{false};
    bool m_sortEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
