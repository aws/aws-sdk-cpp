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
  class AWS_ECS_API Setting
  {
  public:
    Setting();
    Setting(Aws::Utils::Json::JsonView jsonValue);
    Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account resource name.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The account resource name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The account resource name.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The account resource name.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The account resource name.</p>
     */
    inline Setting& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The account resource name.</p>
     */
    inline Setting& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline Setting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline Setting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The current account setting for the resource name. If <code>enabled</code>,
     * the resource receives the new Amazon Resource Name (ARN) and resource identifier
     * (ID) format. If <code>disabled</code>, the resource receives the old Amazon
     * Resource Name (ARN) and resource identifier (ID) format.</p>
     */
    inline Setting& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the authenticated user is assumed.</p>
     */
    inline Setting& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}

  private:

    SettingName m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
