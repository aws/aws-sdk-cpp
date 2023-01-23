/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/Archive.h>
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
namespace EventBridge
{
namespace Model
{
  class ListArchivesResult
  {
  public:
    AWS_EVENTBRIDGE_API ListArchivesResult();
    AWS_EVENTBRIDGE_API ListArchivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListArchivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline const Aws::Vector<Archive>& GetArchives() const{ return m_archives; }

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline void SetArchives(const Aws::Vector<Archive>& value) { m_archives = value; }

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline void SetArchives(Aws::Vector<Archive>&& value) { m_archives = std::move(value); }

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline ListArchivesResult& WithArchives(const Aws::Vector<Archive>& value) { SetArchives(value); return *this;}

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline ListArchivesResult& WithArchives(Aws::Vector<Archive>&& value) { SetArchives(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline ListArchivesResult& AddArchives(const Archive& value) { m_archives.push_back(value); return *this; }

    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline ListArchivesResult& AddArchives(Archive&& value) { m_archives.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListArchivesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListArchivesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListArchivesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Archive> m_archives;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
