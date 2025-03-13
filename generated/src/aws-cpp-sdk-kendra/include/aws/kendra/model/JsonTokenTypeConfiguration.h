/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for the JSON token type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/JsonTokenTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class JsonTokenTypeConfiguration
  {
  public:
    AWS_KENDRA_API JsonTokenTypeConfiguration() = default;
    AWS_KENDRA_API JsonTokenTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JsonTokenTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name attribute field.</p>
     */
    inline const Aws::String& GetUserNameAttributeField() const { return m_userNameAttributeField; }
    inline bool UserNameAttributeFieldHasBeenSet() const { return m_userNameAttributeFieldHasBeenSet; }
    template<typename UserNameAttributeFieldT = Aws::String>
    void SetUserNameAttributeField(UserNameAttributeFieldT&& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = std::forward<UserNameAttributeFieldT>(value); }
    template<typename UserNameAttributeFieldT = Aws::String>
    JsonTokenTypeConfiguration& WithUserNameAttributeField(UserNameAttributeFieldT&& value) { SetUserNameAttributeField(std::forward<UserNameAttributeFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute field.</p>
     */
    inline const Aws::String& GetGroupAttributeField() const { return m_groupAttributeField; }
    inline bool GroupAttributeFieldHasBeenSet() const { return m_groupAttributeFieldHasBeenSet; }
    template<typename GroupAttributeFieldT = Aws::String>
    void SetGroupAttributeField(GroupAttributeFieldT&& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = std::forward<GroupAttributeFieldT>(value); }
    template<typename GroupAttributeFieldT = Aws::String>
    JsonTokenTypeConfiguration& WithGroupAttributeField(GroupAttributeFieldT&& value) { SetGroupAttributeField(std::forward<GroupAttributeFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userNameAttributeField;
    bool m_userNameAttributeFieldHasBeenSet = false;

    Aws::String m_groupAttributeField;
    bool m_groupAttributeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
