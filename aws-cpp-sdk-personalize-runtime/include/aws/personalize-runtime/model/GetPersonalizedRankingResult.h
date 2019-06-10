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
  class AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult
  {
  public:
    GetPersonalizedRankingResult();
    GetPersonalizedRankingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPersonalizedRankingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetPersonalizedRanking() const{ return m_personalizedRanking; }

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline void SetPersonalizedRanking(const Aws::Vector<PredictedItem>& value) { m_personalizedRanking = value; }

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline void SetPersonalizedRanking(Aws::Vector<PredictedItem>&& value) { m_personalizedRanking = std::move(value); }

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline GetPersonalizedRankingResult& WithPersonalizedRanking(const Aws::Vector<PredictedItem>& value) { SetPersonalizedRanking(value); return *this;}

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline GetPersonalizedRankingResult& WithPersonalizedRanking(Aws::Vector<PredictedItem>&& value) { SetPersonalizedRanking(std::move(value)); return *this;}

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline GetPersonalizedRankingResult& AddPersonalizedRanking(const PredictedItem& value) { m_personalizedRanking.push_back(value); return *this; }

    /**
     * <p>A list of items in order of most likely interest to the user.</p>
     */
    inline GetPersonalizedRankingResult& AddPersonalizedRanking(PredictedItem&& value) { m_personalizedRanking.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PredictedItem> m_personalizedRanking;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
