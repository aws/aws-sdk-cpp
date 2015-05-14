/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  /*
    <p>The code for the Lambda function.</p>
  */
  class AWS_LAMBDA_API FunctionCode
  {
  public:
    FunctionCode();
    FunctionCode(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionCode& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>A base64-encoded .zip file containing your packaged source code. For more information about creating a .zip file, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
    */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }
    /*
     <p>A base64-encoded .zip file containing your packaged source code. For more information about creating a .zip file, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
    */
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /*
     <p>A base64-encoded .zip file containing your packaged source code. For more information about creating a .zip file, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
    */
    inline FunctionCode&  WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
