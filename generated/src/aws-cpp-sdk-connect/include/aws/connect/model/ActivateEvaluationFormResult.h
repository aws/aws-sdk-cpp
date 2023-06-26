/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class ActivateEvaluationFormResult
  {
  public:
    AWS_CONNECT_API ActivateEvaluationFormResult();
    AWS_CONNECT_API ActivateEvaluationFormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ActivateEvaluationFormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormId = value; }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormId = std::move(value); }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormId.assign(value); }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const{ return m_evaluationFormArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(const Aws::String& value) { m_evaluationFormArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(Aws::String&& value) { m_evaluationFormArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(const char* value) { m_evaluationFormArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}


    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }

    /**
     * <p>A version of the evaluation form.</p>
     */
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersion = value; }

    /**
     * <p>A version of the evaluation form.</p>
     */
    inline ActivateEvaluationFormResult& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ActivateEvaluationFormResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ActivateEvaluationFormResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ActivateEvaluationFormResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_evaluationFormId;

    Aws::String m_evaluationFormArn;

    int m_evaluationFormVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
