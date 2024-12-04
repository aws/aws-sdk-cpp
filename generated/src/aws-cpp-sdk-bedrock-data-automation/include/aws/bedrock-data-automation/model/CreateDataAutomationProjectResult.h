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
   * <p>Create DataAutomationProject Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateDataAutomationProjectResponse">AWS
   * API Reference</a></p>
   */
  class CreateDataAutomationProjectResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationProjectResult();
    AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline CreateDataAutomationProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline CreateDataAutomationProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline CreateDataAutomationProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStage = std::move(value); }
    inline CreateDataAutomationProjectResult& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline CreateDataAutomationProjectResult& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataAutomationProjectStatus& value) { m_status = value; }
    inline void SetStatus(DataAutomationProjectStatus&& value) { m_status = std::move(value); }
    inline CreateDataAutomationProjectResult& WithStatus(const DataAutomationProjectStatus& value) { SetStatus(value); return *this;}
    inline CreateDataAutomationProjectResult& WithStatus(DataAutomationProjectStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDataAutomationProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDataAutomationProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDataAutomationProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;

    DataAutomationProjectStage m_projectStage;

    DataAutomationProjectStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
