/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An AWS Lambda layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionLayer">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsLambdaFunctionLayer
  {
  public:
    AwsLambdaFunctionLayer();
    AwsLambdaFunctionLayer(Aws::Utils::Json::JsonView jsonValue);
    AwsLambdaFunctionLayer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline AwsLambdaFunctionLayer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline AwsLambdaFunctionLayer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline AwsLambdaFunctionLayer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline int GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline void SetCodeSize(int value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline AwsLambdaFunctionLayer& WithCodeSize(int value) { SetCodeSize(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    int m_codeSize;
    bool m_codeSizeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
