/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationProject.h>
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
namespace BedrockDataAutomation
{
namespace Model
{
  /**
   * <p>Get DataAutomationProject Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationProjectResponse">AWS
   * API Reference</a></p>
   */
  class GetDataAutomationProjectResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationProjectResult();
    AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const DataAutomationProject& GetProject() const{ return m_project; }
    inline void SetProject(const DataAutomationProject& value) { m_project = value; }
    inline void SetProject(DataAutomationProject&& value) { m_project = std::move(value); }
    inline GetDataAutomationProjectResult& WithProject(const DataAutomationProject& value) { SetProject(value); return *this;}
    inline GetDataAutomationProjectResult& WithProject(DataAutomationProject&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataAutomationProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataAutomationProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataAutomationProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataAutomationProject m_project;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
