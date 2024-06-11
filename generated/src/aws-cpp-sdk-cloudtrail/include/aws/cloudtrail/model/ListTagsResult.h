﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ResourceTag.h>
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
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTagsResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListTagsResult();
    AWS_CLOUDTRAIL_API ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of resource tags.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTagList() const{ return m_resourceTagList; }
    inline void SetResourceTagList(const Aws::Vector<ResourceTag>& value) { m_resourceTagList = value; }
    inline void SetResourceTagList(Aws::Vector<ResourceTag>&& value) { m_resourceTagList = std::move(value); }
    inline ListTagsResult& WithResourceTagList(const Aws::Vector<ResourceTag>& value) { SetResourceTagList(value); return *this;}
    inline ListTagsResult& WithResourceTagList(Aws::Vector<ResourceTag>&& value) { SetResourceTagList(std::move(value)); return *this;}
    inline ListTagsResult& AddResourceTagList(const ResourceTag& value) { m_resourceTagList.push_back(value); return *this; }
    inline ListTagsResult& AddResourceTagList(ResourceTag&& value) { m_resourceTagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceTag> m_resourceTagList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
