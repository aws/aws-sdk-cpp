﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ConfigurationTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeTagsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeTagsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline const Aws::Vector<ConfigurationTag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<ConfigurationTag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<ConfigurationTag>&& value) { m_tags = std::move(value); }
    inline DescribeTagsResult& WithTags(const Aws::Vector<ConfigurationTag>& value) { SetTags(value); return *this;}
    inline DescribeTagsResult& WithTags(Aws::Vector<ConfigurationTag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeTagsResult& AddTags(const ConfigurationTag& value) { m_tags.push_back(value); return *this; }
    inline DescribeTagsResult& AddTags(ConfigurationTag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationTag> m_tags;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
