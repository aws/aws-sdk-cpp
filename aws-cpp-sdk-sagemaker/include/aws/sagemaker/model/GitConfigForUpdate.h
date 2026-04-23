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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies configuration details for a Git repository when the repository is
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GitConfigForUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API GitConfigForUpdate
  {
  public:
    GitConfigForUpdate();
    GitConfigForUpdate(Aws::Utils::Json::JsonView jsonValue);
    GitConfigForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
