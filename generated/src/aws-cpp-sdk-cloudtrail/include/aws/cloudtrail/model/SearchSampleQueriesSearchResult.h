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
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult();
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API SearchSampleQueriesSearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of a sample query. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SearchSampleQueriesSearchResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SearchSampleQueriesSearchResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SearchSampleQueriesSearchResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A longer description of a sample query. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SearchSampleQueriesSearchResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SearchSampleQueriesSearchResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SearchSampleQueriesSearchResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SQL code of the sample query. </p>
     */
    inline const Aws::String& GetSQL() const{ return m_sQL; }
    inline bool SQLHasBeenSet() const { return m_sQLHasBeenSet; }
    inline void SetSQL(const Aws::String& value) { m_sQLHasBeenSet = true; m_sQL = value; }
    inline void SetSQL(Aws::String&& value) { m_sQLHasBeenSet = true; m_sQL = std::move(value); }
    inline void SetSQL(const char* value) { m_sQLHasBeenSet = true; m_sQL.assign(value); }
    inline SearchSampleQueriesSearchResult& WithSQL(const Aws::String& value) { SetSQL(value); return *this;}
    inline SearchSampleQueriesSearchResult& WithSQL(Aws::String&& value) { SetSQL(std::move(value)); return *this;}
    inline SearchSampleQueriesSearchResult& WithSQL(const char* value) { SetSQL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A value between 0 and 1 indicating the similarity between the search phrase
     * and result. </p>
     */
    inline double GetRelevance() const{ return m_relevance; }
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

    double m_relevance;
    bool m_relevanceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
