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
   * <p>Contains the output of PutPipelineDefinition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PutPipelineDefinitionOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API PutPipelineDefinitionResult
  {
  public:
    PutPipelineDefinitionResult();
    PutPipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutPipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrors = value; }

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrors = std::move(value); }

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& AddValidationErrors(const ValidationError& value) { m_validationErrors.push_back(value); return *this; }

    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& AddValidationErrors(ValidationError&& value) { m_validationErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline const Aws::Vector<ValidationWarning>& GetValidationWarnings() const{ return m_validationWarnings; }

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline void SetValidationWarnings(const Aws::Vector<ValidationWarning>& value) { m_validationWarnings = value; }

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline void SetValidationWarnings(Aws::Vector<ValidationWarning>&& value) { m_validationWarnings = std::move(value); }

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& WithValidationWarnings(const Aws::Vector<ValidationWarning>& value) { SetValidationWarnings(value); return *this;}

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& WithValidationWarnings(Aws::Vector<ValidationWarning>&& value) { SetValidationWarnings(std::move(value)); return *this;}

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& AddValidationWarnings(const ValidationWarning& value) { m_validationWarnings.push_back(value); return *this; }

    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline PutPipelineDefinitionResult& AddValidationWarnings(ValidationWarning&& value) { m_validationWarnings.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether there were validation errors, and the pipeline definition
     * is stored but cannot be activated until you correct the pipeline and call
     * <code>PutPipelineDefinition</code> to commit the corrected pipeline.</p>
     */
    inline bool GetErrored() const{ return m_errored; }

    /**
     * <p>Indicates whether there were validation errors, and the pipeline definition
     * is stored but cannot be activated until you correct the pipeline and call
     * <code>PutPipelineDefinition</code> to commit the corrected pipeline.</p>
     */
    inline void SetErrored(bool value) { m_errored = value; }

    /**
     * <p>Indicates whether there were validation errors, and the pipeline definition
     * is stored but cannot be activated until you correct the pipeline and call
     * <code>PutPipelineDefinition</code> to commit the corrected pipeline.</p>
     */
    inline PutPipelineDefinitionResult& WithErrored(bool value) { SetErrored(value); return *this;}

  private:

    Aws::Vector<ValidationError> m_validationErrors;

    Aws::Vector<ValidationWarning> m_validationWarnings;

    bool m_errored;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
