/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about a group that a managed policy is attached to.</p>
   * <p>This data type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListEntitiesForPolicy.html">ListEntitiesForPolicy</a>
   * operation. </p> <p>For more information about managed policies, refer to <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * policies and inline policies</a> in the <i>IAM User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PolicyGroup">AWS API
   * Reference</a></p>
   */
  class PolicyGroup
  {
  public:
    AWS_IAM_API PolicyGroup() = default;
    AWS_IAM_API PolicyGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API PolicyGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name (friendly name, not ARN) identifying the group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    PolicyGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    PolicyGroup& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
