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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/AddOutputRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to add outputs to the specified flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API AddFlowOutputsRequest : public MediaConnectRequest
  {
  public:
    AddFlowOutputsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowOutputs"; }

    Aws::String SerializePayload() const override;


    /**
     * The flow that you want to add outputs to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to add outputs to.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to add outputs to.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to add outputs to.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to add outputs to.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to add outputs to.
     */
    inline AddFlowOutputsRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to add outputs to.
     */
    inline AddFlowOutputsRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to add outputs to.
     */
    inline AddFlowOutputsRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * A list of outputs that you want to add.
     */
    inline const Aws::Vector<AddOutputRequest>& GetOutputs() const{ return m_outputs; }

    /**
     * A list of outputs that you want to add.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * A list of outputs that you want to add.
     */
    inline void SetOutputs(const Aws::Vector<AddOutputRequest>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * A list of outputs that you want to add.
     */
    inline void SetOutputs(Aws::Vector<AddOutputRequest>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * A list of outputs that you want to add.
     */
    inline AddFlowOutputsRequest& WithOutputs(const Aws::Vector<AddOutputRequest>& value) { SetOutputs(value); return *this;}

    /**
     * A list of outputs that you want to add.
     */
    inline AddFlowOutputsRequest& WithOutputs(Aws::Vector<AddOutputRequest>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * A list of outputs that you want to add.
     */
    inline AddFlowOutputsRequest& AddOutputs(const AddOutputRequest& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * A list of outputs that you want to add.
     */
    inline AddFlowOutputsRequest& AddOutputs(AddOutputRequest&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;

    Aws::Vector<AddOutputRequest> m_outputs;
    bool m_outputsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
