/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes a message about an Availability Zone, Local Zone, or Wavelength
   * Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZoneMessage">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneMessage
  {
  public:
    AWS_EC2_API AvailabilityZoneMessage();
    AWS_EC2_API AvailabilityZoneMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AvailabilityZoneMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline AvailabilityZoneMessage& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline AvailabilityZoneMessage& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline AvailabilityZoneMessage& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
