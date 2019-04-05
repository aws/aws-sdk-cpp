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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Tag.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the given Amazon Comprehend resource you
     * are querying.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the Amazon Comprehend resource being queried. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
