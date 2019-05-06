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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API ResetDBParameterGroupRequest : public NeptuneRequest
  {
  public:
    ResetDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetDBParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ResetDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ResetDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DBParameterGroup.</p> </li> </ul>
     */
    inline ResetDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) to reset
     * all parameters in the DB parameter group to default values.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetResetAllParameters() const{ return m_resetAllParameters; }

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) to reset
     * all parameters in the DB parameter group to default values.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline bool ResetAllParametersHasBeenSet() const { return m_resetAllParametersHasBeenSet; }

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) to reset
     * all parameters in the DB parameter group to default values.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) to reset
     * all parameters in the DB parameter group to default values.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline ResetDBParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}


    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline ResetDBParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline ResetDBParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline ResetDBParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p>Valid Values (for Apply
     * method): <code>pending-reboot</code> </p>
     */
    inline ResetDBParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    bool m_resetAllParameters;
    bool m_resetAllParametersHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
