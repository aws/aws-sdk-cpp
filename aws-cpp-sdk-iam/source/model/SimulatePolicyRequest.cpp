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
#include <aws/iam/model/SimulatePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

SimulatePolicyRequest::SimulatePolicyRequest() : 
    m_simulationPoliciesHasBeenSet(false),
    m_simulationScenariosHasBeenSet(false)
{
}

Aws::String SimulatePolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SimulatePolicy&";
  if(m_simulationPoliciesHasBeenSet)
  {
    m_simulationPolicies.OutputToStream(ss, "SimulationPolicies.");
  }
  if(m_simulationScenariosHasBeenSet)
  {
    unsigned simulationScenariosCount = 1;
    for(auto& item : m_simulationScenarios)
    {
      item.OutputToStream(ss, "SimulationScenarios.", simulationScenariosCount, "");
      simulationScenariosCount++;
    }
  }
  ss << "Version=2010-05-08";
  return ss.str();
}

