/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationForm.h>
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
namespace Connect
{
namespace Model
{
  class DescribeEvaluationFormResult
  {
  public:
    AWS_CONNECT_API DescribeEvaluationFormResult();
    AWS_CONNECT_API DescribeEvaluationFormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeEvaluationFormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the evaluation form.</p>
     */
    inline const EvaluationForm& GetEvaluationForm() const{ return m_evaluationForm; }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline void SetEvaluationForm(const EvaluationForm& value) { m_evaluationForm = value; }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline void SetEvaluationForm(EvaluationForm&& value) { m_evaluationForm = std::move(value); }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline DescribeEvaluationFormResult& WithEvaluationForm(const EvaluationForm& value) { SetEvaluationForm(value); return *this;}

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline DescribeEvaluationFormResult& WithEvaluationForm(EvaluationForm&& value) { SetEvaluationForm(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEvaluationFormResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEvaluationFormResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEvaluationFormResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EvaluationForm m_evaluationForm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
