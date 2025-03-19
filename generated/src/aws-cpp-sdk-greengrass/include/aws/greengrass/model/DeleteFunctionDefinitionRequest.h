/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class DeleteFunctionDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DeleteFunctionDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFunctionDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const { return m_functionDefinitionId; }
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }
    template<typename FunctionDefinitionIdT = Aws::String>
    void SetFunctionDefinitionId(FunctionDefinitionIdT&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::forward<FunctionDefinitionIdT>(value); }
    template<typename FunctionDefinitionIdT = Aws::String>
    DeleteFunctionDefinitionRequest& WithFunctionDefinitionId(FunctionDefinitionIdT&& value) { SetFunctionDefinitionId(std::forward<FunctionDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
