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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API ListStreamConsumersRequest : public KinesisRequest
  {
  public:
    ListStreamConsumersRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamConsumers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ListStreamConsumersRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ListStreamConsumersRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream for which you want to list the registered
     * consumers. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ListStreamConsumersRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of consumers that are registered with the data stream, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListStreamConsumers</code> to list the next set of registered
     * consumers.</p> <p>Don't specify <code>StreamName</code> or
     * <code>StreamCreationTimestamp</code> if you specify <code>NextToken</code>
     * because the latter unambiguously identifies the stream.</p> <p>You can
     * optionally specify a value for the <code>MaxResults</code> parameter when you
     * specify <code>NextToken</code>. If you specify a <code>MaxResults</code> value
     * that is less than the number of consumers that the operation returns if you
     * don't specify <code>MaxResults</code>, the response will contain a new
     * <code>NextToken</code> value. You can use the new <code>NextToken</code> value
     * in a subsequent call to the <code>ListStreamConsumers</code> operation to list
     * the next set of consumers.</p> <important> <p>Tokens expire after 300 seconds.
     * When you obtain a value for <code>NextToken</code> in the response to a call to
     * <code>ListStreamConsumers</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of consumers that you want a single call of
     * <code>ListStreamConsumers</code> to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of consumers that you want a single call of
     * <code>ListStreamConsumers</code> to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of consumers that you want a single call of
     * <code>ListStreamConsumers</code> to return.</p>
     */
    inline ListStreamConsumersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the consumers for. </p>
     * <p>You can't specify this parameter if you specify the NextToken parameter. </p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const{ return m_streamCreationTimestamp; }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the consumers for. </p>
     * <p>You can't specify this parameter if you specify the NextToken parameter. </p>
     */
    inline void SetStreamCreationTimestamp(const Aws::Utils::DateTime& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = value; }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the consumers for. </p>
     * <p>You can't specify this parameter if you specify the NextToken parameter. </p>
     */
    inline void SetStreamCreationTimestamp(Aws::Utils::DateTime&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = std::move(value); }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the consumers for. </p>
     * <p>You can't specify this parameter if you specify the NextToken parameter. </p>
     */
    inline ListStreamConsumersRequest& WithStreamCreationTimestamp(const Aws::Utils::DateTime& value) { SetStreamCreationTimestamp(value); return *this;}

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the consumers for. </p>
     * <p>You can't specify this parameter if you specify the NextToken parameter. </p>
     */
    inline ListStreamConsumersRequest& WithStreamCreationTimestamp(Aws::Utils::DateTime&& value) { SetStreamCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Utils::DateTime m_streamCreationTimestamp;
    bool m_streamCreationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
