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
  class UpdateFunctionDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateFunctionDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunctionDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateFunctionDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFunctionDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFunctionDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
