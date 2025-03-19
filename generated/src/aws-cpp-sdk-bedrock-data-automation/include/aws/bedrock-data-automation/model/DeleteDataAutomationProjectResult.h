/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Delete DataAutomationProject Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteDataAutomationProjectResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDataAutomationProjectResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult() = default;
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    DeleteDataAutomationProjectResult& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataAutomationProjectStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteDataAutomationProjectResult& WithStatus(DataAutomationProjectStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDataAutomationProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    DataAutomationProjectStatus m_status{DataAutomationProjectStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
