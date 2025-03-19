/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/BaselineSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListBaselinesResult
  {
  public:
    AWS_CONTROLTOWER_API ListBaselinesResult() = default;
    AWS_CONTROLTOWER_API ListBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline const Aws::Vector<BaselineSummary>& GetBaselines() const { return m_baselines; }
    template<typename BaselinesT = Aws::Vector<BaselineSummary>>
    void SetBaselines(BaselinesT&& value) { m_baselinesHasBeenSet = true; m_baselines = std::forward<BaselinesT>(value); }
    template<typename BaselinesT = Aws::Vector<BaselineSummary>>
    ListBaselinesResult& WithBaselines(BaselinesT&& value) { SetBaselines(std::forward<BaselinesT>(value)); return *this;}
    template<typename BaselinesT = BaselineSummary>
    ListBaselinesResult& AddBaselines(BaselinesT&& value) { m_baselinesHasBeenSet = true; m_baselines.emplace_back(std::forward<BaselinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBaselinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBaselinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BaselineSummary> m_baselines;
    bool m_baselinesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
