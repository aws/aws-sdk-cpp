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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Flow.h>
#include <aws/mediaconnect/model/Messages.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API DescribeFlowResult
  {
  public:
    DescribeFlowResult();
    DescribeFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Flow& GetFlow() const{ return m_flow; }

    
    inline void SetFlow(const Flow& value) { m_flow = value; }

    
    inline void SetFlow(Flow&& value) { m_flow = std::move(value); }

    
    inline DescribeFlowResult& WithFlow(const Flow& value) { SetFlow(value); return *this;}

    
    inline DescribeFlowResult& WithFlow(Flow&& value) { SetFlow(std::move(value)); return *this;}


    
    inline const Messages& GetMessages() const{ return m_messages; }

    
    inline void SetMessages(const Messages& value) { m_messages = value; }

    
    inline void SetMessages(Messages&& value) { m_messages = std::move(value); }

    
    inline DescribeFlowResult& WithMessages(const Messages& value) { SetMessages(value); return *this;}

    
    inline DescribeFlowResult& WithMessages(Messages&& value) { SetMessages(std::move(value)); return *this;}

  private:

    Flow m_flow;

    Messages m_messages;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
