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
#include <aws/mediaconnect/model/Status.h>
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
  class AWS_MEDIACONNECT_API StartFlowResult
  {
  public:
    StartFlowResult();
    StartFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that you started.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that you started.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that you started.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that you started.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that you started.
     */
    inline StartFlowResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that you started.
     */
    inline StartFlowResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that you started.
     */
    inline StartFlowResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The status of the flow when the StartFlow process begins.
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * The status of the flow when the StartFlow process begins.
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * The status of the flow when the StartFlow process begins.
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * The status of the flow when the StartFlow process begins.
     */
    inline StartFlowResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * The status of the flow when the StartFlow process begins.
     */
    inline StartFlowResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;

    Status m_status;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
