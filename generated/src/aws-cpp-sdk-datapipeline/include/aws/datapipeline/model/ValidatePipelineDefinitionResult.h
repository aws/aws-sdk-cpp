﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/ValidationError.h>
#include <aws/datapipeline/model/ValidationWarning.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ValidatePipelineDefinition.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinitionOutput">AWS
   * API Reference</a></p>
   */
  class ValidatePipelineDefinitionResult
  {
  public:
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult();
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Any validation errors that were found.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrors = value; }
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrors = std::move(value); }
    inline ValidatePipelineDefinitionResult& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}
    inline ValidatePipelineDefinitionResult& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}
    inline ValidatePipelineDefinitionResult& AddValidationErrors(const ValidationError& value) { m_validationErrors.push_back(value); return *this; }
    inline ValidatePipelineDefinitionResult& AddValidationErrors(ValidationError&& value) { m_validationErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline const Aws::Vector<ValidationWarning>& GetValidationWarnings() const{ return m_validationWarnings; }
    inline void SetValidationWarnings(const Aws::Vector<ValidationWarning>& value) { m_validationWarnings = value; }
    inline void SetValidationWarnings(Aws::Vector<ValidationWarning>&& value) { m_validationWarnings = std::move(value); }
    inline ValidatePipelineDefinitionResult& WithValidationWarnings(const Aws::Vector<ValidationWarning>& value) { SetValidationWarnings(value); return *this;}
    inline ValidatePipelineDefinitionResult& WithValidationWarnings(Aws::Vector<ValidationWarning>&& value) { SetValidationWarnings(std::move(value)); return *this;}
    inline ValidatePipelineDefinitionResult& AddValidationWarnings(const ValidationWarning& value) { m_validationWarnings.push_back(value); return *this; }
    inline ValidatePipelineDefinitionResult& AddValidationWarnings(ValidationWarning&& value) { m_validationWarnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there were validation errors.</p>
     */
    inline bool GetErrored() const{ return m_errored; }
    inline void SetErrored(bool value) { m_errored = value; }
    inline ValidatePipelineDefinitionResult& WithErrored(bool value) { SetErrored(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidatePipelineDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidatePipelineDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidatePipelineDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationError> m_validationErrors;

    Aws::Vector<ValidationWarning> m_validationWarnings;

    bool m_errored;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
