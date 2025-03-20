/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>Five types of control parameters are supported.</p> <ul> <li> <p>
   * <b>AllowedRegions</b>: List of Amazon Web Services Regions exempted from the
   * control. Each string is expected to be an Amazon Web Services Region code. This
   * parameter is mandatory for the <b>OU Region deny</b> control,
   * <b>CT.MULTISERVICE.PV.1</b>.</p> <p>Example:
   * <code>["us-east-1","us-west-2"]</code> </p> </li> <li> <p>
   * <b>ExemptedActions</b>: List of Amazon Web Services IAM actions exempted from
   * the control. Each string is expected to be an IAM action.</p> <p>Example:
   * <code>["logs:DescribeLogGroups","logs:StartQuery","logs:GetQueryResults"]</code>
   * </p> </li> <li> <p> <b>ExemptedPrincipalArns</b>: List of Amazon Web Services
   * IAM principal ARNs exempted from the control. Each string is expected to be an
   * IAM principal that follows the pattern
   * <code>^arn:(aws|aws-us-gov):(iam|sts)::.+:.+$</code> </p> <p>Example:
   * <code>["arn:aws:iam::*:role/ReadOnly","arn:aws:sts::*:assumed-role/ReadOnly/ *"]</code>
   * </p> </li> <li> <p> <b>ExemptedResourceArns</b>: List of resource ARNs exempted
   * from the control. Each string is expected to be a resource ARN.</p> <p>Example:
   * <code>["arn:aws:s3:::my-bucket-name"]</code> </p> </li> <li> <p>
   * <b>ExemptAssumeRoot</b>: A parameter that lets you choose whether to exempt
   * requests made with <code>AssumeRoot</code> from this control, for this OU. For
   * member accounts, the <code>AssumeRoot</code> property is included in requests
   * initiated by IAM centralized root access. This parameter applies only to the
   * <code>AWS-GR_RESTRICT_ROOT_USER</code> control. If you add the parameter when
   * enabling the control, the <code>AssumeRoot</code> exemption is allowed. If you
   * omit the parameter, the <code>AssumeRoot</code> exception is not permitted. The
   * parameter does not accept <code>False</code> as a value.</p> <p> <i>Example:
   * Enabling the control and allowing <code>AssumeRoot</code> </i> </p> <p> <code>{
   * "controlIdentifier":
   * "arn:aws:controlcatalog:::control/5kvme4m5d2b4d7if2fs5yg2ui", "parameters": [ {
   * "key": "ExemptAssumeRoot", "value": true } ], "targetIdentifier":
   * "arn:aws:organizations::8633900XXXXX:ou/o-6jmn81636m/ou-qsah-jtiihcla" }</code>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ControlParameter">AWS
   * API Reference</a></p>
   */
  class ControlParameter
  {
  public:
    AWS_CONTROLCATALOG_API ControlParameter() = default;
    AWS_CONTROLCATALOG_API ControlParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ControlParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter name. This name is the parameter <code>key</code> when you call
     * <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/API_EnableControl.html">
     * <code>EnableControl</code> </a> or <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/API_UpdateEnabledControl.html">
     * <code>UpdateEnabledControl</code> </a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ControlParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
