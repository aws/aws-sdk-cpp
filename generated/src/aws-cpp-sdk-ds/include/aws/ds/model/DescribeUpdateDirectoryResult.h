/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateInfoEntry.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeUpdateDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult();
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline const Aws::Vector<UpdateInfoEntry>& GetUpdateActivities() const{ return m_updateActivities; }

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline void SetUpdateActivities(const Aws::Vector<UpdateInfoEntry>& value) { m_updateActivities = value; }

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline void SetUpdateActivities(Aws::Vector<UpdateInfoEntry>&& value) { m_updateActivities = std::move(value); }

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline DescribeUpdateDirectoryResult& WithUpdateActivities(const Aws::Vector<UpdateInfoEntry>& value) { SetUpdateActivities(value); return *this;}

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline DescribeUpdateDirectoryResult& WithUpdateActivities(Aws::Vector<UpdateInfoEntry>&& value) { SetUpdateActivities(std::move(value)); return *this;}

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline DescribeUpdateDirectoryResult& AddUpdateActivities(const UpdateInfoEntry& value) { m_updateActivities.push_back(value); return *this; }

    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline DescribeUpdateDirectoryResult& AddUpdateActivities(UpdateInfoEntry&& value) { m_updateActivities.push_back(std::move(value)); return *this; }


    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline DescribeUpdateDirectoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline DescribeUpdateDirectoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline DescribeUpdateDirectoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UpdateInfoEntry> m_updateActivities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
