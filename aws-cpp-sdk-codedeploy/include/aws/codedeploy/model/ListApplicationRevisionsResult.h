﻿/*
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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>

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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a list application revisions
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListApplicationRevisionsResult
  {
  public:
    ListApplicationRevisionsResult();
    ListApplicationRevisionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationRevisionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline const Aws::Vector<RevisionLocation>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline void SetRevisions(const Aws::Vector<RevisionLocation>& value) { m_revisions = value; }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline void SetRevisions(Aws::Vector<RevisionLocation>&& value) { m_revisions = value; }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& WithRevisions(const Aws::Vector<RevisionLocation>& value) { SetRevisions(value); return *this;}

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& WithRevisions(Aws::Vector<RevisionLocation>&& value) { SetRevisions(value); return *this;}

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& AddRevisions(const RevisionLocation& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& AddRevisions(RevisionLocation&& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier will also be
     * returned. It can be used in a subsequent list application revisions call to
     * return the next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<RevisionLocation> m_revisions;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
