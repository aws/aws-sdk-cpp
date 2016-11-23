/*
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Parameter.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API ResetClusterParameterGroupRequest : public RedshiftRequest
  {
  public:
    ResetClusterParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline ResetClusterParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline ResetClusterParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group to be reset.</p>
     */
    inline ResetClusterParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>If <code>true</code>, all parameters in the specified parameter group will be
     * reset to their default values. </p> <p>Default: <code>true</code> </p>
     */
    inline bool GetResetAllParameters() const{ return m_resetAllParameters; }

    /**
     * <p>If <code>true</code>, all parameters in the specified parameter group will be
     * reset to their default values. </p> <p>Default: <code>true</code> </p>
     */
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }

    /**
     * <p>If <code>true</code>, all parameters in the specified parameter group will be
     * reset to their default values. </p> <p>Default: <code>true</code> </p>
     */
    inline ResetClusterParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline ResetClusterParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline ResetClusterParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline ResetClusterParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>An array of names of parameters to be reset. If <i>ResetAllParameters</i>
     * option is not used, then at least one parameter name must be supplied. </p>
     * <p>Constraints: A maximum of 20 parameters can be reset in a single request.</p>
     */
    inline ResetClusterParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

  private:
    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;
    bool m_resetAllParameters;
    bool m_resetAllParametersHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
