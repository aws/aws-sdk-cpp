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
    AWS_COMPREHEND_API DetectToxicContentResult();
    AWS_COMPREHEND_API DetectToxicContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectToxicContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline const Aws::Vector<ToxicLabels>& GetResultList() const{ return m_resultList; }

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline void SetResultList(const Aws::Vector<ToxicLabels>& value) { m_resultList = value; }

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline void SetResultList(Aws::Vector<ToxicLabels>&& value) { m_resultList = std::move(value); }

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline DetectToxicContentResult& WithResultList(const Aws::Vector<ToxicLabels>& value) { SetResultList(value); return *this;}

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline DetectToxicContentResult& WithResultList(Aws::Vector<ToxicLabels>&& value) { SetResultList(std::move(value)); return *this;}

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline DetectToxicContentResult& AddResultList(const ToxicLabels& value) { m_resultList.push_back(value); return *this; }

    /**
     * <p>Results of the content moderation analysis. Each entry in the results list
     * contains a list of toxic content types identified in the text, along with a
     * confidence score for each content type. The results list also includes a
     * toxicity score for each entry in the results list. </p>
     */
    inline DetectToxicContentResult& AddResultList(ToxicLabels&& value) { m_resultList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectToxicContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectToxicContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectToxicContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ToxicLabels> m_resultList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
