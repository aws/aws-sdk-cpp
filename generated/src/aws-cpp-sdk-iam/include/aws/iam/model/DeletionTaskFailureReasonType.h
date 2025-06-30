/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/RoleUsageType.h>
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
   * <p>The reason that the service-linked role deletion failed.</p> <p>This data
   * type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServiceLinkedRoleDeletionStatus.html">GetServiceLinkedRoleDeletionStatus</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletionTaskFailureReasonType">AWS
   * API Reference</a></p>
   */
  class DeletionTaskFailureReasonType
  {
  public:
    AWS_IAM_API DeletionTaskFailureReasonType() = default;
    AWS_IAM_API DeletionTaskFailureReasonType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API DeletionTaskFailureReasonType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A short description of the reason that the service-linked role deletion
     * failed.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DeletionTaskFailureReasonType& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects that contains details about the service-linked role
     * deletion failure, if that information is returned by the service. If the
     * service-linked role has active sessions or if any resources that were used by
     * the role have not been deleted from the linked service, the role can't be
     * deleted. This parameter includes a list of the resources that are associated
     * with the role and the Region in which the resources are being used.</p>
     */
    inline const Aws::Vector<RoleUsageType>& GetRoleUsageList() const { return m_roleUsageList; }
    inline bool RoleUsageListHasBeenSet() const { return m_roleUsageListHasBeenSet; }
    template<typename RoleUsageListT = Aws::Vector<RoleUsageType>>
    void SetRoleUsageList(RoleUsageListT&& value) { m_roleUsageListHasBeenSet = true; m_roleUsageList = std::forward<RoleUsageListT>(value); }
    template<typename RoleUsageListT = Aws::Vector<RoleUsageType>>
    DeletionTaskFailureReasonType& WithRoleUsageList(RoleUsageListT&& value) { SetRoleUsageList(std::forward<RoleUsageListT>(value)); return *this;}
    template<typename RoleUsageListT = RoleUsageType>
    DeletionTaskFailureReasonType& AddRoleUsageList(RoleUsageListT&& value) { m_roleUsageListHasBeenSet = true; m_roleUsageList.emplace_back(std::forward<RoleUsageListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<RoleUsageType> m_roleUsageList;
    bool m_roleUsageListHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
