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
    AWS_CLOUDFRONT_API OriginGroup();
    AWS_CLOUDFRONT_API OriginGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The origin group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OriginGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OriginGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OriginGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline const OriginGroupFailoverCriteria& GetFailoverCriteria() const{ return m_failoverCriteria; }
    inline bool FailoverCriteriaHasBeenSet() const { return m_failoverCriteriaHasBeenSet; }
    inline void SetFailoverCriteria(const OriginGroupFailoverCriteria& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = value; }
    inline void SetFailoverCriteria(OriginGroupFailoverCriteria&& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = std::move(value); }
    inline OriginGroup& WithFailoverCriteria(const OriginGroupFailoverCriteria& value) { SetFailoverCriteria(value); return *this;}
    inline OriginGroup& WithFailoverCriteria(OriginGroupFailoverCriteria&& value) { SetFailoverCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline const OriginGroupMembers& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const OriginGroupMembers& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(OriginGroupMembers&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline OriginGroup& WithMembers(const OriginGroupMembers& value) { SetMembers(value); return *this;}
    inline OriginGroup& WithMembers(OriginGroupMembers&& value) { SetMembers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selection criteria for the origin group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/high_availability_origin_failover.html#concept_origin_groups.creating">Create
     * an origin group</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const OriginGroupSelectionCriteria& GetSelectionCriteria() const{ return m_selectionCriteria; }
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }
    inline void SetSelectionCriteria(const OriginGroupSelectionCriteria& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = value; }
    inline void SetSelectionCriteria(OriginGroupSelectionCriteria&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::move(value); }
    inline OriginGroup& WithSelectionCriteria(const OriginGroupSelectionCriteria& value) { SetSelectionCriteria(value); return *this;}
    inline OriginGroup& WithSelectionCriteria(OriginGroupSelectionCriteria&& value) { SetSelectionCriteria(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OriginGroupFailoverCriteria m_failoverCriteria;
    bool m_failoverCriteriaHasBeenSet = false;

    OriginGroupMembers m_members;
    bool m_membersHasBeenSet = false;

    OriginGroupSelectionCriteria m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
