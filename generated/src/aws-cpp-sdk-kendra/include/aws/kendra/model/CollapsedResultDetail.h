/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DocumentAttribute.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ExpandedResultItem.h>
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
   * <p>Provides details about a collapsed group of search results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CollapsedResultDetail">AWS
   * API Reference</a></p>
   */
  class CollapsedResultDetail
  {
  public:
    AWS_KENDRA_API CollapsedResultDetail() = default;
    AWS_KENDRA_API CollapsedResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CollapsedResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline const DocumentAttribute& GetDocumentAttribute() const { return m_documentAttribute; }
    inline bool DocumentAttributeHasBeenSet() const { return m_documentAttributeHasBeenSet; }
    template<typename DocumentAttributeT = DocumentAttribute>
    void SetDocumentAttribute(DocumentAttributeT&& value) { m_documentAttributeHasBeenSet = true; m_documentAttribute = std::forward<DocumentAttributeT>(value); }
    template<typename DocumentAttributeT = DocumentAttribute>
    CollapsedResultDetail& WithDocumentAttribute(DocumentAttributeT&& value) { SetDocumentAttribute(std::forward<DocumentAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline const Aws::Vector<ExpandedResultItem>& GetExpandedResults() const { return m_expandedResults; }
    inline bool ExpandedResultsHasBeenSet() const { return m_expandedResultsHasBeenSet; }
    template<typename ExpandedResultsT = Aws::Vector<ExpandedResultItem>>
    void SetExpandedResults(ExpandedResultsT&& value) { m_expandedResultsHasBeenSet = true; m_expandedResults = std::forward<ExpandedResultsT>(value); }
    template<typename ExpandedResultsT = Aws::Vector<ExpandedResultItem>>
    CollapsedResultDetail& WithExpandedResults(ExpandedResultsT&& value) { SetExpandedResults(std::forward<ExpandedResultsT>(value)); return *this;}
    template<typename ExpandedResultsT = ExpandedResultItem>
    CollapsedResultDetail& AddExpandedResults(ExpandedResultsT&& value) { m_expandedResultsHasBeenSet = true; m_expandedResults.emplace_back(std::forward<ExpandedResultsT>(value)); return *this; }
    ///@}
  private:

    DocumentAttribute m_documentAttribute;
    bool m_documentAttributeHasBeenSet = false;

    Aws::Vector<ExpandedResultItem> m_expandedResults;
    bool m_expandedResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
