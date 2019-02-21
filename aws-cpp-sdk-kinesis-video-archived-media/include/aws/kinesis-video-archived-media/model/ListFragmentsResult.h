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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/Fragment.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API ListFragmentsResult
  {
  public:
    ListFragmentsResult();
    ListFragmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFragmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline const Aws::Vector<Fragment>& GetFragments() const{ return m_fragments; }

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline void SetFragments(const Aws::Vector<Fragment>& value) { m_fragments = value; }

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline void SetFragments(Aws::Vector<Fragment>&& value) { m_fragments = std::move(value); }

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline ListFragmentsResult& WithFragments(const Aws::Vector<Fragment>& value) { SetFragments(value); return *this;}

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline ListFragmentsResult& WithFragments(Aws::Vector<Fragment>&& value) { SetFragments(std::move(value)); return *this;}

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline ListFragmentsResult& AddFragments(const Fragment& value) { m_fragments.push_back(value); return *this; }

    /**
     * <p>A list of archived <a>Fragment</a> objects from the stream that meet the
     * selector criteria. Results are in no specific order, even across pages.</p>
     */
    inline ListFragmentsResult& AddFragments(Fragment&& value) { m_fragments.push_back(std::move(value)); return *this; }


    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline ListFragmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline ListFragmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the returned list is truncated, the operation returns this token to use to
     * retrieve the next page of results. This value is <code>null</code> when there
     * are no more results to return.</p>
     */
    inline ListFragmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Fragment> m_fragments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
