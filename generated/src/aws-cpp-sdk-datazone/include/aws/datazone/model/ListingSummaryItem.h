/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The results of the data product summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListingSummaryItem">AWS
   * API Reference</a></p>
   */
  class ListingSummaryItem
  {
  public:
    AWS_DATAZONE_API ListingSummaryItem() = default;
    AWS_DATAZONE_API ListingSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The glossary terms of the data product listing.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    ListingSummaryItem& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    ListingSummaryItem& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data product listing.</p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    ListingSummaryItem& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product listing.</p>
     */
    inline const Aws::String& GetListingRevision() const { return m_listingRevision; }
    inline bool ListingRevisionHasBeenSet() const { return m_listingRevisionHasBeenSet; }
    template<typename ListingRevisionT = Aws::String>
    void SetListingRevision(ListingRevisionT&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::forward<ListingRevisionT>(value); }
    template<typename ListingRevisionT = Aws::String>
    ListingSummaryItem& WithListingRevision(ListingRevisionT&& value) { SetListingRevision(std::forward<ListingRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    Aws::String m_listingRevision;
    bool m_listingRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
