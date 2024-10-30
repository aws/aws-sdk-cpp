/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateSecurityGroupResponse
  {
  public:
    AWS_EC2_API CreateSecurityGroupResponse();
    AWS_EC2_API CreateSecurityGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSecurityGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline CreateSecurityGroupResponse& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline CreateSecurityGroupResponse& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline CreateSecurityGroupResponse& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateSecurityGroupResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSecurityGroupResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSecurityGroupResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateSecurityGroupResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group ARN.</p>
     */
    inline const Aws::String& GetSecurityGroupArn() const{ return m_securityGroupArn; }
    inline void SetSecurityGroupArn(const Aws::String& value) { m_securityGroupArn = value; }
    inline void SetSecurityGroupArn(Aws::String&& value) { m_securityGroupArn = std::move(value); }
    inline void SetSecurityGroupArn(const char* value) { m_securityGroupArn.assign(value); }
    inline CreateSecurityGroupResponse& WithSecurityGroupArn(const Aws::String& value) { SetSecurityGroupArn(value); return *this;}
    inline CreateSecurityGroupResponse& WithSecurityGroupArn(Aws::String&& value) { SetSecurityGroupArn(std::move(value)); return *this;}
    inline CreateSecurityGroupResponse& WithSecurityGroupArn(const char* value) { SetSecurityGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateSecurityGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateSecurityGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;

    Aws::Vector<Tag> m_tags;

    Aws::String m_securityGroupArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
