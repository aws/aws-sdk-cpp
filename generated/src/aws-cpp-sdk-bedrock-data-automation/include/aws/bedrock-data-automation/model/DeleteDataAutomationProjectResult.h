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
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult();
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline DeleteDataAutomationProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DeleteDataAutomationProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DeleteDataAutomationProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataAutomationProjectStatus& value) { m_status = value; }
    inline void SetStatus(DataAutomationProjectStatus&& value) { m_status = std::move(value); }
    inline DeleteDataAutomationProjectResult& WithStatus(const DataAutomationProjectStatus& value) { SetStatus(value); return *this;}
    inline DeleteDataAutomationProjectResult& WithStatus(DataAutomationProjectStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDataAutomationProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDataAutomationProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDataAutomationProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;

    DataAutomationProjectStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
