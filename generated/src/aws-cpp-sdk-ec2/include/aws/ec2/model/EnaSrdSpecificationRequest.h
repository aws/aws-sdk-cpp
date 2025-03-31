/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EnaSrdUdpSpecificationRequest.h>
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
   * <p>Launch instances with ENA Express settings configured from your launch
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnaSrdSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class EnaSrdSpecificationRequest
  {
  public:
    AWS_EC2_API EnaSrdSpecificationRequest() = default;
    AWS_EC2_API EnaSrdSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EnaSrdSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies whether ENA Express is enabled for the network interface when you
     * launch an instance.</p>
     */
    inline bool GetEnaSrdEnabled() const { return m_enaSrdEnabled; }
    inline bool EnaSrdEnabledHasBeenSet() const { return m_enaSrdEnabledHasBeenSet; }
    inline void SetEnaSrdEnabled(bool value) { m_enaSrdEnabledHasBeenSet = true; m_enaSrdEnabled = value; }
    inline EnaSrdSpecificationRequest& WithEnaSrdEnabled(bool value) { SetEnaSrdEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains ENA Express settings for UDP network traffic for the network
     * interface attached to the instance.</p>
     */
    inline const EnaSrdUdpSpecificationRequest& GetEnaSrdUdpSpecification() const { return m_enaSrdUdpSpecification; }
    inline bool EnaSrdUdpSpecificationHasBeenSet() const { return m_enaSrdUdpSpecificationHasBeenSet; }
    template<typename EnaSrdUdpSpecificationT = EnaSrdUdpSpecificationRequest>
    void SetEnaSrdUdpSpecification(EnaSrdUdpSpecificationT&& value) { m_enaSrdUdpSpecificationHasBeenSet = true; m_enaSrdUdpSpecification = std::forward<EnaSrdUdpSpecificationT>(value); }
    template<typename EnaSrdUdpSpecificationT = EnaSrdUdpSpecificationRequest>
    EnaSrdSpecificationRequest& WithEnaSrdUdpSpecification(EnaSrdUdpSpecificationT&& value) { SetEnaSrdUdpSpecification(std::forward<EnaSrdUdpSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_enaSrdEnabled{false};
    bool m_enaSrdEnabledHasBeenSet = false;

    EnaSrdUdpSpecificationRequest m_enaSrdUdpSpecification;
    bool m_enaSrdUdpSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
