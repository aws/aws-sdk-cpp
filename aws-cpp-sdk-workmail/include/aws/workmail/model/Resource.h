﻿/*
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
#include <aws/workmail/model/ResourceType.h>
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
   * <p>The overview for a resource containing relevant data regarding
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_WORKMAIL_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The email of the resource.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the resource.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email of the resource.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email of the resource.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email of the resource.</p>
     */
    inline Resource& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the resource.</p>
     */
    inline Resource& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the resource.</p>
     */
    inline Resource& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline Resource& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline Resource& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline Resource& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline Resource& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the resource was enabled for Amazon WorkMail
     * use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date indicating when the resource was enabled for Amazon WorkMail
     * use.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }

    /**
     * <p>The date indicating when the resource was enabled for Amazon WorkMail
     * use.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }

    /**
     * <p>The date indicating when the resource was enabled for Amazon WorkMail
     * use.</p>
     */
    inline Resource& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date indicating when the resource was enabled for Amazon WorkMail
     * use.</p>
     */
    inline Resource& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the resource was disabled from Amazon WorkMail
     * use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date indicating when the resource was disabled from Amazon WorkMail
     * use.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }

    /**
     * <p>The date indicating when the resource was disabled from Amazon WorkMail
     * use.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }

    /**
     * <p>The date indicating when the resource was disabled from Amazon WorkMail
     * use.</p>
     */
    inline Resource& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date indicating when the resource was disabled from Amazon WorkMail
     * use.</p>
     */
    inline Resource& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ResourceType m_type;
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
