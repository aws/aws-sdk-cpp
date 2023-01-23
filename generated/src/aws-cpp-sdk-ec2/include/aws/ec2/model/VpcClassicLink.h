/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   *  <p>We are retiring EC2-Classic. We recommend that you migrate from
   * EC2-Classic to a VPC. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
   * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p>  <p>Describes whether a VPC is enabled for
   * ClassicLink.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcClassicLink">AWS
   * API Reference</a></p>
   */
  class VpcClassicLink
  {
  public:
    AWS_EC2_API VpcClassicLink();
    AWS_EC2_API VpcClassicLink(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcClassicLink& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the VPC is enabled for ClassicLink.</p>
     */
    inline bool GetClassicLinkEnabled() const{ return m_classicLinkEnabled; }

    /**
     * <p>Indicates whether the VPC is enabled for ClassicLink.</p>
     */
    inline bool ClassicLinkEnabledHasBeenSet() const { return m_classicLinkEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the VPC is enabled for ClassicLink.</p>
     */
    inline void SetClassicLinkEnabled(bool value) { m_classicLinkEnabledHasBeenSet = true; m_classicLinkEnabled = value; }

    /**
     * <p>Indicates whether the VPC is enabled for ClassicLink.</p>
     */
    inline VpcClassicLink& WithClassicLinkEnabled(bool value) { SetClassicLinkEnabled(value); return *this;}


    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline VpcClassicLink& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline VpcClassicLink& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline VpcClassicLink& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline VpcClassicLink& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcClassicLink& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcClassicLink& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcClassicLink& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    bool m_classicLinkEnabled;
    bool m_classicLinkEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
