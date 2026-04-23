/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of a user or group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Member">AWS API
   * Reference</a></p>
   */
  class AWS_WORKMAIL_API Member
  {
  public:
    Member();
    Member(Aws::Utils::Json::JsonView jsonValue);
    Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the member.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the member.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the member.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the member.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the member.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the member.</p>
     */
    inline Member& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the member.</p>
     */
    inline Member& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the member.</p>
     */
    inline Member& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the member.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A member can be a user or group.</p>
     */
    inline const MemberType& GetType() const{ return m_type; }

    /**
     * <p>A member can be a user or group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A member can be a user or group.</p>
     */
    inline void SetType(const MemberType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A member can be a user or group.</p>
     */
    inline void SetType(MemberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A member can be a user or group.</p>
     */
    inline Member& WithType(const MemberType& value) { SetType(value); return *this;}

    /**
     * <p>A member can be a user or group.</p>
     */
    inline Member& WithType(MemberType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline Member& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline Member& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }

    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }

    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }

    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline Member& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date indicating when the member was enabled for Amazon WorkMail use.</p>
     */
    inline Member& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }

    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }

    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }

    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline Member& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date indicating when the member was disabled from Amazon WorkMail
     * use.</p>
     */
    inline Member& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    MemberType m_type;
    bool m_typeHasBeenSet;

    EntityState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_enabledDate;
    bool m_enabledDateHasBeenSet;

    Aws::Utils::DateTime m_disabledDate;
    bool m_disabledDateHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
