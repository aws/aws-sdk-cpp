/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AgentVersion.h>

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
namespace OpsWorks
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_OPSWORKS_API DescribeAgentVersionsResult
  {
  public:
    DescribeAgentVersionsResult();
    DescribeAgentVersionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAgentVersionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const{ return m_agentVersions; }
    
    inline void SetAgentVersions(const Aws::Vector<AgentVersion>& value) { m_agentVersions = value; }

    
    inline DescribeAgentVersionsResult&  WithAgentVersions(const Aws::Vector<AgentVersion>& value) { SetAgentVersions(value); return *this;}

    
    inline DescribeAgentVersionsResult& AddAgentVersions(const AgentVersion& value) { m_agentVersions.push_back(value); return *this; }

  private:
    Aws::Vector<AgentVersion> m_agentVersions;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
