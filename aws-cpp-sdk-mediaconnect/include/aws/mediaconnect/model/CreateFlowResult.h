/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Flow.h>
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
  class CreateFlowResult
  {
  public:
    AWS_MEDIACONNECT_API CreateFlowResult();
    AWS_MEDIACONNECT_API CreateFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API CreateFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Flow& GetFlow() const{ return m_flow; }

    
    inline void SetFlow(const Flow& value) { m_flow = value; }

    
    inline void SetFlow(Flow&& value) { m_flow = std::move(value); }

    
    inline CreateFlowResult& WithFlow(const Flow& value) { SetFlow(value); return *this;}

    
    inline CreateFlowResult& WithFlow(Flow&& value) { SetFlow(std::move(value)); return *this;}

  private:

    Flow m_flow;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
