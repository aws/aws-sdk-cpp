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


    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline AdvancedFieldSelector& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline AdvancedFieldSelector& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p> A field in an event record on which to filter events to be logged. Supported
     * fields include <code>readOnly</code>, <code>eventCategory</code>,
     * <code>eventSource</code> (for management events), <code>eventName</code>,
     * <code>resources.type</code>, and <code>resources.ARN</code>. </p> <ul> <li> <p>
     * <b> <code>readOnly</code> </b> - Optional. Can be set to <code>Equals</code> a
     * value of <code>true</code> or <code>false</code>. If you do not add this field,
     * CloudTrail logs both <code>read</code> and <code>write</code> events. A value of
     * <code>true</code> logs only <code>read</code> events. A value of
     * <code>false</code> logs only <code>write</code> events.</p> </li> <li> <p> <b>
     * <code>eventSource</code> </b> - For filtering management events only. This can
     * be set only to <code>NotEquals</code> <code>kms.amazonaws.com</code>.</p> </li>
     * <li> <p> <b> <code>eventName</code> </b> - Can use any operator. You can use it
     * to ﬁlter in or ﬁlter out any data event logged to CloudTrail, such as
     * <code>PutBucket</code> or <code>GetSnapshotBlock</code>. You can have multiple
     * values for this ﬁeld, separated by commas.</p> </li> <li> <p> <b>
     * <code>eventCategory</code> </b> - This is required. It must be set to
     * <code>Equals</code>, and the value must be <code>Management</code> or
     * <code>Data</code>.</p> </li> <li> <p> <b> <code>resources.type</code> </b> -
     * This ﬁeld is required. <code>resources.type</code> can only use the
     * <code>Equals</code> operator, and the value can be one of the following:</p>
     * <ul> <li> <p> <code>AWS::S3::Object</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::S3Outposts::Object</code> </p> </li> <li> <p>
     * <code>AWS::ManagedBlockchain::Node</code> </p> </li> <li> <p>
     * <code>AWS::S3ObjectLambda::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Snapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3::AccessPoint</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> <li> <p>
     * <code>AWS::Glue::Table</code> </p> </li> </ul> <p> You can have only one
     * <code>resources.type</code> ﬁeld per selector. To log data events on more than
     * one resource type, add another selector.</p> </li> <li> <p> <b>
     * <code>resources.ARN</code> </b> - You can use any operator with
     * <code>resources.ARN</code>, but if you use <code>Equals</code> or
     * <code>NotEquals</code>, the value must exactly match the ARN of a valid resource
     * of the type you've speciﬁed in the template as the value of resources.type. For
     * example, if resources.type equals <code>AWS::S3::Object</code>, the ARN must be
     * in one of the following formats. To log all data events for all objects in a
     * specific S3 bucket, use the <code>StartsWith</code> operator, and include only
     * the bucket ARN as the matching value.</p> <p>The trailing slash is intentional;
     * do not exclude it. Replace the text between less than and greater than symbols
     * (&lt;&gt;) with resource-specific information. </p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/</code> </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:::&lt;bucket_name&gt;/&lt;object_path&gt;/</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in one of the
     * following formats. To log events on all objects in an S3 access point, we
     * recommend that you use only the access point ARN, don’t include the object path,
     * and use the <code>StartsWith</code> or <code>NotStartsWith</code> operators.</p>
     * <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> <li> <p>
     * <code>arn:&lt;partition&gt;:s3:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;/object/&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::Lambda::Function</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:lambda:&lt;region&gt;:&lt;account_ID&gt;:function:&lt;function_name&gt;</code>
     * </p> </li> </ul> <p>When resources.type equals
     * <code>AWS::DynamoDB::Table</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3Outposts::Object</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-outposts:&lt;region&gt;:&lt;account_ID&gt;:&lt;object_path&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::ManagedBlockchain::Node</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:managedblockchain:&lt;region&gt;:&lt;account_ID&gt;:nodes/&lt;node_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::S3ObjectLambda::AccessPoint</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:s3-object-lambda:&lt;region&gt;:&lt;account_ID&gt;:accesspoint/&lt;access_point_name&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::EC2::Snapshot</code>, and the operator is set to <code>Equals</code>
     * or <code>NotEquals</code>, the ARN must be in the following format:</p> <ul>
     * <li> <p>
     * <code>arn:&lt;partition&gt;:ec2:&lt;region&gt;::snapshot/&lt;snapshot_ID&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::DynamoDB::Stream</code>, and the operator is set to
     * <code>Equals</code> or <code>NotEquals</code>, the ARN must be in the following
     * format:</p> <ul> <li> <p>
     * <code>arn:&lt;partition&gt;:dynamodb:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;table_name&gt;/stream/&lt;date_time&gt;</code>
     * </p> </li> </ul> <p>When <code>resources.type</code> equals
     * <code>AWS::Glue::Table</code>, and the operator is set to <code>Equals</code> or
     * <code>NotEquals</code>, the ARN must be in the following format:</p> <ul> <li>
     * <p>
     * <code>arn:&lt;partition&gt;:glue:&lt;region&gt;:&lt;account_ID&gt;:table/&lt;database_name&gt;/&lt;table_name&gt;</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline AdvancedFieldSelector& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline AdvancedFieldSelector& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline AdvancedFieldSelector& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline AdvancedFieldSelector& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline AdvancedFieldSelector& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }

    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline AdvancedFieldSelector& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }


    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartsWith() const{ return m_startsWith; }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline void SetStartsWith(const Aws::Vector<Aws::String>& value) { m_startsWithHasBeenSet = true; m_startsWith = value; }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline void SetStartsWith(Aws::Vector<Aws::String>&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::move(value); }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& WithStartsWith(const Aws::Vector<Aws::String>& value) { SetStartsWith(value); return *this;}

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& WithStartsWith(Aws::Vector<Aws::String>&& value) { SetStartsWith(std::move(value)); return *this;}

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddStartsWith(const Aws::String& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddStartsWith(Aws::String&& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(std::move(value)); return *this; }

    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddStartsWith(const char* value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }


    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndsWith() const{ return m_endsWith; }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline bool EndsWithHasBeenSet() const { return m_endsWithHasBeenSet; }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline void SetEndsWith(const Aws::Vector<Aws::String>& value) { m_endsWithHasBeenSet = true; m_endsWith = value; }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline void SetEndsWith(Aws::Vector<Aws::String>&& value) { m_endsWithHasBeenSet = true; m_endsWith = std::move(value); }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& WithEndsWith(const Aws::Vector<Aws::String>& value) { SetEndsWith(value); return *this;}

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& WithEndsWith(Aws::Vector<Aws::String>&& value) { SetEndsWith(std::move(value)); return *this;}

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddEndsWith(const Aws::String& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddEndsWith(Aws::String&& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(std::move(value)); return *this; }

    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline AdvancedFieldSelector& AddEndsWith(const char* value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }


    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }

    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }


    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotStartsWith() const{ return m_notStartsWith; }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline bool NotStartsWithHasBeenSet() const { return m_notStartsWithHasBeenSet; }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotStartsWith(const Aws::Vector<Aws::String>& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = value; }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotStartsWith(Aws::Vector<Aws::String>&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = std::move(value); }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotStartsWith(const Aws::Vector<Aws::String>& value) { SetNotStartsWith(value); return *this;}

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotStartsWith(Aws::Vector<Aws::String>&& value) { SetNotStartsWith(std::move(value)); return *this;}

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotStartsWith(const Aws::String& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotStartsWith(Aws::String&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(std::move(value)); return *this; }

    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotStartsWith(const char* value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }


    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEndsWith() const{ return m_notEndsWith; }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline bool NotEndsWithHasBeenSet() const { return m_notEndsWithHasBeenSet; }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotEndsWith(const Aws::Vector<Aws::String>& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = value; }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline void SetNotEndsWith(Aws::Vector<Aws::String>&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = std::move(value); }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotEndsWith(const Aws::Vector<Aws::String>& value) { SetNotEndsWith(value); return *this;}

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& WithNotEndsWith(Aws::Vector<Aws::String>&& value) { SetNotEndsWith(std::move(value)); return *this;}

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEndsWith(const Aws::String& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEndsWith(Aws::String&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(std::move(value)); return *this; }

    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline AdvancedFieldSelector& AddNotEndsWith(const char* value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }

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
