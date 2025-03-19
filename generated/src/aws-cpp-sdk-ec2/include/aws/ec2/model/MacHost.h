/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Information about the EC2 Mac Dedicated Host. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MacHost">AWS API
   * Reference</a></p>
   */
  class MacHost
  {
  public:
    AWS_EC2_API MacHost() = default;
    AWS_EC2_API MacHost(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MacHost& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    MacHost& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMacOSLatestSupportedVersions() const { return m_macOSLatestSupportedVersions; }
    inline bool MacOSLatestSupportedVersionsHasBeenSet() const { return m_macOSLatestSupportedVersionsHasBeenSet; }
    template<typename MacOSLatestSupportedVersionsT = Aws::Vector<Aws::String>>
    void SetMacOSLatestSupportedVersions(MacOSLatestSupportedVersionsT&& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions = std::forward<MacOSLatestSupportedVersionsT>(value); }
    template<typename MacOSLatestSupportedVersionsT = Aws::Vector<Aws::String>>
    MacHost& WithMacOSLatestSupportedVersions(MacOSLatestSupportedVersionsT&& value) { SetMacOSLatestSupportedVersions(std::forward<MacOSLatestSupportedVersionsT>(value)); return *this;}
    template<typename MacOSLatestSupportedVersionsT = Aws::String>
    MacHost& AddMacOSLatestSupportedVersions(MacOSLatestSupportedVersionsT&& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions.emplace_back(std::forward<MacOSLatestSupportedVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_macOSLatestSupportedVersions;
    bool m_macOSLatestSupportedVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
