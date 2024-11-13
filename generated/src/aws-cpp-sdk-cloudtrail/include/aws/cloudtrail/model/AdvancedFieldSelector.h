/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A single selector statement in an advanced event selector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AdvancedFieldSelector">AWS
   * API Reference</a></p>
   */
  class AdvancedFieldSelector
  {
  public:
    AWS_CLOUDTRAIL_API AdvancedFieldSelector();
    AWS_CLOUDTRAIL_API AdvancedFieldSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API AdvancedFieldSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A field in a CloudTrail event record on which to filter events to be logged.
     * For event data stores for CloudTrail Insights events, Config configuration
     * items, Audit Manager evidence, or events outside of Amazon Web Services, the
     * field is used only for selecting events as filtering is not supported.</p>
     * <p>For CloudTrail management events, supported fields include
     * <code>eventCategory</code> (required), <code>eventSource</code>, and
     * <code>readOnly</code>. The following additional fields are available for event
     * data stores: <code>eventName</code>, <code>eventType</code>,
     * <code>sessionCredentialFromConsole</code>, and
     * <code>userIdentity.arn</code>.</p> <p>For CloudTrail data events, supported
     * fields include <code>eventCategory</code> (required),
     * <code>resources.type</code> (required), <code>eventName</code>,
     * <code>readOnly</code>, and <code>resources.ARN</code>. The following additional
     * fields are available for event data stores: <code>eventSource</code>,
     * <code>eventType</code>, <code>sessionCredentialFromConsole</code>, and
     * <code>userIdentity.arn</code>.</p> <p>For CloudTrail network activity events,
     * supported fields include <code>eventCategory</code> (required),
     * <code>eventSource</code> (required), <code>eventName</code>,
     * <code>errorCode</code>, and <code>vpcEndpointId</code>.</p> <p> For event data
     * stores for CloudTrail Insights events, Config configuration items, Audit Manager
     * evidence, or events outside of Amazon Web Services, the only supported field is
     * <code>eventCategory</code>. </p> <ul> <li> <p> <b> <code>readOnly</code> </b> -
     * This is an optional field that is only used for management events and data
     * events. This field can be set to <code>Equals</code> with a value of
     * <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - This field is only used for management events,
     * data events (for event data stores only), and network activity events.</p>
     * <p>For management events for trails, this is an optional field that can be set
     * to <code>NotEquals</code> <code>kms.amazonaws.com</code> to exclude KMS
     * management events, or <code>NotEquals</code> <code>rdsdata.amazonaws.com</code>
     * to exclude RDS management events.</p> <p>For management and data events for
     * event data stores, you can use it to include or exclude any event source and can
     * use any operator.</p> <p>For network activity events, this is a required field
     * that only uses the <code>Equals</code> operator. Set this field to the event
     * source for which you want to log network activity events. If you want to log
     * network activity events for multiple event sources, you must create a separate
     * field selector for each event source.</p> <p>The following are valid values for
     * network activity events:</p> <ul> <li> <p> <code>cloudtrail.amazonaws.com</code>
     * </p> </li> <li> <p> <code>ec2.amazonaws.com</code> </p> </li> <li> <p>
     * <code>kms.amazonaws.com</code> </p> </li> <li> <p>
     * <code>secretsmanager.amazonaws.com</code> </p> </li> </ul> </li> <li> <p> <b>
     * <code>eventName</code> </b> - This is an optional field that is only used for
     * data events, management events (for event data stores only), and network
     * activity events. You can use any operator with <code>eventName</code>. You can
     * use it to ﬁlter in or ﬁlter out specific events. You can have multiple values
     * for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This field is required and must be set to
     * <code>Equals</code>. </p> <ul> <li> <p> For CloudTrail management events, the
     * value must be <code>Management</code>. </p> </li> <li> <p> For CloudTrail data
     * events, the value must be <code>Data</code>. </p> </li> <li> <p> For CloudTrail
     * network activity events, the value must be <code>NetworkActivity</code>. </p>
     * </li> </ul> <p>The following are used only for event data stores:</p> <ul> <li>
     * <p> For CloudTrail Insights events, the value must be <code>Insight</code>. </p>
     * </li> <li> <p> For Config configuration items, the value must be
     * <code>ConfigurationItem</code>. </p> </li> <li> <p> For Audit Manager evidence,
     * the value must be <code>Evidence</code>. </p> </li> <li> <p> For events outside
     * of Amazon Web Services, the value must be <code>ActivityAuditLog</code>. </p>
     * </li> </ul> </li> <li> <p> <b> <code>eventType</code> </b> - This is an optional
     * field available only for event data stores, which is used to filter management
     * and data events on the event type. For information about available event types,
     * see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-event-reference-record-contents.html#ct-event-type">CloudTrail
     * record contents</a> in the <i>CloudTrail user guide</i>.</p> </li> <li> <p> <b>
     * <code>errorCode</code> </b> - This ﬁeld is only used to filter CloudTrail
     * network activity events and is optional. This is the error code to filter on.
     * Currently, the only valid <code>errorCode</code> is
     * <code>VpceAccessDenied</code>. <code>errorCode</code> can only use the
     * <code>Equals</code> operator.</p> </li> <li> <p> <b>
     * <code>sessionCredentialFromConsole</code> </b> - This is an optional field
     * available only for event data stores, which is used to filter management and
     * data events based on whether the events originated from an Amazon Web Services
     * Management Console session. <code>sessionCredentialFromConsole</code> can only
     * use the <code>Equals</code> and <code>NotEquals</code> operators.</p> </li> <li>
     * <p> <b> <code>resources.type</code> </b> - This ﬁeld is required for CloudTrail
     * data events. <code>resources.type</code> can only use the <code>Equals</code>
     * operator.</p> <p>For a list of available resource types for data events, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#logging-data-events">Data
     * events</a> in the <i>CloudTrail User Guide</i>.</p> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log events on more than one
     * resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - The <code>resources.ARN</code> is an optional
     * field for data events. You can use any operator with <code>resources.ARN</code>,
     * but if you use <code>Equals</code> or <code>NotEquals</code>, the value must
     * exactly match the ARN of a valid resource of the type you've speciﬁed in the
     * template as the value of resources.type. To log all data events for all objects
     * in a specific S3 bucket, use the <code>StartsWith</code> operator, and include
     * only the bucket ARN as the matching value.</p> <p>For information about
     * filtering data events on the <code>resources.ARN</code> field, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/filtering-data-events.html#filtering-data-events-resourcearn">Filtering
     * data events by resources.ARN</a> in the <i>CloudTrail User Guide</i>.</p> 
     * <p>You can't use the <code>resources.ARN</code> field to filter resource types
     * that do not have ARNs.</p>  </li> <li> <p> <b>
     * <code>userIdentity.arn</code> </b> - This is an optional field available only
     * for event data stores, which is used to filter management and data events on the
     * userIdentity ARN. You can use any operator with <code>userIdentity.arn</code>.
     * For more information on the userIdentity element, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-event-reference-user-identity.html">CloudTrail
     * userIdentity element</a> in the <i>CloudTrail User Guide</i>.</p> </li> <li> <p>
     * <b> <code>vpcEndpointId</code> </b> - This ﬁeld is only used to filter
     * CloudTrail network activity events and is optional. This field identifies the
     * VPC endpoint that the request passed through. You can use any operator with
     * <code>vpcEndpointId</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline AdvancedFieldSelector& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline AdvancedFieldSelector& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline AdvancedFieldSelector& WithField(const char* value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }
    inline AdvancedFieldSelector& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}
    inline AdvancedFieldSelector& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartsWith() const{ return m_startsWith; }
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
    inline void SetStartsWith(const Aws::Vector<Aws::String>& value) { m_startsWithHasBeenSet = true; m_startsWith = value; }
    inline void SetStartsWith(Aws::Vector<Aws::String>&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::move(value); }
    inline AdvancedFieldSelector& WithStartsWith(const Aws::Vector<Aws::String>& value) { SetStartsWith(value); return *this;}
    inline AdvancedFieldSelector& WithStartsWith(Aws::Vector<Aws::String>&& value) { SetStartsWith(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddStartsWith(const Aws::String& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddStartsWith(Aws::String&& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddStartsWith(const char* value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndsWith() const{ return m_endsWith; }
    inline bool EndsWithHasBeenSet() const { return m_endsWithHasBeenSet; }
    inline void SetEndsWith(const Aws::Vector<Aws::String>& value) { m_endsWithHasBeenSet = true; m_endsWith = value; }
    inline void SetEndsWith(Aws::Vector<Aws::String>&& value) { m_endsWithHasBeenSet = true; m_endsWith = std::move(value); }
    inline AdvancedFieldSelector& WithEndsWith(const Aws::Vector<Aws::String>& value) { SetEndsWith(value); return *this;}
    inline AdvancedFieldSelector& WithEndsWith(Aws::Vector<Aws::String>&& value) { SetEndsWith(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddEndsWith(const Aws::String& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddEndsWith(Aws::String&& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddEndsWith(const char* value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }
    inline AdvancedFieldSelector& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}
    inline AdvancedFieldSelector& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotStartsWith() const{ return m_notStartsWith; }
    inline bool NotStartsWithHasBeenSet() const { return m_notStartsWithHasBeenSet; }
    inline void SetNotStartsWith(const Aws::Vector<Aws::String>& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = value; }
    inline void SetNotStartsWith(Aws::Vector<Aws::String>&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = std::move(value); }
    inline AdvancedFieldSelector& WithNotStartsWith(const Aws::Vector<Aws::String>& value) { SetNotStartsWith(value); return *this;}
    inline AdvancedFieldSelector& WithNotStartsWith(Aws::Vector<Aws::String>&& value) { SetNotStartsWith(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddNotStartsWith(const Aws::String& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddNotStartsWith(Aws::String&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddNotStartsWith(const char* value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEndsWith() const{ return m_notEndsWith; }
    inline bool NotEndsWithHasBeenSet() const { return m_notEndsWithHasBeenSet; }
    inline void SetNotEndsWith(const Aws::Vector<Aws::String>& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = value; }
    inline void SetNotEndsWith(Aws::Vector<Aws::String>&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = std::move(value); }
    inline AdvancedFieldSelector& WithNotEndsWith(const Aws::Vector<Aws::String>& value) { SetNotEndsWith(value); return *this;}
    inline AdvancedFieldSelector& WithNotEndsWith(Aws::Vector<Aws::String>&& value) { SetNotEndsWith(std::move(value)); return *this;}
    inline AdvancedFieldSelector& AddNotEndsWith(const Aws::String& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }
    inline AdvancedFieldSelector& AddNotEndsWith(Aws::String&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(std::move(value)); return *this; }
    inline AdvancedFieldSelector& AddNotEndsWith(const char* value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_startsWith;
    bool m_startsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_endsWith;
    bool m_endsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notStartsWith;
    bool m_notStartsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEndsWith;
    bool m_notEndsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
