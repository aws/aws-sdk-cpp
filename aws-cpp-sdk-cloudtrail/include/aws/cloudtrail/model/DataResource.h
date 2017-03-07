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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>The Amazon S3 objects that you specify in your event selectors for your trail
   * to log data events. Data events are object-level API operations that access S3
   * objects, such as <code>GetObject</code>, <code>DeleteObject</code>, and
   * <code>PutObject</code>. You can specify up to 250 S3 buckets and object prefixes
   * for a trail. </p> <p>Example</p> <ol> <li> <p>You create an event selector for a
   * trail and specify an S3 bucket and an empty prefix, such as
   * <code>arn:aws:s3:::bucket-1/</code>.</p> </li> <li> <p>You upload an image file
   * to <code>bucket-1</code>.</p> </li> <li> <p>The <code>PutObject</code> API
   * operation occurs on an object in the S3 bucket that you specified in the event
   * selector. The trail processes and logs the event.</p> </li> <li> <p>You upload
   * another image file to a different S3 bucket named
   * <code>arn:aws:s3:::bucket-2</code>.</p> </li> <li> <p>The event occurs on an
   * object in an S3 bucket that you didn't specify in the event selector. The trail
   * doesn’t log the event.</p> </li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DataResource">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API DataResource
  {
  public:
    DataResource();
    DataResource(const Aws::Utils::Json::JsonValue& jsonValue);
    DataResource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline DataResource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline DataResource& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The resource type in which you want to log data events. You can specify only
     * the following value: <code>AWS::S3::Object</code>.</p>
     */
    inline DataResource& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline DataResource& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline DataResource& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(value); return *this;}

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline DataResource& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
     */
    inline DataResource& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of ARN-like strings for the specified S3 objects.</p> <p>To log data
     * events for all objects in an S3 bucket, specify the bucket and an empty object
     * prefix such as <code>arn:aws:s3:::bucket-1/</code>. The trail logs data events
     * for all objects in this S3 bucket.</p> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::bucket-1/example-images</code>. The trail logs data events
     * for objects in this S3 bucket that match the prefix.</p>
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
