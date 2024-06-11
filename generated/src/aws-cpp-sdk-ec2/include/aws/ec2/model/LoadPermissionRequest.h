/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LoadPermissionRequest
  {
  public:
    AWS_EC2_API LoadPermissionRequest();
    AWS_EC2_API LoadPermissionRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LoadPermissionRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline LoadPermissionRequest& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}
    inline LoadPermissionRequest& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline LoadPermissionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline LoadPermissionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline LoadPermissionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    PermissionGroup m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
