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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ModifyDBParameterGroupRequest : public RDSRequest
  {
  public:
    ModifyDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline ModifyDBParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline ModifyDBParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline ModifyDBParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>An array of parameter names, values, and the apply method for the parameter
     * update. At least one parameter name, value, and apply method must be supplied;
     * subsequent arguments are optional. A maximum of 20 parameters can be modified in
     * a single request.</p> <p>Valid Values (for the application method):
     * <code>immediate | pending-reboot</code> </p> <note> <p>You can use the immediate
     * value with dynamic parameters only. You can use the pending-reboot value for
     * both dynamic and static parameters, and changes are applied when you reboot the
     * DB instance without failover.</p> </note>
     */
    inline ModifyDBParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
