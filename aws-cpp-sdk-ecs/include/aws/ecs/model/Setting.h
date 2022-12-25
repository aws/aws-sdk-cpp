/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/SettingName.h>
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
   * <p>The current account setting for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Setting">AWS API
   * Reference</a></p>
   */
  class Setting
  {
  public:
    AWS_ECS_API Setting();
    AWS_ECS_API Setting(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline Setting& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline Setting& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline Setting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline Setting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Determines whether the account setting is enabled or disabled for the
     * specified resource.</p>
     */
    inline Setting& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal. It can be an IAM user, IAM role, or the root user.
     * If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}

  private:

    SettingName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
