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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/Topic.h>

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
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for ListTopics action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTopicsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API ListTopicsResult
  {
  public:
    ListTopicsResult();
    ListTopicsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTopicsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const{ return m_topics; }

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline void SetTopics(const Aws::Vector<Topic>& value) { m_topics = value; }

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline void SetTopics(Aws::Vector<Topic>&& value) { m_topics = value; }

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline ListTopicsResult& WithTopics(const Aws::Vector<Topic>& value) { SetTopics(value); return *this;}

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline ListTopicsResult& WithTopics(Aws::Vector<Topic>&& value) { SetTopics(value); return *this;}

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline ListTopicsResult& AddTopics(const Topic& value) { m_topics.push_back(value); return *this; }

    /**
     * <p>A list of topic ARNs.</p>
     */
    inline ListTopicsResult& AddTopics(Topic&& value) { m_topics.push_back(value); return *this; }

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline ListTopicsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline ListTopicsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListTopics</code> request. This element
     * is returned if there are additional topics to retrieve.</p>
     */
    inline ListTopicsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListTopicsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListTopicsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Topic> m_topics;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws