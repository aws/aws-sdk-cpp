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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ContextEntry.h>

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
  class AWS_IAM_API SimulationScenario
  {
  public:
    SimulationScenario();
    SimulationScenario(const Aws::Utils::Xml::XmlNode& xmlNode);
    SimulationScenario& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetScenarioId() const{ return m_scenarioId; }
    
    inline void SetScenarioId(const Aws::String& value) { m_scenarioIdHasBeenSet = true; m_scenarioId = value; }

    
    inline void SetScenarioId(const char* value) { m_scenarioIdHasBeenSet = true; m_scenarioId.assign(value); }

    
    inline SimulationScenario&  WithScenarioId(const Aws::String& value) { SetScenarioId(value); return *this;}

    
    inline SimulationScenario& WithScenarioId(const char* value) { SetScenarioId(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetActionNames() const{ return m_actionNames; }
    
    inline void SetActionNames(const Aws::Vector<Aws::String>& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    
    inline SimulationScenario&  WithActionNames(const Aws::Vector<Aws::String>& value) { SetActionNames(value); return *this;}

    
    inline SimulationScenario& AddActionNames(const Aws::String& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    
    inline SimulationScenario& AddActionNames(const char* value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetResourceNames() const{ return m_resourceNames; }
    
    inline void SetResourceNames(const Aws::Vector<Aws::String>& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = value; }

    
    inline SimulationScenario&  WithResourceNames(const Aws::Vector<Aws::String>& value) { SetResourceNames(value); return *this;}

    
    inline SimulationScenario& AddResourceNames(const Aws::String& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    
    inline SimulationScenario& AddResourceNames(const char* value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    
    inline const Aws::Vector<ContextEntry>& GetContextEntries() const{ return m_contextEntries; }
    
    inline void SetContextEntries(const Aws::Vector<ContextEntry>& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    
    inline SimulationScenario&  WithContextEntries(const Aws::Vector<ContextEntry>& value) { SetContextEntries(value); return *this;}

    
    inline SimulationScenario& AddContextEntries(const ContextEntry& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

  private:
    Aws::String m_scenarioId;
    bool m_scenarioIdHasBeenSet;
    Aws::Vector<Aws::String> m_actionNames;
    bool m_actionNamesHasBeenSet;
    Aws::Vector<Aws::String> m_resourceNames;
    bool m_resourceNamesHasBeenSet;
    Aws::Vector<ContextEntry> m_contextEntries;
    bool m_contextEntriesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
