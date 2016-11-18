﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePoolType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Rule.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a collection of device types.</p>
   */
  class AWS_DEVICEFARM_API DevicePool
  {
  public:
    DevicePool();
    DevicePool(const Aws::Utils::Json::JsonValue& jsonValue);
    DevicePool& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The device pool's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline DevicePool& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The device pool's ARN.</p>
     */
    inline DevicePool& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The device pool's ARN.</p>
     */
    inline DevicePool& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The device pool's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The device pool's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The device pool's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The device pool's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The device pool's name.</p>
     */
    inline DevicePool& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The device pool's name.</p>
     */
    inline DevicePool& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The device pool's name.</p>
     */
    inline DevicePool& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The device pool's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The device pool's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The device pool's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The device pool's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The device pool's description.</p>
     */
    inline DevicePool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The device pool's description.</p>
     */
    inline DevicePool& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The device pool's description.</p>
     */
    inline DevicePool& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline const DevicePoolType& GetType() const{ return m_type; }

    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline void SetType(const DevicePoolType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline void SetType(DevicePoolType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline DevicePool& WithType(const DevicePoolType& value) { SetType(value); return *this;}

    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline DevicePool& WithType(DevicePoolType&& value) { SetType(value); return *this;}

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline DevicePool& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline DevicePool& WithRules(Aws::Vector<Rule>&& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline DevicePool& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline DevicePool& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    DevicePoolType m_type;
    bool m_typeHasBeenSet;
    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
