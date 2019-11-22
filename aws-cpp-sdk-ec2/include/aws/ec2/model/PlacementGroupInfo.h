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
#include <aws/ec2/model/PlacementGroupStrategy.h>
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
   * <p>Describes the placement group support of the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PlacementGroupInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API PlacementGroupInfo
  {
  public:
    PlacementGroupInfo();
    PlacementGroupInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    PlacementGroupInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline const Aws::Vector<PlacementGroupStrategy>& GetSupportedStrategies() const{ return m_supportedStrategies; }

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline bool SupportedStrategiesHasBeenSet() const { return m_supportedStrategiesHasBeenSet; }

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline void SetSupportedStrategies(const Aws::Vector<PlacementGroupStrategy>& value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies = value; }

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline void SetSupportedStrategies(Aws::Vector<PlacementGroupStrategy>&& value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies = std::move(value); }

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline PlacementGroupInfo& WithSupportedStrategies(const Aws::Vector<PlacementGroupStrategy>& value) { SetSupportedStrategies(value); return *this;}

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline PlacementGroupInfo& WithSupportedStrategies(Aws::Vector<PlacementGroupStrategy>&& value) { SetSupportedStrategies(std::move(value)); return *this;}

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline PlacementGroupInfo& AddSupportedStrategies(const PlacementGroupStrategy& value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies.push_back(value); return *this; }

    /**
     * <p>A list of supported placement groups types.</p>
     */
    inline PlacementGroupInfo& AddSupportedStrategies(PlacementGroupStrategy&& value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PlacementGroupStrategy> m_supportedStrategies;
    bool m_supportedStrategiesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
