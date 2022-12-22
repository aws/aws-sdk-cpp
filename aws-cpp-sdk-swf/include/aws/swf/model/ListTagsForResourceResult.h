/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListTagsForResourceResult
  {
  public:
    AWS_SWF_API ListTagsForResourceResult();
    AWS_SWF_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
