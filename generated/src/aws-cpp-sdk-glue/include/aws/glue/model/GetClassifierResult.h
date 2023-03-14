/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Classifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class GetClassifierResult
  {
  public:
    AWS_GLUE_API GetClassifierResult();
    AWS_GLUE_API GetClassifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetClassifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested classifier.</p>
     */
    inline const Classifier& GetClassifier() const{ return m_classifier; }

    /**
     * <p>The requested classifier.</p>
     */
    inline void SetClassifier(const Classifier& value) { m_classifier = value; }

    /**
     * <p>The requested classifier.</p>
     */
    inline void SetClassifier(Classifier&& value) { m_classifier = std::move(value); }

    /**
     * <p>The requested classifier.</p>
     */
    inline GetClassifierResult& WithClassifier(const Classifier& value) { SetClassifier(value); return *this;}

    /**
     * <p>The requested classifier.</p>
     */
    inline GetClassifierResult& WithClassifier(Classifier&& value) { SetClassifier(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetClassifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetClassifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetClassifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Classifier m_classifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
