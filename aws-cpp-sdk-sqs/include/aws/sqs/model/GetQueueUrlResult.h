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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{
  /**
   * <p>For more information, see <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/UnderstandingResponses.html">Responses</a>
   * in the <i>Amazon SQS Developer Guide</i>.</p>
   */
  class AWS_SQS_API GetQueueUrlResult
  {
  public:
    GetQueueUrlResult();
    GetQueueUrlResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetQueueUrlResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The URL for the queue.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL for the queue.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrl = value; }

    /**
     * <p>The URL for the queue.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrl = value; }

    /**
     * <p>The URL for the queue.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrl.assign(value); }

    /**
     * <p>The URL for the queue.</p>
     */
    inline GetQueueUrlResult& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL for the queue.</p>
     */
    inline GetQueueUrlResult& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL for the queue.</p>
     */
    inline GetQueueUrlResult& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetQueueUrlResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetQueueUrlResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_queueUrl;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws