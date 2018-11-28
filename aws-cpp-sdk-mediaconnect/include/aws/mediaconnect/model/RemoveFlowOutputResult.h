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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API RemoveFlowOutputResult
  {
  public:
    RemoveFlowOutputResult();
    RemoveFlowOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveFlowOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline RemoveFlowOutputResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline RemoveFlowOutputResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline RemoveFlowOutputResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The ARN of the output that was removed.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }

    /**
     * The ARN of the output that was removed.
     */
    inline void SetOutputArn(const Aws::String& value) { m_outputArn = value; }

    /**
     * The ARN of the output that was removed.
     */
    inline void SetOutputArn(Aws::String&& value) { m_outputArn = std::move(value); }

    /**
     * The ARN of the output that was removed.
     */
    inline void SetOutputArn(const char* value) { m_outputArn.assign(value); }

    /**
     * The ARN of the output that was removed.
     */
    inline RemoveFlowOutputResult& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}

    /**
     * The ARN of the output that was removed.
     */
    inline RemoveFlowOutputResult& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}

    /**
     * The ARN of the output that was removed.
     */
    inline RemoveFlowOutputResult& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::String m_outputArn;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
