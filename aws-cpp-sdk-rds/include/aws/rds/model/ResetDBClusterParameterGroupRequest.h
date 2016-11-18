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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Parameter.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API ResetDBClusterParameterGroupRequest : public RDSRequest
  {
  public:
    ResetDBClusterParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to reset.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>A value that is set to <code>true</code> to reset all parameters in the DB
     * cluster parameter group to their default values, and <code>false</code>
     * otherwise. You cannot use this parameter if there is a list of parameter names
     * specified for the <code>Parameters</code> parameter.</p>
     */
    inline bool GetResetAllParameters() const{ return m_resetAllParameters; }

    /**
     * <p>A value that is set to <code>true</code> to reset all parameters in the DB
     * cluster parameter group to their default values, and <code>false</code>
     * otherwise. You cannot use this parameter if there is a list of parameter names
     * specified for the <code>Parameters</code> parameter.</p>
     */
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }

    /**
     * <p>A value that is set to <code>true</code> to reset all parameters in the DB
     * cluster parameter group to their default values, and <code>false</code>
     * otherwise. You cannot use this parameter if there is a list of parameter names
     * specified for the <code>Parameters</code> parameter.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline ResetDBClusterParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline ResetDBClusterParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of parameter names in the DB cluster parameter group to reset to the
     * default values. You cannot use this parameter if the
     * <code>ResetAllParameters</code> parameter is set to <code>true</code>.</p>
     */
    inline ResetDBClusterParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

  private:
    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;
    bool m_resetAllParameters;
    bool m_resetAllParametersHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
