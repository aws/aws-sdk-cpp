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
    AWS_KENDRA_API JsonTokenTypeConfiguration();
    AWS_KENDRA_API JsonTokenTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JsonTokenTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name attribute field.</p>
     */
    inline const Aws::String& GetUserNameAttributeField() const{ return m_userNameAttributeField; }

    /**
     * <p>The user name attribute field.</p>
     */
    inline bool UserNameAttributeFieldHasBeenSet() const { return m_userNameAttributeFieldHasBeenSet; }

    /**
     * <p>The user name attribute field.</p>
     */
    inline void SetUserNameAttributeField(const Aws::String& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = value; }

    /**
     * <p>The user name attribute field.</p>
     */
    inline void SetUserNameAttributeField(Aws::String&& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = std::move(value); }

    /**
     * <p>The user name attribute field.</p>
     */
    inline void SetUserNameAttributeField(const char* value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField.assign(value); }

    /**
     * <p>The user name attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithUserNameAttributeField(const Aws::String& value) { SetUserNameAttributeField(value); return *this;}

    /**
     * <p>The user name attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithUserNameAttributeField(Aws::String&& value) { SetUserNameAttributeField(std::move(value)); return *this;}

    /**
     * <p>The user name attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithUserNameAttributeField(const char* value) { SetUserNameAttributeField(value); return *this;}


    /**
     * <p>The group attribute field.</p>
     */
    inline const Aws::String& GetGroupAttributeField() const{ return m_groupAttributeField; }

    /**
     * <p>The group attribute field.</p>
     */
    inline bool GroupAttributeFieldHasBeenSet() const { return m_groupAttributeFieldHasBeenSet; }

    /**
     * <p>The group attribute field.</p>
     */
    inline void SetGroupAttributeField(const Aws::String& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = value; }

    /**
     * <p>The group attribute field.</p>
     */
    inline void SetGroupAttributeField(Aws::String&& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = std::move(value); }

    /**
     * <p>The group attribute field.</p>
     */
    inline void SetGroupAttributeField(const char* value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField.assign(value); }

    /**
     * <p>The group attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithGroupAttributeField(const Aws::String& value) { SetGroupAttributeField(value); return *this;}

    /**
     * <p>The group attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithGroupAttributeField(Aws::String&& value) { SetGroupAttributeField(std::move(value)); return *this;}

    /**
     * <p>The group attribute field.</p>
     */
    inline JsonTokenTypeConfiguration& WithGroupAttributeField(const char* value) { SetGroupAttributeField(value); return *this;}

  private:

    Aws::String m_userNameAttributeField;
    bool m_userNameAttributeFieldHasBeenSet = false;

    Aws::String m_groupAttributeField;
    bool m_groupAttributeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
