/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect-contact-lens/model/CategoryDetails.h>
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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>Provides the category rules that are used to automatically categorize
   * contacts based on uttered keywords and phrases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/Categories">AWS
   * API Reference</a></p>
   */
  class Categories
  {
  public:
    AWS_CONNECTCONTACTLENS_API Categories() = default;
    AWS_CONNECTCONTACTLENS_API Categories(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Categories& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedCategories() const { return m_matchedCategories; }
    inline bool MatchedCategoriesHasBeenSet() const { return m_matchedCategoriesHasBeenSet; }
    template<typename MatchedCategoriesT = Aws::Vector<Aws::String>>
    void SetMatchedCategories(MatchedCategoriesT&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = std::forward<MatchedCategoriesT>(value); }
    template<typename MatchedCategoriesT = Aws::Vector<Aws::String>>
    Categories& WithMatchedCategories(MatchedCategoriesT&& value) { SetMatchedCategories(std::forward<MatchedCategoriesT>(value)); return *this;}
    template<typename MatchedCategoriesT = Aws::String>
    Categories& AddMatchedCategories(MatchedCategoriesT&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.emplace_back(std::forward<MatchedCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline const Aws::Map<Aws::String, CategoryDetails>& GetMatchedDetails() const { return m_matchedDetails; }
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, CategoryDetails>>
    void SetMatchedDetails(MatchedDetailsT&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::forward<MatchedDetailsT>(value); }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, CategoryDetails>>
    Categories& WithMatchedDetails(MatchedDetailsT&& value) { SetMatchedDetails(std::forward<MatchedDetailsT>(value)); return *this;}
    template<typename MatchedDetailsKeyT = Aws::String, typename MatchedDetailsValueT = CategoryDetails>
    Categories& AddMatchedDetails(MatchedDetailsKeyT&& key, MatchedDetailsValueT&& value) {
      m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::forward<MatchedDetailsKeyT>(key), std::forward<MatchedDetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_matchedCategories;
    bool m_matchedCategoriesHasBeenSet = false;

    Aws::Map<Aws::String, CategoryDetails> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
