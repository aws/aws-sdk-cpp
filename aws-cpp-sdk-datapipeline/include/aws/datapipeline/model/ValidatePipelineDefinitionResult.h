/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DATAPIPELINE_API ValidatePipelineDefinitionResult
  {
  public:
    ValidatePipelineDefinitionResult();
    ValidatePipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ValidatePipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Any validation errors that were found.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrors = value; }

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrors = std::move(value); }

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& AddValidationErrors(const ValidationError& value) { m_validationErrors.push_back(value); return *this; }

    /**
     * <p>Any validation errors that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& AddValidationErrors(ValidationError&& value) { m_validationErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline const Aws::Vector<ValidationWarning>& GetValidationWarnings() const{ return m_validationWarnings; }

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline void SetValidationWarnings(const Aws::Vector<ValidationWarning>& value) { m_validationWarnings = value; }

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline void SetValidationWarnings(Aws::Vector<ValidationWarning>&& value) { m_validationWarnings = std::move(value); }

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& WithValidationWarnings(const Aws::Vector<ValidationWarning>& value) { SetValidationWarnings(value); return *this;}

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& WithValidationWarnings(Aws::Vector<ValidationWarning>&& value) { SetValidationWarnings(std::move(value)); return *this;}

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& AddValidationWarnings(const ValidationWarning& value) { m_validationWarnings.push_back(value); return *this; }

    /**
     * <p>Any validation warnings that were found.</p>
     */
    inline ValidatePipelineDefinitionResult& AddValidationWarnings(ValidationWarning&& value) { m_validationWarnings.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether there were validation errors.</p>
     */
    inline bool GetErrored() const{ return m_errored; }

    /**
     * <p>Indicates whether there were validation errors.</p>
     */
    inline void SetErrored(bool value) { m_errored = value; }

    /**
     * <p>Indicates whether there were validation errors.</p>
     */
    inline ValidatePipelineDefinitionResult& WithErrored(bool value) { SetErrored(value); return *this;}

  private:

    Aws::Vector<ValidationError> m_validationErrors;

    Aws::Vector<ValidationWarning> m_validationWarnings;

    bool m_errored;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
