﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ErrorDetail.h>
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
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API EvaluateMappingTemplateResult
  {
  public:
    EvaluateMappingTemplateResult();
    EvaluateMappingTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EvaluateMappingTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline const Aws::String& GetEvaluationResult() const{ return m_evaluationResult; }

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline void SetEvaluationResult(const Aws::String& value) { m_evaluationResult = value; }

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline void SetEvaluationResult(Aws::String&& value) { m_evaluationResult = std::move(value); }

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline void SetEvaluationResult(const char* value) { m_evaluationResult.assign(value); }

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline EvaluateMappingTemplateResult& WithEvaluationResult(const Aws::String& value) { SetEvaluationResult(value); return *this;}

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline EvaluateMappingTemplateResult& WithEvaluationResult(Aws::String&& value) { SetEvaluationResult(std::move(value)); return *this;}

    /**
     * <p>The mapping template; this can be a request or response template.</p>
     */
    inline EvaluateMappingTemplateResult& WithEvaluationResult(const char* value) { SetEvaluationResult(value); return *this;}


    /**
     * <p>The <code>ErrorDetail</code> object.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>The <code>ErrorDetail</code> object.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_error = value; }

    /**
     * <p>The <code>ErrorDetail</code> object.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }

    /**
     * <p>The <code>ErrorDetail</code> object.</p>
     */
    inline EvaluateMappingTemplateResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>The <code>ErrorDetail</code> object.</p>
     */
    inline EvaluateMappingTemplateResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}

  private:

    Aws::String m_evaluationResult;

    ErrorDetail m_error;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
