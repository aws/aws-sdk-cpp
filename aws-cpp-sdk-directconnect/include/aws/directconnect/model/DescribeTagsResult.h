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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/ResourceTag.h>

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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>The response received when DescribeTags is called.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTagsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeTagsResult
  {
  public:
    DescribeTagsResult();
    DescribeTagsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTagsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the tags.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>Information about the tags.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTags = value; }

    /**
     * <p>Information about the tags.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTags = value; }

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& AddResourceTags(const ResourceTag& value) { m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& AddResourceTags(ResourceTag&& value) { m_resourceTags.push_back(value); return *this; }

  private:
    Aws::Vector<ResourceTag> m_resourceTags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
