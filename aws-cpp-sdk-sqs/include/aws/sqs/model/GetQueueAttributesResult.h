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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/QueueAttributeName.h>
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
   * <p>A list of returned queue attributes.</p>
   */
  class AWS_SQS_API GetQueueAttributesResult
  {
  public:
    GetQueueAttributesResult();
    GetQueueAttributesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetQueueAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributes = value; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to the respective values.</p>
     */
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, const char* value) { m_attributes[key] = value; return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetQueueAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetQueueAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Map<QueueAttributeName, Aws::String> m_attributes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws