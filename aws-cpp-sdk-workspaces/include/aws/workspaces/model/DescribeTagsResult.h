/*
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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>

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
namespace WorkSpaces
{
namespace Model
{
  /**
   * <p>The result of the <a>DescribeTags</a> operation.</p>
   */
  class AWS_WORKSPACES_API DescribeTagsResult
  {
  public:
    DescribeTagsResult();
    DescribeTagsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTagsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>The list of tags.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = value; }

    /**
     * <p>The list of tags.</p>
     */
    inline DescribeTagsResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags.</p>
     */
    inline DescribeTagsResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags.</p>
     */
    inline DescribeTagsResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags.</p>
     */
    inline DescribeTagsResult& AddTagList(Tag&& value) { m_tagList.push_back(value); return *this; }

  private:
    Aws::Vector<Tag> m_tagList;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
