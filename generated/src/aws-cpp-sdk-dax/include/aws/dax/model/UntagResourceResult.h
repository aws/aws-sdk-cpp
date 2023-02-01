/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/Tag.h>
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
namespace DAX
{
namespace Model
{
  class UntagResourceResult
  {
  public:
    AWS_DAX_API UntagResourceResult();
    AWS_DAX_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline UntagResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline UntagResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline UntagResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys that have been removed from the cluster.</p>
     */
    inline UntagResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
