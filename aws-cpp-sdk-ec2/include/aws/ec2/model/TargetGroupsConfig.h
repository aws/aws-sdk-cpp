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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TargetGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the target groups to attach to a Spot Fleet. Spot Fleet registers
   * the running Spot Instances with these target groups.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetGroupsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TargetGroupsConfig
  {
  public:
    TargetGroupsConfig();
    TargetGroupsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetGroupsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more target groups.</p>
     */
    inline const Aws::Vector<TargetGroup>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>One or more target groups.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroup>& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = value; }

    /**
     * <p>One or more target groups.</p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroup>&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::move(value); }

    /**
     * <p>One or more target groups.</p>
     */
    inline TargetGroupsConfig& WithTargetGroups(const Aws::Vector<TargetGroup>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>One or more target groups.</p>
     */
    inline TargetGroupsConfig& WithTargetGroups(Aws::Vector<TargetGroup>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p>One or more target groups.</p>
     */
    inline TargetGroupsConfig& AddTargetGroups(const TargetGroup& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(value); return *this; }

    /**
     * <p>One or more target groups.</p>
     */
    inline TargetGroupsConfig& AddTargetGroups(TargetGroup&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TargetGroup> m_targetGroups;
    bool m_targetGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
