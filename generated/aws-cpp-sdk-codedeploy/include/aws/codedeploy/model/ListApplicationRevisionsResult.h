﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListApplicationRevisions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListApplicationRevisionsResult
  {
  public:
    ListApplicationRevisionsResult();
    ListApplicationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetRevisions(Aws::Vector<RevisionLocation>&& value) { m_revisions = std::move(value); }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& WithRevisions(const Aws::Vector<RevisionLocation>& value) { SetRevisions(value); return *this;}

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& WithRevisions(Aws::Vector<RevisionLocation>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& AddRevisions(const RevisionLocation& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>A list of locations that contain the matching revisions.</p>
     */
    inline ListApplicationRevisionsResult& AddRevisions(RevisionLocation&& value) { m_revisions.push_back(std::move(value)); return *this; }


    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list application revisions call to return the
     * next set of application revisions in the list.</p>
     */
    inline ListApplicationRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RevisionLocation> m_revisions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
