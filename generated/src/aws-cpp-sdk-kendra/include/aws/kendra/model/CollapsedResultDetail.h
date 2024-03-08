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
    AWS_KENDRA_API CollapsedResultDetail();
    AWS_KENDRA_API CollapsedResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CollapsedResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline const DocumentAttribute& GetDocumentAttribute() const{ return m_documentAttribute; }

    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline bool DocumentAttributeHasBeenSet() const { return m_documentAttributeHasBeenSet; }

    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline void SetDocumentAttribute(const DocumentAttribute& value) { m_documentAttributeHasBeenSet = true; m_documentAttribute = value; }

    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline void SetDocumentAttribute(DocumentAttribute&& value) { m_documentAttributeHasBeenSet = true; m_documentAttribute = std::move(value); }

    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline CollapsedResultDetail& WithDocumentAttribute(const DocumentAttribute& value) { SetDocumentAttribute(value); return *this;}

    /**
     * <p>The value of the document attribute that results are collapsed on.</p>
     */
    inline CollapsedResultDetail& WithDocumentAttribute(DocumentAttribute&& value) { SetDocumentAttribute(std::move(value)); return *this;}


    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline const Aws::Vector<ExpandedResultItem>& GetExpandedResults() const{ return m_expandedResults; }

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline bool ExpandedResultsHasBeenSet() const { return m_expandedResultsHasBeenSet; }

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline void SetExpandedResults(const Aws::Vector<ExpandedResultItem>& value) { m_expandedResultsHasBeenSet = true; m_expandedResults = value; }

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline void SetExpandedResults(Aws::Vector<ExpandedResultItem>&& value) { m_expandedResultsHasBeenSet = true; m_expandedResults = std::move(value); }

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline CollapsedResultDetail& WithExpandedResults(const Aws::Vector<ExpandedResultItem>& value) { SetExpandedResults(value); return *this;}

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline CollapsedResultDetail& WithExpandedResults(Aws::Vector<ExpandedResultItem>&& value) { SetExpandedResults(std::move(value)); return *this;}

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline CollapsedResultDetail& AddExpandedResults(const ExpandedResultItem& value) { m_expandedResultsHasBeenSet = true; m_expandedResults.push_back(value); return *this; }

    /**
     * <p>A list of results in the collapsed group.</p>
     */
    inline CollapsedResultDetail& AddExpandedResults(ExpandedResultItem&& value) { m_expandedResultsHasBeenSet = true; m_expandedResults.push_back(std::move(value)); return *this; }

  private:

    DocumentAttribute m_documentAttribute;
    bool m_documentAttributeHasBeenSet = false;

    Aws::Vector<ExpandedResultItem> m_expandedResults;
    bool m_expandedResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
