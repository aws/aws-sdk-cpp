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
   * <p>The status of the transit gateway peering attachment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringAttachmentStatus">AWS
   * API Reference</a></p>
   */
  class PeeringAttachmentStatus
  {
  public:
    AWS_EC2_API PeeringAttachmentStatus();
    AWS_EC2_API PeeringAttachmentStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PeeringAttachmentStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The status code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The status code.</p>
     */
    inline PeeringAttachmentStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline PeeringAttachmentStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline PeeringAttachmentStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The status message, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The status message, if applicable.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The status message, if applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status message, if applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The status message, if applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The status message, if applicable.</p>
     */
    inline PeeringAttachmentStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The status message, if applicable.</p>
     */
    inline PeeringAttachmentStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The status message, if applicable.</p>
     */
    inline PeeringAttachmentStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
