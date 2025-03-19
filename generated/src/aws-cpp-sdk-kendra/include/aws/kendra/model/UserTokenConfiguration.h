/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/JwtTokenTypeConfiguration.h>
#include <aws/kendra/model/JsonTokenTypeConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for a token.</p>  <p>If
   * you're using an Amazon Kendra Gen AI Enterprise Edition index and you try to use
   * <code>UserTokenConfigurations</code> to configure user context policy, Amazon
   * Kendra returns a <code>ValidationException</code> error.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class UserTokenConfiguration
  {
  public:
    AWS_KENDRA_API UserTokenConfiguration() = default;
    AWS_KENDRA_API UserTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline const JwtTokenTypeConfiguration& GetJwtTokenTypeConfiguration() const { return m_jwtTokenTypeConfiguration; }
    inline bool JwtTokenTypeConfigurationHasBeenSet() const { return m_jwtTokenTypeConfigurationHasBeenSet; }
    template<typename JwtTokenTypeConfigurationT = JwtTokenTypeConfiguration>
    void SetJwtTokenTypeConfiguration(JwtTokenTypeConfigurationT&& value) { m_jwtTokenTypeConfigurationHasBeenSet = true; m_jwtTokenTypeConfiguration = std::forward<JwtTokenTypeConfigurationT>(value); }
    template<typename JwtTokenTypeConfigurationT = JwtTokenTypeConfiguration>
    UserTokenConfiguration& WithJwtTokenTypeConfiguration(JwtTokenTypeConfigurationT&& value) { SetJwtTokenTypeConfiguration(std::forward<JwtTokenTypeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline const JsonTokenTypeConfiguration& GetJsonTokenTypeConfiguration() const { return m_jsonTokenTypeConfiguration; }
    inline bool JsonTokenTypeConfigurationHasBeenSet() const { return m_jsonTokenTypeConfigurationHasBeenSet; }
    template<typename JsonTokenTypeConfigurationT = JsonTokenTypeConfiguration>
    void SetJsonTokenTypeConfiguration(JsonTokenTypeConfigurationT&& value) { m_jsonTokenTypeConfigurationHasBeenSet = true; m_jsonTokenTypeConfiguration = std::forward<JsonTokenTypeConfigurationT>(value); }
    template<typename JsonTokenTypeConfigurationT = JsonTokenTypeConfiguration>
    UserTokenConfiguration& WithJsonTokenTypeConfiguration(JsonTokenTypeConfigurationT&& value) { SetJsonTokenTypeConfiguration(std::forward<JsonTokenTypeConfigurationT>(value)); return *this;}
    ///@}
  private:

    JwtTokenTypeConfiguration m_jwtTokenTypeConfiguration;
    bool m_jwtTokenTypeConfigurationHasBeenSet = false;

    JsonTokenTypeConfiguration m_jsonTokenTypeConfiguration;
    bool m_jsonTokenTypeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
