/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Defines the rotation schedule for the secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSecretsManagerSecretRotationRules">AWS
   * API Reference</a></p>
   */
  class AwsSecretsManagerSecretRotationRules
  {
  public:
    AWS_SECURITYHUB_API AwsSecretsManagerSecretRotationRules();
    AWS_SECURITYHUB_API AwsSecretsManagerSecretRotationRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSecretsManagerSecretRotationRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of days after the previous rotation to rotate the secret.</p>
     */
    inline int GetAutomaticallyAfterDays() const{ return m_automaticallyAfterDays; }

    /**
     * <p>The number of days after the previous rotation to rotate the secret.</p>
     */
    inline bool AutomaticallyAfterDaysHasBeenSet() const { return m_automaticallyAfterDaysHasBeenSet; }

    /**
     * <p>The number of days after the previous rotation to rotate the secret.</p>
     */
    inline void SetAutomaticallyAfterDays(int value) { m_automaticallyAfterDaysHasBeenSet = true; m_automaticallyAfterDays = value; }

    /**
     * <p>The number of days after the previous rotation to rotate the secret.</p>
     */
    inline AwsSecretsManagerSecretRotationRules& WithAutomaticallyAfterDays(int value) { SetAutomaticallyAfterDays(value); return *this;}

  private:

    int m_automaticallyAfterDays;
    bool m_automaticallyAfterDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
