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
   * <p>Describes an egress-only internet gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EgressOnlyInternetGateway">AWS
   * API Reference</a></p>
   */
  class EgressOnlyInternetGateway
  {
  public:
    AWS_EC2_API EgressOnlyInternetGateway() = default;
    AWS_EC2_API EgressOnlyInternetGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EgressOnlyInternetGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Information about the attachment of the egress-only internet gateway.</p>
     */
    inline const Aws::Vector<InternetGatewayAttachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<InternetGatewayAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<InternetGatewayAttachment>>
    EgressOnlyInternetGateway& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = InternetGatewayAttachment>
    EgressOnlyInternetGateway& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the egress-only internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const { return m_egressOnlyInternetGatewayId; }
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    void SetEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::forward<EgressOnlyInternetGatewayIdT>(value); }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    EgressOnlyInternetGateway& WithEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { SetEgressOnlyInternetGatewayId(std::forward<EgressOnlyInternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the egress-only internet gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EgressOnlyInternetGateway& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EgressOnlyInternetGateway& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InternetGatewayAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
