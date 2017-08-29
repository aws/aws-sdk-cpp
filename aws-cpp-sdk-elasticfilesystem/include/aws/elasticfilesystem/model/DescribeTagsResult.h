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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Tag.h>
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
namespace EFS
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeTagsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API DescribeTagsResult
  {
  public:
    DescribeTagsResult();
    DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeTagsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeTagsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the request included a <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeTagsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline DescribeTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline DescribeTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline DescribeTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Returns tags associated with the file system as an array of <code>Tag</code>
     * objects. </p>
     */
    inline DescribeTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline DescribeTagsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline DescribeTagsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If a value is present, there are more tags to return. In a subsequent
     * request, you can provide the value of <code>NextMarker</code> as the value of
     * the <code>Marker</code> parameter in your next request to retrieve the next set
     * of tags.</p>
     */
    inline DescribeTagsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
