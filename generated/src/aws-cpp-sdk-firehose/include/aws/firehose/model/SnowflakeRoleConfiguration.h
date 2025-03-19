/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Optionally configure a Snowflake role. Otherwise the default user role will
   * be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeRoleConfiguration">AWS
   * API Reference</a></p>
   */
  class SnowflakeRoleConfiguration
  {
  public:
    AWS_FIREHOSE_API SnowflakeRoleConfiguration() = default;
    AWS_FIREHOSE_API SnowflakeRoleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeRoleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enable Snowflake role</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SnowflakeRoleConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Snowflake role you wish to configure</p>
     */
    inline const Aws::String& GetSnowflakeRole() const { return m_snowflakeRole; }
    inline bool SnowflakeRoleHasBeenSet() const { return m_snowflakeRoleHasBeenSet; }
    template<typename SnowflakeRoleT = Aws::String>
    void SetSnowflakeRole(SnowflakeRoleT&& value) { m_snowflakeRoleHasBeenSet = true; m_snowflakeRole = std::forward<SnowflakeRoleT>(value); }
    template<typename SnowflakeRoleT = Aws::String>
    SnowflakeRoleConfiguration& WithSnowflakeRole(SnowflakeRoleT&& value) { SetSnowflakeRole(std::forward<SnowflakeRoleT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_snowflakeRole;
    bool m_snowflakeRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
