﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DeleteFlowDefinitionRequest : public SageMakerRequest
  {
  public:
    DeleteFlowDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFlowDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const{ return m_flowDefinitionName; }

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline void SetFlowDefinitionName(const Aws::String& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = value; }

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline void SetFlowDefinitionName(Aws::String&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::move(value); }

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline void SetFlowDefinitionName(const char* value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName.assign(value); }

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline DeleteFlowDefinitionRequest& WithFlowDefinitionName(const Aws::String& value) { SetFlowDefinitionName(value); return *this;}

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline DeleteFlowDefinitionRequest& WithFlowDefinitionName(Aws::String&& value) { SetFlowDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the flow definition you are deleting.</p>
     */
    inline DeleteFlowDefinitionRequest& WithFlowDefinitionName(const char* value) { SetFlowDefinitionName(value); return *this;}

  private:

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
