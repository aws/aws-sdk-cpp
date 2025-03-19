/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RepositoryCredentials
  {
  public:
    AWS_ECS_API RepositoryCredentials() = default;
    AWS_ECS_API RepositoryCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API RepositoryCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>  <p>When you use the Amazon ECS API, CLI, or
     * Amazon Web Services SDK, if the secret exists in the same Region as the task
     * that you're launching then you can use either the full ARN or the name of the
     * secret. When you use the Amazon Web Services Management Console, you must
     * specify the full ARN of the secret.</p> 
     */
    inline const Aws::String& GetCredentialsParameter() const { return m_credentialsParameter; }
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }
    template<typename CredentialsParameterT = Aws::String>
    void SetCredentialsParameter(CredentialsParameterT&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::forward<CredentialsParameterT>(value); }
    template<typename CredentialsParameterT = Aws::String>
    RepositoryCredentials& WithCredentialsParameter(CredentialsParameterT&& value) { SetCredentialsParameter(std::forward<CredentialsParameterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
