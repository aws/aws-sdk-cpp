/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-runtime/model/PredictedItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PersonalizeRuntime
{
namespace Model
{
  class AWS_PERSONALIZERUNTIME_API GetRecommendationsResult
  {
  public:
    GetRecommendationsResult();
    GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of recommendations.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetItemList() const{ return m_itemList; }

    /**
     * <p>A list of recommendations.</p>
     */
    inline void SetItemList(const Aws::Vector<PredictedItem>& value) { m_itemList = value; }

    /**
     * <p>A list of recommendations.</p>
     */
    inline void SetItemList(Aws::Vector<PredictedItem>&& value) { m_itemList = std::move(value); }

    /**
     * <p>A list of recommendations.</p>
     */
    inline GetRecommendationsResult& WithItemList(const Aws::Vector<PredictedItem>& value) { SetItemList(value); return *this;}

    /**
     * <p>A list of recommendations.</p>
     */
    inline GetRecommendationsResult& WithItemList(Aws::Vector<PredictedItem>&& value) { SetItemList(std::move(value)); return *this;}

    /**
     * <p>A list of recommendations.</p>
     */
    inline GetRecommendationsResult& AddItemList(const PredictedItem& value) { m_itemList.push_back(value); return *this; }

    /**
     * <p>A list of recommendations.</p>
     */
    inline GetRecommendationsResult& AddItemList(PredictedItem&& value) { m_itemList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PredictedItem> m_itemList;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
