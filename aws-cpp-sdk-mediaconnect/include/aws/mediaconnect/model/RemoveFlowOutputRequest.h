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
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONNECT_API RemoveFlowOutputRequest : public MediaConnectRequest
  {
  public:
    RemoveFlowOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFlowOutput"; }

    Aws::String SerializePayload() const override;


    /**
     * The flow that you want to remove an output from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to remove an output from.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to remove an output from.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to remove an output from.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to remove an output from.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to remove an output from.
     */
    inline RemoveFlowOutputRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to remove an output from.
     */
    inline RemoveFlowOutputRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to remove an output from.
     */
    inline RemoveFlowOutputRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The ARN of the output that you want to remove.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }

    /**
     * The ARN of the output that you want to remove.
     */
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }

    /**
     * The ARN of the output that you want to remove.
     */
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }

    /**
     * The ARN of the output that you want to remove.
     */
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }

    /**
     * The ARN of the output that you want to remove.
     */
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }

    /**
     * The ARN of the output that you want to remove.
     */
    inline RemoveFlowOutputRequest& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}

    /**
     * The ARN of the output that you want to remove.
     */
    inline RemoveFlowOutputRequest& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}

    /**
     * The ARN of the output that you want to remove.
     */
    inline RemoveFlowOutputRequest& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
