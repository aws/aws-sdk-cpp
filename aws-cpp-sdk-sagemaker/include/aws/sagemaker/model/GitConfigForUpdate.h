/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GitConfigForUpdate
  {
  public:
    AWS_SAGEMAKER_API GitConfigForUpdate();
    AWS_SAGEMAKER_API GitConfigForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API GitConfigForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfigForUpdate& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
