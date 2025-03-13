/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/SecretsManagerConfiguration.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p> The structure to configure the authentication methods for Firehose to
   * connect to source database endpoint. </p> <p>Amazon Data Firehose is in preview
   * release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSourceAuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class DatabaseSourceAuthenticationConfiguration
  {
  public:
    AWS_FIREHOSE_API DatabaseSourceAuthenticationConfiguration() = default;
    AWS_FIREHOSE_API DatabaseSourceAuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSourceAuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    DatabaseSourceAuthenticationConfiguration& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}
  private:

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
