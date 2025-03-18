/**
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
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult() = default;
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Any validation errors that were found.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const { return m_validationErrors; }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    void SetValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::forward<ValidationErrorsT>(value); }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    ValidatePipelineDefinitionResult& WithValidationErrors(ValidationErrorsT&& value) { SetValidationErrors(std::forward<ValidationErrorsT>(value)); return *this;}
    template<typename ValidationErrorsT = ValidationError>
    ValidatePipelineDefinitionResult& AddValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline const Aws::Vector<ValidationWarning>& GetValidationWarnings() const { return m_validationWarnings; }
    template<typename ValidationWarningsT = Aws::Vector<ValidationWarning>>
    void SetValidationWarnings(ValidationWarningsT&& value) { m_validationWarningsHasBeenSet = true; m_validationWarnings = std::forward<ValidationWarningsT>(value); }
    template<typename ValidationWarningsT = Aws::Vector<ValidationWarning>>
    ValidatePipelineDefinitionResult& WithValidationWarnings(ValidationWarningsT&& value) { SetValidationWarnings(std::forward<ValidationWarningsT>(value)); return *this;}
    template<typename ValidationWarningsT = ValidationWarning>
    ValidatePipelineDefinitionResult& AddValidationWarnings(ValidationWarningsT&& value) { m_validationWarningsHasBeenSet = true; m_validationWarnings.emplace_back(std::forward<ValidationWarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there were validation errors.</p>
     */
    inline bool GetErrored() const { return m_errored; }
    inline void SetErrored(bool value) { m_erroredHasBeenSet = true; m_errored = value; }
    inline ValidatePipelineDefinitionResult& WithErrored(bool value) { SetErrored(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidatePipelineDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationError> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;

    Aws::Vector<ValidationWarning> m_validationWarnings;
    bool m_validationWarningsHasBeenSet = false;

    bool m_errored{false};
    bool m_erroredHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
