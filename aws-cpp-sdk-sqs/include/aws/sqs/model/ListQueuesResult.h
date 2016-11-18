﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>A list of your queues.</p>
   */
  class AWS_SQS_API ListQueuesResult
  {
  public:
    ListQueuesResult();
    ListQueuesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListQueuesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueUrls() const{ return m_queueUrls; }

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline void SetQueueUrls(const Aws::Vector<Aws::String>& value) { m_queueUrls = value; }

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline void SetQueueUrls(Aws::Vector<Aws::String>&& value) { m_queueUrls = value; }

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline ListQueuesResult& WithQueueUrls(const Aws::Vector<Aws::String>& value) { SetQueueUrls(value); return *this;}

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline ListQueuesResult& WithQueueUrls(Aws::Vector<Aws::String>&& value) { SetQueueUrls(value); return *this;}

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline ListQueuesResult& AddQueueUrls(const Aws::String& value) { m_queueUrls.push_back(value); return *this; }

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline ListQueuesResult& AddQueueUrls(Aws::String&& value) { m_queueUrls.push_back(value); return *this; }

    /**
     * <p>A list of queue URLs, up to 1000 entries.</p>
     */
    inline ListQueuesResult& AddQueueUrls(const char* value) { m_queueUrls.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListQueuesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListQueuesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_queueUrls;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws