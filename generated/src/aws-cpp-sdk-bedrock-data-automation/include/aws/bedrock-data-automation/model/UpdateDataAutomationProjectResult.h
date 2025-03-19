/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStatus.h>
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
namespace BedrockDataAutomation
{
namespace Model
{
  /**
   * <p>Update DataAutomationProject Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpdateDataAutomationProjectResponse">AWS
   * API Reference</a></p>
   */
  class UpdateDataAutomationProjectResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API UpdateDataAutomationProjectResult() = default;
    AWS_BEDROCKDATAAUTOMATION_API UpdateDataAutomationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API UpdateDataAutomationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    UpdateDataAutomationProjectResult& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStage GetProjectStage() const { return m_projectStage; }
    inline void SetProjectStage(DataAutomationProjectStage value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline UpdateDataAutomationProjectResult& WithProjectStage(DataAutomationProjectStage value) { SetProjectStage(value); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataAutomationProjectStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateDataAutomationProjectResult& WithStatus(DataAutomationProjectStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDataAutomationProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    DataAutomationProjectStage m_projectStage{DataAutomationProjectStage::NOT_SET};
    bool m_projectStageHasBeenSet = false;

    DataAutomationProjectStatus m_status{DataAutomationProjectStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
