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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ModifyClusterParameterGroupRequest : public RedshiftRequest
  {
  public:
    ModifyClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline ModifyClusterParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline ModifyClusterParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group to be modified.</p>
     */
    inline ModifyClusterParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline ModifyClusterParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline ModifyClusterParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline ModifyClusterParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>An array of parameters to be modified. A maximum of 20 parameters can be
     * modified in a single request.</p> <p>For each parameter to be modified, you must
     * supply at least the parameter name and parameter value; other name-value pairs
     * of the parameter are optional.</p> <p>For the workload management (WLM)
     * configuration, you must supply all the name-value pairs in the
     * wlm_json_configuration parameter.</p>
     */
    inline ModifyClusterParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
