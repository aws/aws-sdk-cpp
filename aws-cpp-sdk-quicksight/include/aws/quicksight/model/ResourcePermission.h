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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Permission for the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ResourcePermission">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API ResourcePermission
  {
  public:
    ResourcePermission();
    ResourcePermission(Aws::Utils::Json::JsonView jsonValue);
    ResourcePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline ResourcePermission& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline ResourcePermission& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon QuickSight user or group, or an
     * IAM ARN. If you are using cross-account resource sharing, this is the IAM ARN of
     * an account root. Otherwise, it is the ARN of a QuickSight user or group. .</p>
     */
    inline ResourcePermission& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline ResourcePermission& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline ResourcePermission& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline ResourcePermission& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline ResourcePermission& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>The action to grant or revoke permissions on, for example
     * <code>"quicksight:DescribeDashboard"</code>.</p>
     */
    inline ResourcePermission& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
