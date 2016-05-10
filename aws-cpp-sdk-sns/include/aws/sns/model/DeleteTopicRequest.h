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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class AWS_SNS_API DeleteTopicRequest : public SNSRequest
  {
  public:
    DeleteTopicRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline DeleteTopicRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline DeleteTopicRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic you want to delete.</p>
<examples>
 <queryrequest>

 
     * http://sns.us-east-1.amazonaws.com/
 
     * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
     * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
     * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
     * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
     * &amp;Signature=DjHBa%2BbYCKQAzctOPnLP7MbHnrHT3%2FK3kFEZjwcf9%2FU%3D


     * </queryrequest>
 <queryresponse>
  
&lt;DeleteTopicResponse
     * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

     * &lt;RequestId&gt;fba800b9-3765-11df-8cf3-c58c53254dfb&lt;/RequestId&gt;
 
     * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;
  

     * </queryresponse>
</examples>
     */
    inline DeleteTopicRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
