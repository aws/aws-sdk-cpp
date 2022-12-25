/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Output.h>
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
  class UpdateFlowOutputResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowOutputResult();
    AWS_MEDIACONNECT_API UpdateFlowOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateFlowOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline UpdateFlowOutputResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline UpdateFlowOutputResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that is associated with the updated output.
     */
    inline UpdateFlowOutputResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The new settings of the output that you updated.
     */
    inline const Output& GetOutput() const{ return m_output; }

    /**
     * The new settings of the output that you updated.
     */
    inline void SetOutput(const Output& value) { m_output = value; }

    /**
     * The new settings of the output that you updated.
     */
    inline void SetOutput(Output&& value) { m_output = std::move(value); }

    /**
     * The new settings of the output that you updated.
     */
    inline UpdateFlowOutputResult& WithOutput(const Output& value) { SetOutput(value); return *this;}

    /**
     * The new settings of the output that you updated.
     */
    inline UpdateFlowOutputResult& WithOutput(Output&& value) { SetOutput(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;

    Output m_output;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
