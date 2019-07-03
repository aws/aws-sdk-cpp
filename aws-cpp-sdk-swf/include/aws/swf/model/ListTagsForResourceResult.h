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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/ResourceTag.h>
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
namespace SWF
{
namespace Model
{
  class AWS_SWF_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline void SetTags(const Aws::Vector<ResourceTag>& value) { m_tags = value; }

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline void SetTags(Aws::Vector<ResourceTag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<ResourceTag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<ResourceTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline ListTagsForResourceResult& AddTags(const ResourceTag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags associated with the domain.</p>
     */
    inline ListTagsForResourceResult& AddTags(ResourceTag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceTag> m_tags;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
