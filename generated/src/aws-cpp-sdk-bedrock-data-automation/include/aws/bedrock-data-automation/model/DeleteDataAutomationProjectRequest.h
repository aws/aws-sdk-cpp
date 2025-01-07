﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Delete DataAutomationProject Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteDataAutomationProjectRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDataAutomationProjectRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DeleteDataAutomationProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataAutomationProject"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN generated at the server side when a DataAutomationProject is created</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline DeleteDataAutomationProjectRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DeleteDataAutomationProjectRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DeleteDataAutomationProjectRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
