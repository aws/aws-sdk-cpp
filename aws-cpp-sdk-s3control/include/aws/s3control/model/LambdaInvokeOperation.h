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
  class AWS_S3CONTROL_API LambdaInvokeOperation
  {
  public:
    LambdaInvokeOperation();
    LambdaInvokeOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    LambdaInvokeOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Lambda function that the specified
     * job will invoke for each object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
