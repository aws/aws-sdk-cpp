/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartFlowResult
  {
  public:
    AWS_MEDIACONNECT_API StartFlowResult();
    AWS_MEDIACONNECT_API StartFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API StartFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
