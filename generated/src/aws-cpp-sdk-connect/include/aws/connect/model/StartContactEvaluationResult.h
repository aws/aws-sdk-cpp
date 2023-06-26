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
  class StartContactEvaluationResult
  {
  public:
    AWS_CONNECT_API StartContactEvaluationResult();
    AWS_CONNECT_API StartContactEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartContactEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline const Aws::String& GetEvaluationArn() const{ return m_evaluationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(const Aws::String& value) { m_evaluationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(Aws::String&& value) { m_evaluationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(const char* value) { m_evaluationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationArn(const Aws::String& value) { SetEvaluationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationArn(Aws::String&& value) { SetEvaluationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline StartContactEvaluationResult& WithEvaluationArn(const char* value) { SetEvaluationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartContactEvaluationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartContactEvaluationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartContactEvaluationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_evaluationId;

    Aws::String m_evaluationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
