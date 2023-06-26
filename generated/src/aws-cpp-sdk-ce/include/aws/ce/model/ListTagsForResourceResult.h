﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ResourceTag.h>
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
namespace CostExplorer
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_COSTEXPLORER_API ListTagsForResourceResult();
    AWS_COSTEXPLORER_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTags = value; }

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTags = std::move(value); }

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline ListTagsForResourceResult& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline ListTagsForResourceResult& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline ListTagsForResourceResult& AddResourceTags(const ResourceTag& value) { m_resourceTags.push_back(value); return *this; }

    /**
     * <p>A list of tag key value pairs that are associated with the resource. </p>
     */
    inline ListTagsForResourceResult& AddResourceTags(ResourceTag&& value) { m_resourceTags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceTag> m_resourceTags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
