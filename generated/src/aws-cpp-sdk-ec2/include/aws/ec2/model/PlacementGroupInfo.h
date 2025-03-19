/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PlacementGroupInfo
  {
  public:
    AWS_EC2_API PlacementGroupInfo() = default;
    AWS_EC2_API PlacementGroupInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PlacementGroupInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The supported placement group types.</p>
     */
    inline const Aws::Vector<PlacementGroupStrategy>& GetSupportedStrategies() const { return m_supportedStrategies; }
    inline bool SupportedStrategiesHasBeenSet() const { return m_supportedStrategiesHasBeenSet; }
    template<typename SupportedStrategiesT = Aws::Vector<PlacementGroupStrategy>>
    void SetSupportedStrategies(SupportedStrategiesT&& value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies = std::forward<SupportedStrategiesT>(value); }
    template<typename SupportedStrategiesT = Aws::Vector<PlacementGroupStrategy>>
    PlacementGroupInfo& WithSupportedStrategies(SupportedStrategiesT&& value) { SetSupportedStrategies(std::forward<SupportedStrategiesT>(value)); return *this;}
    inline PlacementGroupInfo& AddSupportedStrategies(PlacementGroupStrategy value) { m_supportedStrategiesHasBeenSet = true; m_supportedStrategies.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<PlacementGroupStrategy> m_supportedStrategies;
    bool m_supportedStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
