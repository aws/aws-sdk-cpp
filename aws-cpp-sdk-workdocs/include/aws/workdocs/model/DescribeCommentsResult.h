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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Comment.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API DescribeCommentsResult
  {
  public:
    DescribeCommentsResult();
    DescribeCommentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCommentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const{ return m_comments; }

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline void SetComments(const Aws::Vector<Comment>& value) { m_comments = value; }

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline void SetComments(Aws::Vector<Comment>&& value) { m_comments = std::move(value); }

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline DescribeCommentsResult& WithComments(const Aws::Vector<Comment>& value) { SetComments(value); return *this;}

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline DescribeCommentsResult& WithComments(Aws::Vector<Comment>&& value) { SetComments(std::move(value)); return *this;}

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline DescribeCommentsResult& AddComments(const Comment& value) { m_comments.push_back(value); return *this; }

    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline DescribeCommentsResult& AddComments(Comment&& value) { m_comments.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<Comment> m_comments;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
