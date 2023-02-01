/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsm/model/Tag.h>
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
namespace CloudHSM
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_CLOUDHSM_API ListTagsForResourceResult();
    AWS_CLOUDHSM_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline ListTagsForResourceResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ListTagsForResourceResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ListTagsForResourceResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline ListTagsForResourceResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tagList;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
