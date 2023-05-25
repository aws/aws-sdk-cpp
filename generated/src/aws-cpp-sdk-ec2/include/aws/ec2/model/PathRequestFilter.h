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
    AWS_EC2_API PathRequestFilter();
    AWS_EC2_API PathRequestFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathRequestFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The source IPv4 address.</p>
     */
    inline const Aws::String& GetSourceAddress() const{ return m_sourceAddress; }

    /**
     * <p>The source IPv4 address.</p>
     */
    inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }

    /**
     * <p>The source IPv4 address.</p>
     */
    inline void SetSourceAddress(const Aws::String& value) { m_sourceAddressHasBeenSet = true; m_sourceAddress = value; }

    /**
     * <p>The source IPv4 address.</p>
     */
    inline void SetSourceAddress(Aws::String&& value) { m_sourceAddressHasBeenSet = true; m_sourceAddress = std::move(value); }

    /**
     * <p>The source IPv4 address.</p>
     */
    inline void SetSourceAddress(const char* value) { m_sourceAddressHasBeenSet = true; m_sourceAddress.assign(value); }

    /**
     * <p>The source IPv4 address.</p>
     */
    inline PathRequestFilter& WithSourceAddress(const Aws::String& value) { SetSourceAddress(value); return *this;}

    /**
     * <p>The source IPv4 address.</p>
     */
    inline PathRequestFilter& WithSourceAddress(Aws::String&& value) { SetSourceAddress(std::move(value)); return *this;}

    /**
     * <p>The source IPv4 address.</p>
     */
    inline PathRequestFilter& WithSourceAddress(const char* value) { SetSourceAddress(value); return *this;}


    /**
     * <p>The source port range.</p>
     */
    inline const RequestFilterPortRange& GetSourcePortRange() const{ return m_sourcePortRange; }

    /**
     * <p>The source port range.</p>
     */
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }

    /**
     * <p>The source port range.</p>
     */
    inline void SetSourcePortRange(const RequestFilterPortRange& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }

    /**
     * <p>The source port range.</p>
     */
    inline void SetSourcePortRange(RequestFilterPortRange&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }

    /**
     * <p>The source port range.</p>
     */
    inline PathRequestFilter& WithSourcePortRange(const RequestFilterPortRange& value) { SetSourcePortRange(value); return *this;}

    /**
     * <p>The source port range.</p>
     */
    inline PathRequestFilter& WithSourcePortRange(RequestFilterPortRange&& value) { SetSourcePortRange(std::move(value)); return *this;}


    /**
     * <p>The destination IPv4 address.</p>
     */
    inline const Aws::String& GetDestinationAddress() const{ return m_destinationAddress; }

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline void SetDestinationAddress(const Aws::String& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = value; }

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline void SetDestinationAddress(Aws::String&& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = std::move(value); }

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline void SetDestinationAddress(const char* value) { m_destinationAddressHasBeenSet = true; m_destinationAddress.assign(value); }

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline PathRequestFilter& WithDestinationAddress(const Aws::String& value) { SetDestinationAddress(value); return *this;}

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline PathRequestFilter& WithDestinationAddress(Aws::String&& value) { SetDestinationAddress(std::move(value)); return *this;}

    /**
     * <p>The destination IPv4 address.</p>
     */
    inline PathRequestFilter& WithDestinationAddress(const char* value) { SetDestinationAddress(value); return *this;}


    /**
     * <p>The destination port range.</p>
     */
    inline const RequestFilterPortRange& GetDestinationPortRange() const{ return m_destinationPortRange; }

    /**
     * <p>The destination port range.</p>
     */
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }

    /**
     * <p>The destination port range.</p>
     */
    inline void SetDestinationPortRange(const RequestFilterPortRange& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }

    /**
     * <p>The destination port range.</p>
     */
    inline void SetDestinationPortRange(RequestFilterPortRange&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }

    /**
     * <p>The destination port range.</p>
     */
    inline PathRequestFilter& WithDestinationPortRange(const RequestFilterPortRange& value) { SetDestinationPortRange(value); return *this;}

    /**
     * <p>The destination port range.</p>
     */
    inline PathRequestFilter& WithDestinationPortRange(RequestFilterPortRange&& value) { SetDestinationPortRange(std::move(value)); return *this;}

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
