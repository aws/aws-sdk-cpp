/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/QueryType.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>The suggested query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SuggestQueryResult">AWS
   * API Reference</a></p>
   */
  class SuggestQueryResult
  {
  public:
    AWS_GEOPLACES_API SuggestQueryResult();
    AWS_GEOPLACES_API SuggestQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SuggestQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>QueryId can be used to complete a follow up query through the SearchText API.
     * The QueryId retains context from the original Suggest request such as filters,
     * political view and language. See the SearchText API documentation for more
     * details <a
     * href="https://docs.aws.amazon.com/latest/APIReference/API_geoplaces_SearchText.html">SearchText
     * API docs</a>.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline SuggestQueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline SuggestQueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline SuggestQueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query type. Category qeuries will search for places which have an entry
     * matching the given category, for example "doctor office". BusinessChain queries
     * will search for instances of a given business.</p>
     */
    inline const QueryType& GetQueryType() const{ return m_queryType; }
    inline bool QueryTypeHasBeenSet() const { return m_queryTypeHasBeenSet; }
    inline void SetQueryType(const QueryType& value) { m_queryTypeHasBeenSet = true; m_queryType = value; }
    inline void SetQueryType(QueryType&& value) { m_queryTypeHasBeenSet = true; m_queryType = std::move(value); }
    inline SuggestQueryResult& WithQueryType(const QueryType& value) { SetQueryType(value); return *this;}
    inline SuggestQueryResult& WithQueryType(QueryType&& value) { SetQueryType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    QueryType m_queryType;
    bool m_queryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
