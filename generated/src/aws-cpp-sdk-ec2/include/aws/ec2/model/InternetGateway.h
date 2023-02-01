/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InternetGatewayAttachment.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes an internet gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InternetGateway">AWS
   * API Reference</a></p>
   */
  class InternetGateway
  {
  public:
    AWS_EC2_API InternetGateway();
    AWS_EC2_API InternetGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InternetGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline const Aws::Vector<InternetGatewayAttachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline void SetAttachments(const Aws::Vector<InternetGatewayAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline void SetAttachments(Aws::Vector<InternetGatewayAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline InternetGateway& WithAttachments(const Aws::Vector<InternetGatewayAttachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline InternetGateway& WithAttachments(Aws::Vector<InternetGatewayAttachment>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline InternetGateway& AddAttachments(const InternetGatewayAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>Any VPCs attached to the internet gateway.</p>
     */
    inline InternetGateway& AddAttachments(InternetGatewayAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const{ return m_internetGatewayId; }

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline void SetInternetGatewayId(const Aws::String& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline void SetInternetGatewayId(Aws::String&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::move(value); }

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline void SetInternetGatewayId(const char* value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId.assign(value); }

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline InternetGateway& WithInternetGatewayId(const Aws::String& value) { SetInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline InternetGateway& WithInternetGatewayId(Aws::String&& value) { SetInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the internet gateway.</p>
     */
    inline InternetGateway& WithInternetGatewayId(const char* value) { SetInternetGatewayId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline InternetGateway& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline InternetGateway& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the internet gateway.</p>
     */
    inline InternetGateway& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline InternetGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline InternetGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline InternetGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the internet gateway.</p>
     */
    inline InternetGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InternetGatewayAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_internetGatewayId;
    bool m_internetGatewayIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
