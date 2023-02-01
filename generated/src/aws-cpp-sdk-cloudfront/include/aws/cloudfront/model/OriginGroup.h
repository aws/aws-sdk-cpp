/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/OriginGroupFailoverCriteria.h>
#include <aws/cloudfront/model/OriginGroupMembers.h>
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
   * <p>An origin group includes two origins (a primary origin and a second origin to
   * failover to) and a failover criteria that you specify. You create an origin
   * group to support origin failover in CloudFront. When you create or update a
   * distribution, you can specifiy the origin group instead of a single origin, and
   * CloudFront will failover from the primary origin to the second origin under the
   * failover conditions that you've chosen.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The origin group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The origin group's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The origin group's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The origin group's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The origin group's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The origin group's ID.</p>
     */
    inline OriginGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The origin group's ID.</p>
     */
    inline OriginGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The origin group's ID.</p>
     */
    inline OriginGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline const OriginGroupFailoverCriteria& GetFailoverCriteria() const{ return m_failoverCriteria; }

    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline bool FailoverCriteriaHasBeenSet() const { return m_failoverCriteriaHasBeenSet; }

    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline void SetFailoverCriteria(const OriginGroupFailoverCriteria& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = value; }

    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline void SetFailoverCriteria(OriginGroupFailoverCriteria&& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = std::move(value); }

    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline OriginGroup& WithFailoverCriteria(const OriginGroupFailoverCriteria& value) { SetFailoverCriteria(value); return *this;}

    /**
     * <p>A complex type that contains information about the failover criteria for an
     * origin group.</p>
     */
    inline OriginGroup& WithFailoverCriteria(OriginGroupFailoverCriteria&& value) { SetFailoverCriteria(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline const OriginGroupMembers& GetMembers() const{ return m_members; }

    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }

    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline void SetMembers(const OriginGroupMembers& value) { m_membersHasBeenSet = true; m_members = value; }

    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline void SetMembers(OriginGroupMembers&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }

    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline OriginGroup& WithMembers(const OriginGroupMembers& value) { SetMembers(value); return *this;}

    /**
     * <p>A complex type that contains information about the origins in an origin
     * group.</p>
     */
    inline OriginGroup& WithMembers(OriginGroupMembers&& value) { SetMembers(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OriginGroupFailoverCriteria m_failoverCriteria;
    bool m_failoverCriteriaHasBeenSet = false;

    OriginGroupMembers m_members;
    bool m_membersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
