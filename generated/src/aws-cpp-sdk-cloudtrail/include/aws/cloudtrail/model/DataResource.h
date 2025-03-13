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
   * <p>You can configure the <code>DataResource</code> in an
   * <code>EventSelector</code> to log data events for the following three resource
   * types:</p> <ul> <li> <p> <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
   * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
   * <code>AWS::S3::Object</code> </p> </li> </ul> <p>To log data events for all
   * other resource types including objects stored in <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-overview.html">directory
   * buckets</a>, you must use <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_AdvancedEventSelector.html">AdvancedEventSelectors</a>.
   * You must also use <code>AdvancedEventSelectors</code> if you want to filter on
   * the <code>eventName</code> field.</p> <p>Configure the <code>DataResource</code>
   * to specify the resource type and resource ARNs for which you want to log data
   * events.</p>  <p>The total number of allowed data resources is 250. This
   * number can be distributed between 1 and 5 event selectors, but the total cannot
   * exceed 250 across all selectors for the trail.</p>  <p>The following
   * example demonstrates how logging works when you configure logging of all data
   * events for a general purpose bucket named <code>amzn-s3-demo-bucket1</code>. In
   * this example, the CloudTrail user specified an empty prefix, and the option to
   * log both <code>Read</code> and <code>Write</code> data events.</p> <ol> <li>
   * <p>A user uploads an image file to <code>amzn-s3-demo-bucket1</code>.</p> </li>
   * <li> <p>The <code>PutObject</code> API operation is an Amazon S3 object-level
   * API. It is recorded as a data event in CloudTrail. Because the CloudTrail user
   * specified an S3 bucket with an empty prefix, events that occur on any object in
   * that bucket are logged. The trail processes and logs the event.</p> </li> <li>
   * <p>A user uploads an object to an Amazon S3 bucket named
   * <code>arn:aws:s3:::amzn-s3-demo-bucket1</code>.</p> </li> <li> <p>The
   * <code>PutObject</code> API operation occurred for an object in an S3 bucket that
   * the CloudTrail user didn't specify for the trail. The trail doesn’t log the
   * event.</p> </li> </ol> <p>The following example demonstrates how logging works
   * when you configure logging of Lambda data events for a Lambda function named
   * <i>MyLambdaFunction</i>, but not for all Lambda functions.</p> <ol> <li> <p>A
   * user runs a script that includes a call to the <i>MyLambdaFunction</i> function
   * and the <i>MyOtherLambdaFunction</i> function.</p> </li> <li> <p>The
   * <code>Invoke</code> API operation on <i>MyLambdaFunction</i> is an Lambda API.
   * It is recorded as a data event in CloudTrail. Because the CloudTrail user
   * specified logging data events for <i>MyLambdaFunction</i>, any invocations of
   * that function are logged. The trail processes and logs the event.</p> </li> <li>
   * <p>The <code>Invoke</code> API operation on <i>MyOtherLambdaFunction</i> is an
   * Lambda API. Because the CloudTrail user did not specify logging data events for
   * all Lambda functions, the <code>Invoke</code> operation for
   * <i>MyOtherLambdaFunction</i> does not match the function specified for the
   * trail. The trail doesn’t log the event. </p> </li> </ol><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DataResource">AWS
   * API Reference</a></p>
   */
  class DataResource
  {
  public:
    AWS_CLOUDTRAIL_API DataResource() = default;
    AWS_CLOUDTRAIL_API DataResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API DataResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type in which you want to log data events. You can specify the
     * following <i>basic</i> event selector resource types:</p> <ul> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::S3::Object</code> </p> </li> </ul> <p>Additional resource types are
     * available through <i>advanced</i> event selectors. For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_AdvancedEventSelector.html">AdvancedEventSelector</a>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DataResource& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Name (ARN) strings or partial ARN strings for the
     * specified resource type.</p> <ul> <li> <p>To log data events for all objects in
     * all S3 buckets in your Amazon Web Services account, specify the prefix as
     * <code>arn:aws:s3</code>.</p>  <p>This also enables logging of data event
     * activity performed by any user or role in your Amazon Web Services account, even
     * if that activity is performed on a bucket that belongs to another Amazon Web
     * Services account.</p>  </li> <li> <p>To log data events for all objects
     * in an S3 bucket, specify the bucket and an empty object prefix such as
     * <code>arn:aws:s3:::amzn-s3-demo-bucket1/</code>. The trail logs data events for
     * all objects in this S3 bucket.</p> </li> <li> <p>To log data events for specific
     * objects, specify the S3 bucket and object prefix such as
     * <code>arn:aws:s3:::amzn-s3-demo-bucket1/example-images</code>. The trail logs
     * data events for objects in this S3 bucket that match the prefix.</p> </li> <li>
     * <p>To log data events for all Lambda functions in your Amazon Web Services
     * account, specify the prefix as <code>arn:aws:lambda</code>.</p>  <p>This
     * also enables logging of <code>Invoke</code> activity performed by any user or
     * role in your Amazon Web Services account, even if that activity is performed on
     * a function that belongs to another Amazon Web Services account. </p> 
     * </li> <li> <p>To log data events for a specific Lambda function, specify the
     * function ARN.</p>  <p>Lambda function ARNs are exact. For example, if you
     * specify a function ARN
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>, data events
     * will only be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld</i>. They will not
     * be logged for
     * <i>arn:aws:lambda:us-west-2:111111111111:function:helloworld2</i>.</p> 
     * </li> <li> <p>To log data events for all DynamoDB tables in your Amazon Web
     * Services account, specify the prefix as <code>arn:aws:dynamodb</code>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DataResource& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DataResource& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
