/**
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
  class DeleteCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API DeleteCodeSigningConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const{ return m_codeSigningConfigArn; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const Aws::String& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = value; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(Aws::String&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::move(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const char* value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn.assign(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline DeleteCodeSigningConfigRequest& WithCodeSigningConfigArn(const Aws::String& value) { SetCodeSigningConfigArn(value); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline DeleteCodeSigningConfigRequest& WithCodeSigningConfigArn(Aws::String&& value) { SetCodeSigningConfigArn(std::move(value)); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline DeleteCodeSigningConfigRequest& WithCodeSigningConfigArn(const char* value) { SetCodeSigningConfigArn(value); return *this;}

  private:

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
