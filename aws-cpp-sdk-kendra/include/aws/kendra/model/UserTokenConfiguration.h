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
   * <p>Provides the configuration information for a token.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class UserTokenConfiguration
  {
  public:
    AWS_KENDRA_API UserTokenConfiguration();
    AWS_KENDRA_API UserTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline const JwtTokenTypeConfiguration& GetJwtTokenTypeConfiguration() const{ return m_jwtTokenTypeConfiguration; }

    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline bool JwtTokenTypeConfigurationHasBeenSet() const { return m_jwtTokenTypeConfigurationHasBeenSet; }

    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline void SetJwtTokenTypeConfiguration(const JwtTokenTypeConfiguration& value) { m_jwtTokenTypeConfigurationHasBeenSet = true; m_jwtTokenTypeConfiguration = value; }

    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline void SetJwtTokenTypeConfiguration(JwtTokenTypeConfiguration&& value) { m_jwtTokenTypeConfigurationHasBeenSet = true; m_jwtTokenTypeConfiguration = std::move(value); }

    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline UserTokenConfiguration& WithJwtTokenTypeConfiguration(const JwtTokenTypeConfiguration& value) { SetJwtTokenTypeConfiguration(value); return *this;}

    /**
     * <p>Information about the JWT token type configuration.</p>
     */
    inline UserTokenConfiguration& WithJwtTokenTypeConfiguration(JwtTokenTypeConfiguration&& value) { SetJwtTokenTypeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline const JsonTokenTypeConfiguration& GetJsonTokenTypeConfiguration() const{ return m_jsonTokenTypeConfiguration; }

    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline bool JsonTokenTypeConfigurationHasBeenSet() const { return m_jsonTokenTypeConfigurationHasBeenSet; }

    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline void SetJsonTokenTypeConfiguration(const JsonTokenTypeConfiguration& value) { m_jsonTokenTypeConfigurationHasBeenSet = true; m_jsonTokenTypeConfiguration = value; }

    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline void SetJsonTokenTypeConfiguration(JsonTokenTypeConfiguration&& value) { m_jsonTokenTypeConfigurationHasBeenSet = true; m_jsonTokenTypeConfiguration = std::move(value); }

    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline UserTokenConfiguration& WithJsonTokenTypeConfiguration(const JsonTokenTypeConfiguration& value) { SetJsonTokenTypeConfiguration(value); return *this;}

    /**
     * <p>Information about the JSON token type configuration.</p>
     */
    inline UserTokenConfiguration& WithJsonTokenTypeConfiguration(JsonTokenTypeConfiguration&& value) { SetJsonTokenTypeConfiguration(std::move(value)); return *this;}

  private:

    JwtTokenTypeConfiguration m_jwtTokenTypeConfiguration;
    bool m_jwtTokenTypeConfigurationHasBeenSet = false;

    JsonTokenTypeConfiguration m_jsonTokenTypeConfiguration;
    bool m_jsonTokenTypeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
