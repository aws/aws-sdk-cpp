/*
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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53/model/ChangeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Change.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that lists the changes and information for a ChangeBatch.</p>
   */
  class AWS_ROUTE53_API ChangeBatchRecord
  {
  public:
    ChangeBatchRecord();
    ChangeBatchRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    ChangeBatchRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline ChangeBatchRecord& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline ChangeBatchRecord& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the request. Use this ID to track when the change has completed
     * across all Amazon Route 53 DNS servers.</p>
     */
    inline ChangeBatchRecord& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The date and time the change was submitted, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const{ return m_submittedAt; }

    /**
     * <p>The date and time the change was submitted, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline void SetSubmittedAt(const Aws::Utils::DateTime& value) { m_submittedAtHasBeenSet = true; m_submittedAt = value; }

    /**
     * <p>The date and time the change was submitted, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline void SetSubmittedAt(Aws::Utils::DateTime&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = value; }

    /**
     * <p>The date and time the change was submitted, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline ChangeBatchRecord& WithSubmittedAt(const Aws::Utils::DateTime& value) { SetSubmittedAt(value); return *this;}

    /**
     * <p>The date and time the change was submitted, in the format
     * <code>YYYY-MM-DDThh:mm:ssZ</code>, as specified in the ISO 8601 standard (for
     * example, 2009-11-19T19:37:58Z). The <code>Z</code> after the time indicates that
     * the time is listed in Coordinated Universal Time (UTC).</p>
     */
    inline ChangeBatchRecord& WithSubmittedAt(Aws::Utils::DateTime&& value) { SetSubmittedAt(value); return *this;}

    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     * <p>Valid Values: <code>PENDING</code> | <code>INSYNC</code></p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     * <p>Valid Values: <code>PENDING</code> | <code>INSYNC</code></p>
     */
    inline void SetStatus(const ChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     * <p>Valid Values: <code>PENDING</code> | <code>INSYNC</code></p>
     */
    inline void SetStatus(ChangeStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     * <p>Valid Values: <code>PENDING</code> | <code>INSYNC</code></p>
     */
    inline ChangeBatchRecord& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the request. <code>PENDING</code> indicates that this
     * request has not yet been applied to all Amazon Route 53 DNS servers.</p>
     * <p>Valid Values: <code>PENDING</code> | <code>INSYNC</code></p>
     */
    inline ChangeBatchRecord& WithStatus(ChangeStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline ChangeBatchRecord& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline ChangeBatchRecord& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>A complex type that describes change information about changes made to your
     * hosted zone.</p> <p>This element contains an ID that you use when performing a
     * <a>GetChange</a> action to get detailed information about the change.</p>
     */
    inline ChangeBatchRecord& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline const Aws::String& GetSubmitter() const{ return m_submitter; }

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline void SetSubmitter(const Aws::String& value) { m_submitterHasBeenSet = true; m_submitter = value; }

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline void SetSubmitter(Aws::String&& value) { m_submitterHasBeenSet = true; m_submitter = value; }

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline void SetSubmitter(const char* value) { m_submitterHasBeenSet = true; m_submitter.assign(value); }

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline ChangeBatchRecord& WithSubmitter(const Aws::String& value) { SetSubmitter(value); return *this;}

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline ChangeBatchRecord& WithSubmitter(Aws::String&& value) { SetSubmitter(value); return *this;}

    /**
     * <p>The AWS account ID attached to the changes. </p>
     */
    inline ChangeBatchRecord& WithSubmitter(const char* value) { SetSubmitter(value); return *this;}

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline const Aws::Vector<Change>& GetChanges() const{ return m_changes; }

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline void SetChanges(const Aws::Vector<Change>& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline void SetChanges(Aws::Vector<Change>&& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline ChangeBatchRecord& WithChanges(const Aws::Vector<Change>& value) { SetChanges(value); return *this;}

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline ChangeBatchRecord& WithChanges(Aws::Vector<Change>&& value) { SetChanges(value); return *this;}

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline ChangeBatchRecord& AddChanges(const Change& value) { m_changesHasBeenSet = true; m_changes.push_back(value); return *this; }

    /**
     * <p>A list of changes made in the ChangeBatch.</p>
     */
    inline ChangeBatchRecord& AddChanges(Change&& value) { m_changesHasBeenSet = true; m_changes.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::Utils::DateTime m_submittedAt;
    bool m_submittedAtHasBeenSet;
    ChangeStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::String m_submitter;
    bool m_submitterHasBeenSet;
    Aws::Vector<Change> m_changes;
    bool m_changesHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
