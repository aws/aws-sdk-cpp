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
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The repository credentials for private registry authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RepositoryCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API RepositoryCredentials
  {
  public:
    RepositoryCredentials();
    RepositoryCredentials(Aws::Utils::Json::JsonView jsonValue);
    RepositoryCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline const Aws::String& GetCredentialsParameter() const{ return m_credentialsParameter; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline void SetCredentialsParameter(const Aws::String& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline void SetCredentialsParameter(Aws::String&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline void SetCredentialsParameter(const char* value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline RepositoryCredentials& WithCredentialsParameter(const Aws::String& value) { SetCredentialsParameter(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline RepositoryCredentials& WithCredentialsParameter(Aws::String&& value) { SetCredentialsParameter(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p> <note> <p>When you are using the Amazon ECS API, AWS
     * CLI, or AWS SDK, if the secret exists in the same Region as the task that you
     * are launching then you can use either the full ARN or the name of the secret.
     * When you are using the AWS Management Console, you must specify the full ARN of
     * the secret.</p> </note>
     */
    inline RepositoryCredentials& WithCredentialsParameter(const char* value) { SetCredentialsParameter(value); return *this;}

  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
