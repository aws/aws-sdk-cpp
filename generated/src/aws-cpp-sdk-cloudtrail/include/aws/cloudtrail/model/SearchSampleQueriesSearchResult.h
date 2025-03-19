/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> A search result returned by the <code>SearchSampleQueries</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/SearchSampleQueriesSearchResult">AWS
   * API Reference</a></p>
   */
  class SearchSampleQueriesSearchResult
  {
  public:
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult() = default;
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of a sample query. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SearchSampleQueriesSearchResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A longer description of a sample query. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SearchSampleQueriesSearchResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SQL code of the sample query. </p>
     */
    inline const Aws::String& GetSQL() const { return m_sQL; }
    inline bool SQLHasBeenSet() const { return m_sQLHasBeenSet; }
    template<typename SQLT = Aws::String>
    void SetSQL(SQLT&& value) { m_sQLHasBeenSet = true; m_sQL = std::forward<SQLT>(value); }
    template<typename SQLT = Aws::String>
    SearchSampleQueriesSearchResult& WithSQL(SQLT&& value) { SetSQL(std::forward<SQLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A value between 0 and 1 indicating the similarity between the search phrase
     * and result. </p>
     */
    inline double GetRelevance() const { return m_relevance; }
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }
    inline void SetRelevance(double value) { m_relevanceHasBeenSet = true; m_relevance = value; }
    inline SearchSampleQueriesSearchResult& WithRelevance(double value) { SetRelevance(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sQL;
    bool m_sQLHasBeenSet = false;

    double m_relevance{0.0};
    bool m_relevanceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
