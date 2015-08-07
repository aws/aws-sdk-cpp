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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicyToSimulate.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_IAM_API SimulationPolicySource
  {
  public:
    SimulationPolicySource();
    SimulationPolicySource(const Aws::Utils::Xml::XmlNode& xmlNode);
    SimulationPolicySource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::Vector<PolicyToSimulate>& GetPolicyInputList() const{ return m_policyInputList; }
    
    inline void SetPolicyInputList(const Aws::Vector<PolicyToSimulate>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    
    inline SimulationPolicySource&  WithPolicyInputList(const Aws::Vector<PolicyToSimulate>& value) { SetPolicyInputList(value); return *this;}

    
    inline SimulationPolicySource& AddPolicyInputList(const PolicyToSimulate& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline const Aws::String& GetGetPolicyFor() const{ return m_getPolicyFor; }
    
    inline void SetGetPolicyFor(const Aws::String& value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor = value; }

    
    inline void SetGetPolicyFor(const char* value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor.assign(value); }

    
    inline SimulationPolicySource&  WithGetPolicyFor(const Aws::String& value) { SetGetPolicyFor(value); return *this;}

    
    inline SimulationPolicySource& WithGetPolicyFor(const char* value) { SetGetPolicyFor(value); return *this;}

  private:
    Aws::Vector<PolicyToSimulate> m_policyInputList;
    bool m_policyInputListHasBeenSet;
    Aws::String m_getPolicyFor;
    bool m_getPolicyForHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
