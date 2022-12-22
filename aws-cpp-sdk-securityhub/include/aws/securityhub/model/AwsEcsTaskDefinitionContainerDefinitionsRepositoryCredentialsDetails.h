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
   * <p>The private repository authentication credentials to use.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline const Aws::String& GetCredentialsParameter() const{ return m_credentialsParameter; }

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline void SetCredentialsParameter(const Aws::String& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = value; }

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline void SetCredentialsParameter(Aws::String&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::move(value); }

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline void SetCredentialsParameter(const char* value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter.assign(value); }

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& WithCredentialsParameter(const Aws::String& value) { SetCredentialsParameter(value); return *this;}

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& WithCredentialsParameter(Aws::String&& value) { SetCredentialsParameter(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that contains the private repository credentials.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& WithCredentialsParameter(const char* value) { SetCredentialsParameter(value); return *this;}

  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
