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
    AWS_EC2_API MacHost();
    AWS_EC2_API MacHost(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MacHost& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline MacHost& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline MacHost& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p> The EC2 Mac Dedicated Host ID. </p>
     */
    inline MacHost& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMacOSLatestSupportedVersions() const{ return m_macOSLatestSupportedVersions; }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline bool MacOSLatestSupportedVersionsHasBeenSet() const { return m_macOSLatestSupportedVersionsHasBeenSet; }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline void SetMacOSLatestSupportedVersions(const Aws::Vector<Aws::String>& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions = value; }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline void SetMacOSLatestSupportedVersions(Aws::Vector<Aws::String>&& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions = std::move(value); }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline MacHost& WithMacOSLatestSupportedVersions(const Aws::Vector<Aws::String>& value) { SetMacOSLatestSupportedVersions(value); return *this;}

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline MacHost& WithMacOSLatestSupportedVersions(Aws::Vector<Aws::String>&& value) { SetMacOSLatestSupportedVersions(std::move(value)); return *this;}

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline MacHost& AddMacOSLatestSupportedVersions(const Aws::String& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions.push_back(value); return *this; }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline MacHost& AddMacOSLatestSupportedVersions(Aws::String&& value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions.push_back(std::move(value)); return *this; }

    /**
     * <p> The latest macOS versions that the EC2 Mac Dedicated Host can launch without
     * being upgraded. </p>
     */
    inline MacHost& AddMacOSLatestSupportedVersions(const char* value) { m_macOSLatestSupportedVersionsHasBeenSet = true; m_macOSLatestSupportedVersions.push_back(value); return *this; }

  private:

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_macOSLatestSupportedVersions;
    bool m_macOSLatestSupportedVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
