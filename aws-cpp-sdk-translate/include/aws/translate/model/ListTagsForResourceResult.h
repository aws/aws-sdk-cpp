/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/Tag.h>
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
namespace Translate
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_TRANSLATE_API ListTagsForResourceResult();
    AWS_TRANSLATE_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the Amazon Translate resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Translate.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
