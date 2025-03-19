/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/SettingType.h>
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
    AWS_ECS_API Setting() = default;
    AWS_ECS_API Setting(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline SettingName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SettingName value) { m_nameHasBeenSet = true; m_name = value; }
    inline Setting& WithName(SettingName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the account setting is on or off for the specified
     * resource.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Setting& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the principal. It can be a user, role, or the root user. If this
     * field is omitted, the authenticated user is assumed.</p>
     */
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    Setting& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon Web Services manages the account setting, or if the
     * user manages it.</p> <p> <code>aws_managed</code> account settings are
     * read-only, as Amazon Web Services manages such on the customer's behalf.
     * Currently, the <code>guardDutyActivate</code> account setting is the only one
     * Amazon Web Services manages.</p>
     */
    inline SettingType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SettingType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Setting& WithType(SettingType value) { SetType(value); return *this;}
    ///@}
  private:

    SettingName m_name{SettingName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    SettingType m_type{SettingType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
