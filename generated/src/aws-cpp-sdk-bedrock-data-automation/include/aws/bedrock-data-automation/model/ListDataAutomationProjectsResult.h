/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectSummary.h>
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
   * <p>List DataAutomationProject Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListDataAutomationProjectsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataAutomationProjectsResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationProjectsResult();
    AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<DataAutomationProjectSummary>& GetProjects() const{ return m_projects; }
    inline void SetProjects(const Aws::Vector<DataAutomationProjectSummary>& value) { m_projects = value; }
    inline void SetProjects(Aws::Vector<DataAutomationProjectSummary>&& value) { m_projects = std::move(value); }
    inline ListDataAutomationProjectsResult& WithProjects(const Aws::Vector<DataAutomationProjectSummary>& value) { SetProjects(value); return *this;}
    inline ListDataAutomationProjectsResult& WithProjects(Aws::Vector<DataAutomationProjectSummary>&& value) { SetProjects(std::move(value)); return *this;}
    inline ListDataAutomationProjectsResult& AddProjects(const DataAutomationProjectSummary& value) { m_projects.push_back(value); return *this; }
    inline ListDataAutomationProjectsResult& AddProjects(DataAutomationProjectSummary&& value) { m_projects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataAutomationProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataAutomationProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataAutomationProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataAutomationProjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataAutomationProjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataAutomationProjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataAutomationProjectSummary> m_projects;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
