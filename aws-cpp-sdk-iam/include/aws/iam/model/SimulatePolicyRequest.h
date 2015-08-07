/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/model/SimulationPolicySource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/SimulationScenario.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API SimulatePolicyRequest : public IAMRequest
  {
  public:
    SimulatePolicyRequest();
    Aws::String SerializePayload() const override;


    
    inline const SimulationPolicySource& GetSimulationPolicies() const{ return m_simulationPolicies; }
    
    inline void SetSimulationPolicies(const SimulationPolicySource& value) { m_simulationPoliciesHasBeenSet = true; m_simulationPolicies = value; }

    
    inline SimulatePolicyRequest&  WithSimulationPolicies(const SimulationPolicySource& value) { SetSimulationPolicies(value); return *this;}

    
    inline const Aws::Vector<SimulationScenario>& GetSimulationScenarios() const{ return m_simulationScenarios; }
    
    inline void SetSimulationScenarios(const Aws::Vector<SimulationScenario>& value) { m_simulationScenariosHasBeenSet = true; m_simulationScenarios = value; }

    
    inline SimulatePolicyRequest&  WithSimulationScenarios(const Aws::Vector<SimulationScenario>& value) { SetSimulationScenarios(value); return *this;}

    
    inline SimulatePolicyRequest& AddSimulationScenarios(const SimulationScenario& value) { m_simulationScenariosHasBeenSet = true; m_simulationScenarios.push_back(value); return *this; }

  private:
    SimulationPolicySource m_simulationPolicies;
    bool m_simulationPoliciesHasBeenSet;
    Aws::Vector<SimulationScenario> m_simulationScenarios;
    bool m_simulationScenariosHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
