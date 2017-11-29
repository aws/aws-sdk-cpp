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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API ListTagsResult
  {
  public:
    ListTagsResult();
    ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline ListTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline ListTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline ListTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of <code>Tag</code> objects, each with a tag key and a value.</p>
     */
    inline ListTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline ListTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline ListTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If response is truncated, Amazon SageMaker includes a token in the response.
     * You can use this token in your subsequent request to fetch next set of tokens.
     * </p>
     */
    inline ListTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
