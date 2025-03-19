/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTemplate.h>
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
namespace FIS
{
namespace Model
{
  class UpdateExperimentTemplateResult
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateResult() = default;
    AWS_FIS_API UpdateExperimentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API UpdateExperimentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the experiment template.</p>
     */
    inline const ExperimentTemplate& GetExperimentTemplate() const { return m_experimentTemplate; }
    template<typename ExperimentTemplateT = ExperimentTemplate>
    void SetExperimentTemplate(ExperimentTemplateT&& value) { m_experimentTemplateHasBeenSet = true; m_experimentTemplate = std::forward<ExperimentTemplateT>(value); }
    template<typename ExperimentTemplateT = ExperimentTemplate>
    UpdateExperimentTemplateResult& WithExperimentTemplate(ExperimentTemplateT&& value) { SetExperimentTemplate(std::forward<ExperimentTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateExperimentTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExperimentTemplate m_experimentTemplate;
    bool m_experimentTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
