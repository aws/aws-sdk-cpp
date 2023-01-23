/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AssociationStatusCode.h>
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
   * <p>Describes the state of a target network association.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociationStatus">AWS
   * API Reference</a></p>
   */
  class AssociationStatus
  {
  public:
    AWS_EC2_API AssociationStatus();
    AWS_EC2_API AssociationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AssociationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the target network association.</p>
     */
    inline const AssociationStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The state of the target network association.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state of the target network association.</p>
     */
    inline void SetCode(const AssociationStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state of the target network association.</p>
     */
    inline void SetCode(AssociationStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state of the target network association.</p>
     */
    inline AssociationStatus& WithCode(const AssociationStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state of the target network association.</p>
     */
    inline AssociationStatus& WithCode(AssociationStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    AssociationStatusCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
