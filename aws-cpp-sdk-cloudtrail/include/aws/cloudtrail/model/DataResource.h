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
   * <p>The Amazon S3 buckets or AWS Lambda functions that you specify in your event
   * selectors for your trail to log data events. Data events provide insight into
   * the resource operations performed on or within a resource itself. These are also
   * known as data plane operations. You can specify up to 250 data resources for a
   * trail.</p> <note> <p>The total number of allowed data resources is 250. This
   * number can be distributed between 1 and 5 event selectors, but the total cannot
   * exceed 250 across all selectors.</p> </note> <p>The following example
   * demonstrates how logging works when you configure logging of all data events for
   * an S3 bucket named <code>bucket-1</code>. In this example, the CloudTrail user
   * spcified an empty prefix, and the option to log both <code>Read</code> and
   * <code>Write</code> data events.</p> <ol> <li> <p>A user uploads an image file to
   * <code>bucket-1</code>.</p> </li> <li> <p>The <code>PutObject</code> API
   * operation is an Amazon S3 object-level API. It is recorded as a data event in
   * CloudTrail. Because the CloudTrail user specified an S3 bucket with an empty
   * prefix, events that occur on any object in that bucket are logged. The trail
   * processes and logs the event.</p> </li> <li> <p>A user uploads an object to an
   * Amazon S3 bucket named <code>arn:aws:s3:::bucket-2</code>.</p> </li> <li> <p>The
   * <code>PutObject</code> API operation occurred for an object in an S3 bucket that
   * the CloudTrail user didn't specify for the trail. The trail doesn’t log the
   * event.</p> </li> </ol> <p>The following example demonstrates how logging works
   * when you configure logging of AWS Lambda data events for a Lambda function named
   * <i>MyLambdaFunction</i>, but not for all AWS Lambda functions.</p> <ol> <li>
   * <p>A user runs a script that includes a call to the <i>MyLambdaFunction</i>
   * function and the <i>MyOtherLambdaFunction</i> function.</p> </li> <li> <p>The
   * <code>Invoke</code> API operation on <i>MyLambdaFunction</i> is an AWS Lambda
   * API. It is recorded as a data event in CloudTrail. Because the CloudTrail user
   * specified logging data events for <i>MyLambdaFunction</i>, any invocations of
   * that function are logged. The trail processes and logs the event. </p> </li>
   * <li> <p>The <code>Invoke</code> API operation on <i>MyOtherLambdaFunction</i> is
   * an AWS Lambda API. Because the CloudTrail user did not specify logging data
   * events for all Lambda functions, the <code>Invoke</code> operation for
   * <i>MyOtherLambdaFunction</i> does not match the function specified for the
   * trail. The trail doesn’t log the event. </p> </li> </ol><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DataResource">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API DataResource
  {
  public:
    DataResource();
    DataResource(Aws::Utils::Json::JsonView jsonValue);
    DataResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline DataResource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline DataResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The resource type in which you want to log data events. You can specify
     * <code>AWS::S3::Object</code> or <code>AWS::Lambda::Function</code>
     * resources.</p>
     */
    inline DataResource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline DataResource& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline DataResource& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline DataResource& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline DataResource& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified objects.</p> <ul> <li> <p>To log data events for all objects in all S3
     * buckets in your AWS account, specify the prefix as <code>arn:aws:s3:::</code>.
     * </p> <note> <p>This will also enable logging of data event activity performed by
     * any user or role in your AWS account, even if that activity is performed on a
     * bucket that belongs to another AWS account. </p> </note> </li> <li> <p>To log
     * data events for all objects in all S3 buckets that include <i>my-bucket</i> in
     * their names, specify the prefix as <code>aws:s3:::my-bucket</code>. The trail
     * logs data events for all objects in all buckets whose name contains a match for
     * <i>my-bucket</i>. </p> </li> <li> <p>To log data events for all objects in an S3
     * bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events for all objects
     * in this S3 bucket.</p> </li> <li> <p>To log data events for specific objects,
     * specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p> </li> <li> <p>To log
     * data events for all functions in your AWS account, specify the prefix as
     * <code>arn:aws:lambda</code>.</p> <note> <p>This will also enable logging of
     * <code>Invoke</code> activity performed by any user or role in your AWS account,
     * even if that activity is performed on a function that belongs to another AWS
     * account. </p> </note> </li> <li> <p>To log data eents for a specific Lambda
     * function, specify the function ARN.</p> <note> <p>Lambda function ARNs are
     * exact. Unlike S3, you cannot use matching. For example, if you specify a
     * function ARN <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>,
     * data events will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> </note>
     * </li> </ul>
     */
    inline DataResource& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
