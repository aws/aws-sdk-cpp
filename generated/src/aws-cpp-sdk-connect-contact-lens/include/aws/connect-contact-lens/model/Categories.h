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
    AWS_CONNECTCONTACTLENS_API Categories();
    AWS_CONNECTCONTACTLENS_API Categories(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Categories& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedCategories() const{ return m_matchedCategories; }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline bool MatchedCategoriesHasBeenSet() const { return m_matchedCategoriesHasBeenSet; }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline void SetMatchedCategories(const Aws::Vector<Aws::String>& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = value; }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline void SetMatchedCategories(Aws::Vector<Aws::String>&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = std::move(value); }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline Categories& WithMatchedCategories(const Aws::Vector<Aws::String>& value) { SetMatchedCategories(value); return *this;}

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline Categories& WithMatchedCategories(Aws::Vector<Aws::String>&& value) { SetMatchedCategories(std::move(value)); return *this;}

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline Categories& AddMatchedCategories(const Aws::String& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(value); return *this; }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline Categories& AddMatchedCategories(Aws::String&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>The category rules that have been matched in the analyzed segment.</p>
     */
    inline Categories& AddMatchedCategories(const char* value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(value); return *this; }


    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline const Aws::Map<Aws::String, CategoryDetails>& GetMatchedDetails() const{ return m_matchedDetails; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline void SetMatchedDetails(const Aws::Map<Aws::String, CategoryDetails>& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = value; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline void SetMatchedDetails(Aws::Map<Aws::String, CategoryDetails>&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::move(value); }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& WithMatchedDetails(const Aws::Map<Aws::String, CategoryDetails>& value) { SetMatchedDetails(value); return *this;}

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& WithMatchedDetails(Aws::Map<Aws::String, CategoryDetails>&& value) { SetMatchedDetails(std::move(value)); return *this;}

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(const Aws::String& key, const CategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(Aws::String&& key, const CategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(const Aws::String& key, CategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(Aws::String&& key, CategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(const char* key, CategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The category rule that was matched and when it occurred in the
     * transcript.</p>
     */
    inline Categories& AddMatchedDetails(const char* key, const CategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_matchedCategories;
    bool m_matchedCategoriesHasBeenSet = false;

    Aws::Map<Aws::String, CategoryDetails> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
