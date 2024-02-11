/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the supported NitroTPM versions for the instance
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NitroTpmInfo">AWS
   * API Reference</a></p>
   */
  class NitroTpmInfo
  {
  public:
    AWS_EC2_API NitroTpmInfo();
    AWS_EC2_API NitroTpmInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NitroTpmInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedVersions() const{ return m_supportedVersions; }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline bool SupportedVersionsHasBeenSet() const { return m_supportedVersionsHasBeenSet; }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline void SetSupportedVersions(const Aws::Vector<Aws::String>& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions = value; }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline void SetSupportedVersions(Aws::Vector<Aws::String>&& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions = std::move(value); }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline NitroTpmInfo& WithSupportedVersions(const Aws::Vector<Aws::String>& value) { SetSupportedVersions(value); return *this;}

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline NitroTpmInfo& WithSupportedVersions(Aws::Vector<Aws::String>&& value) { SetSupportedVersions(std::move(value)); return *this;}

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline NitroTpmInfo& AddSupportedVersions(const Aws::String& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions.push_back(value); return *this; }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline NitroTpmInfo& AddSupportedVersions(Aws::String&& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>Indicates the supported NitroTPM versions.</p>
     */
    inline NitroTpmInfo& AddSupportedVersions(const char* value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_supportedVersions;
    bool m_supportedVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
