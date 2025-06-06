﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class GetCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API GetCodeSigningConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration. </p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const { return m_codeSigningConfigArn; }
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }
    template<typename CodeSigningConfigArnT = Aws::String>
    void SetCodeSigningConfigArn(CodeSigningConfigArnT&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::forward<CodeSigningConfigArnT>(value); }
    template<typename CodeSigningConfigArnT = Aws::String>
    GetCodeSigningConfigRequest& WithCodeSigningConfigArn(CodeSigningConfigArnT&& value) { SetCodeSigningConfigArn(std::forward<CodeSigningConfigArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
