/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InternetGatewayAttachment.h>
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
   * <p>Describes an egress-only Internet gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EgressOnlyInternetGateway">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API EgressOnlyInternetGateway
  {
  public:
    EgressOnlyInternetGateway();
    EgressOnlyInternetGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    EgressOnlyInternetGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline const Aws::Vector<InternetGatewayAttachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline void SetAttachments(const Aws::Vector<InternetGatewayAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline void SetAttachments(Aws::Vector<InternetGatewayAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& WithAttachments(const Aws::Vector<InternetGatewayAttachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& WithAttachments(Aws::Vector<InternetGatewayAttachment>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& AddAttachments(const InternetGatewayAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>Information about the attachment of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& AddAttachments(InternetGatewayAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline EgressOnlyInternetGateway& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}

  private:

    Aws::Vector<InternetGatewayAttachment> m_attachments;
    bool m_attachmentsHasBeenSet;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
