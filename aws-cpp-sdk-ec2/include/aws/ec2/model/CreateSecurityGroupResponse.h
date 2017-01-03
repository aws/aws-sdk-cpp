﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
  /**
   * <p>Contains the output of CreateSecurityGroup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSecurityGroupResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateSecurityGroupResponse
  {
  public:
    CreateSecurityGroupResponse();
    CreateSecurityGroupResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateSecurityGroupResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline CreateSecurityGroupResponse& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline CreateSecurityGroupResponse& WithGroupId(Aws::String&& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline CreateSecurityGroupResponse& WithGroupId(const char* value) { SetGroupId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateSecurityGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSecurityGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_groupId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws