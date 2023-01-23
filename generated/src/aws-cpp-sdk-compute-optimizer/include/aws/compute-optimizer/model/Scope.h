/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ScopeName.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the scope of a recommendation preference.</p> <p>Recommendation
   * preferences can be created at the organization level (for management accounts of
   * an organization only), account level, and resource level. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
   * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
   * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
   * Scaling groups at the organization and account levels. You can create
   * recommendation preferences for Auto Scaling groups only at the resource level by
   * specifying a scope name of <code>ResourceArn</code> and a scope value of the
   * Auto Scaling group Amazon Resource Name (ARN). This will configure the
   * preference for all instances that are part of the specified Auto Scaling group.
   * You also cannot create recommendation preferences at the resource level for
   * instances that are part of an Auto Scaling group. You can create recommendation
   * preferences at the resource level only for standalone instances.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Scope">AWS
   * API Reference</a></p>
   */
  class Scope
  {
  public:
    AWS_COMPUTEOPTIMIZER_API Scope();
    AWS_COMPUTEOPTIMIZER_API Scope(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline const ScopeName& GetName() const{ return m_name; }

    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline void SetName(const ScopeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline void SetName(ScopeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline Scope& WithName(const ScopeName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scope.</p> <p>The following scopes are possible:</p> <ul>
     * <li> <p> <code>Organization</code> - Specifies that the recommendation
     * preference applies at the organization level, for all member accounts of an
     * organization.</p> </li> <li> <p> <code>AccountId</code> - Specifies that the
     * recommendation preference applies at the account level, for all resources of a
     * given resource type in an account.</p> </li> <li> <p> <code>ResourceArn</code> -
     * Specifies that the recommendation preference applies at the individual resource
     * level.</p> </li> </ul>
     */
    inline Scope& WithName(ScopeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline Scope& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline Scope& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the scope.</p> <p>If you specified the <code>name</code> of the
     * scope as:</p> <ul> <li> <p> <code>Organization</code> - The <code>value</code>
     * must be <code>ALL_ACCOUNTS</code>.</p> </li> <li> <p> <code>AccountId</code> -
     * The <code>value</code> must be a 12-digit Amazon Web Services account ID.</p>
     * </li> <li> <p> <code>ResourceArn</code> - The <code>value</code> must be the
     * Amazon Resource Name (ARN) of an EC2 instance or an Auto Scaling group.</p>
     * </li> </ul> <p>Only EC2 instance and Auto Scaling group ARNs are currently
     * supported.</p>
     */
    inline Scope& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ScopeName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
