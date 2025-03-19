/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RequestFilterPortRange.h>
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
   * <p>Describes a set of filters for a path analysis. Use path filters to scope the
   * analysis when there can be multiple resulting paths.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PathRequestFilter">AWS
   * API Reference</a></p>
   */
  class PathRequestFilter
  {
  public:
    AWS_EC2_API PathRequestFilter() = default;
    AWS_EC2_API PathRequestFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathRequestFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source IPv4 address.</p>
     */
    inline const Aws::String& GetSourceAddress() const { return m_sourceAddress; }
    inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }
    template<typename SourceAddressT = Aws::String>
    void SetSourceAddress(SourceAddressT&& value) { m_sourceAddressHasBeenSet = true; m_sourceAddress = std::forward<SourceAddressT>(value); }
    template<typename SourceAddressT = Aws::String>
    PathRequestFilter& WithSourceAddress(SourceAddressT&& value) { SetSourceAddress(std::forward<SourceAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port range.</p>
     */
    inline const RequestFilterPortRange& GetSourcePortRange() const { return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    template<typename SourcePortRangeT = RequestFilterPortRange>
    void SetSourcePortRange(SourcePortRangeT&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::forward<SourcePortRangeT>(value); }
    template<typename SourcePortRangeT = RequestFilterPortRange>
    PathRequestFilter& WithSourcePortRange(SourcePortRangeT&& value) { SetSourcePortRange(std::forward<SourcePortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IPv4 address.</p>
     */
    inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
    inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
    template<typename DestinationAddressT = Aws::String>
    void SetDestinationAddress(DestinationAddressT&& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = std::forward<DestinationAddressT>(value); }
    template<typename DestinationAddressT = Aws::String>
    PathRequestFilter& WithDestinationAddress(DestinationAddressT&& value) { SetDestinationAddress(std::forward<DestinationAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port range.</p>
     */
    inline const RequestFilterPortRange& GetDestinationPortRange() const { return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    template<typename DestinationPortRangeT = RequestFilterPortRange>
    void SetDestinationPortRange(DestinationPortRangeT&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::forward<DestinationPortRangeT>(value); }
    template<typename DestinationPortRangeT = RequestFilterPortRange>
    PathRequestFilter& WithDestinationPortRange(DestinationPortRangeT&& value) { SetDestinationPortRange(std::forward<DestinationPortRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceAddress;
    bool m_sourceAddressHasBeenSet = false;

    RequestFilterPortRange m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet = false;

    Aws::String m_destinationAddress;
    bool m_destinationAddressHasBeenSet = false;

    RequestFilterPortRange m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
