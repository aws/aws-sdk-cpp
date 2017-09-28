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
#include <aws/ec2/model/PermissionGroup.h>
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
   * <p>Describes a load permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LoadPermissionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LoadPermissionRequest
  {
  public:
    LoadPermissionRequest();
    LoadPermissionRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadPermissionRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the group.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline LoadPermissionRequest& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline LoadPermissionRequest& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline LoadPermissionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline LoadPermissionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline LoadPermissionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    PermissionGroup m_group;
    bool m_groupHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
