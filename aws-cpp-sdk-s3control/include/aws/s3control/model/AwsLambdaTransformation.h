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
   * <p>Lambda function used to transform objects through an Object Lambda Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AwsLambdaTransformation">AWS
   * API Reference</a></p>
   */
  class AwsLambdaTransformation
  {
  public:
    AWS_S3CONTROL_API AwsLambdaTransformation();
    AWS_S3CONTROL_API AwsLambdaTransformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AwsLambdaTransformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline AwsLambdaTransformation& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline AwsLambdaTransformation& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline AwsLambdaTransformation& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline const Aws::String& GetFunctionPayload() const{ return m_functionPayload; }

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline bool FunctionPayloadHasBeenSet() const { return m_functionPayloadHasBeenSet; }

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline void SetFunctionPayload(const Aws::String& value) { m_functionPayloadHasBeenSet = true; m_functionPayload = value; }

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline void SetFunctionPayload(Aws::String&& value) { m_functionPayloadHasBeenSet = true; m_functionPayload = std::move(value); }

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline void SetFunctionPayload(const char* value) { m_functionPayloadHasBeenSet = true; m_functionPayload.assign(value); }

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline AwsLambdaTransformation& WithFunctionPayload(const Aws::String& value) { SetFunctionPayload(value); return *this;}

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline AwsLambdaTransformation& WithFunctionPayload(Aws::String&& value) { SetFunctionPayload(std::move(value)); return *this;}

    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline AwsLambdaTransformation& WithFunctionPayload(const char* value) { SetFunctionPayload(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_functionPayload;
    bool m_functionPayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
