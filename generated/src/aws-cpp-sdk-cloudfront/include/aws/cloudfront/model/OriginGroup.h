/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/OriginGroupFailoverCriteria.h>
#include <aws/cloudfront/model/OriginGroupMembers.h>
#include <aws/cloudfront/model/OriginGroupSelectionCriteria.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>An origin group includes two origins (a primary origin and a secondary origin
   * to failover to) and a failover criteria that you specify. You create an origin
   * group to support origin failover in CloudFront. When you create or update a
   * distribution, you can specify the origin group instead of a single origin, and
   * CloudFront will failover from the primary origin to the secondary origin under
   * the failover conditions that you've chosen.</p> <p>Optionally, you can choose
   * selection criteria for your origin group to specify how your origins are
   * selected when your distribution routes viewer requests.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginGroup">AWS
   * API Reference</a></p>
   */
  class OriginGroup
  {
  public:
    AWS_CLOUDFRONT_API OriginGroup() = default;
    AWS_CLOUDFRONT_API OriginGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The origin group's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OriginGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline const OriginGroupFailoverCriteria& GetFailoverCriteria() const { return m_failoverCriteria; }
    inline bool FailoverCriteriaHasBeenSet() const { return m_failoverCriteriaHasBeenSet; }
    template<typename FailoverCriteriaT = OriginGroupFailoverCriteria>
    void SetFailoverCriteria(FailoverCriteriaT&& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = std::forward<FailoverCriteriaT>(value); }
    template<typename FailoverCriteriaT = OriginGroupFailoverCriteria>
    OriginGroup& WithFailoverCriteria(FailoverCriteriaT&& value) { SetFailoverCriteria(std::forward<FailoverCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline const OriginGroupMembers& GetMembers() const { return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    template<typename MembersT = OriginGroupMembers>
    void SetMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members = std::forward<MembersT>(value); }
    template<typename MembersT = OriginGroupMembers>
    OriginGroup& WithMembers(MembersT&& value) { SetMembers(std::forward<MembersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selection criteria for the origin group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/high_availability_origin_failover.html#concept_origin_groups.creating">Create
     * an origin group</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline OriginGroupSelectionCriteria GetSelectionCriteria() const { return m_selectionCriteria; }
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }
    inline void SetSelectionCriteria(OriginGroupSelectionCriteria value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = value; }
    inline OriginGroup& WithSelectionCriteria(OriginGroupSelectionCriteria value) { SetSelectionCriteria(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OriginGroupFailoverCriteria m_failoverCriteria;
    bool m_failoverCriteriaHasBeenSet = false;

    OriginGroupMembers m_members;
    bool m_membersHasBeenSet = false;

    OriginGroupSelectionCriteria m_selectionCriteria{OriginGroupSelectionCriteria::NOT_SET};
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
