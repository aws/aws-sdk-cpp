/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/ToxicLabels.h>
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
namespace Comprehend
{
namespace Model
{
  class DetectToxicContentResult
  {
  public:
    AWS_COMPREHEND_API DetectToxicContentResult() = default;
    AWS_COMPREHEND_API DetectToxicContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectToxicContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline const Aws::Vector<ToxicLabels>& GetResultList() const { return m_resultList; }
    template<typename ResultListT = Aws::Vector<ToxicLabels>>
    void SetResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList = std::forward<ResultListT>(value); }
    template<typename ResultListT = Aws::Vector<ToxicLabels>>
    DetectToxicContentResult& WithResultList(ResultListT&& value) { SetResultList(std::forward<ResultListT>(value)); return *this;}
    template<typename ResultListT = ToxicLabels>
    DetectToxicContentResult& AddResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList.emplace_back(std::forward<ResultListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectToxicContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ToxicLabels> m_resultList;
    bool m_resultListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
