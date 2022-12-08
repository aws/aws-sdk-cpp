/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a <code>Lambda Invoke</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LambdaInvokeOperation">AWS
   * API Reference</a></p>
   */
  class LambdaInvokeOperation
  {
  public:
    AWS_S3CONTROL_API LambdaInvokeOperation();
    AWS_S3CONTROL_API LambdaInvokeOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LambdaInvokeOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
