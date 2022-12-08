/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTemplate.h>
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
namespace FIS
{
namespace Model
{
  class CreateExperimentTemplateResult
  {
  public:
    AWS_FIS_API CreateExperimentTemplateResult();
    AWS_FIS_API CreateExperimentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API CreateExperimentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the experiment template.</p>
     */
    inline const ExperimentTemplate& GetExperimentTemplate() const{ return m_experimentTemplate; }

    /**
     * <p>Information about the experiment template.</p>
     */
    inline void SetExperimentTemplate(const ExperimentTemplate& value) { m_experimentTemplate = value; }

    /**
     * <p>Information about the experiment template.</p>
     */
    inline void SetExperimentTemplate(ExperimentTemplate&& value) { m_experimentTemplate = std::move(value); }

    /**
     * <p>Information about the experiment template.</p>
     */
    inline CreateExperimentTemplateResult& WithExperimentTemplate(const ExperimentTemplate& value) { SetExperimentTemplate(value); return *this;}

    /**
     * <p>Information about the experiment template.</p>
     */
    inline CreateExperimentTemplateResult& WithExperimentTemplate(ExperimentTemplate&& value) { SetExperimentTemplate(std::move(value)); return *this;}

  private:

    ExperimentTemplate m_experimentTemplate;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
