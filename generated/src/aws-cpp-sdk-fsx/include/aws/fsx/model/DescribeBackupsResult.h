/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Backup.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>Response object for the <code>DescribeBackups</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackupsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeBackupsResult
  {
  public:
    AWS_FSX_API DescribeBackupsResult();
    AWS_FSX_API DescribeBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of backups.</p>
     */
    inline const Aws::Vector<Backup>& GetBackups() const{ return m_backups; }

    /**
     * <p>An array of backups.</p>
     */
    inline void SetBackups(const Aws::Vector<Backup>& value) { m_backups = value; }

    /**
     * <p>An array of backups.</p>
     */
    inline void SetBackups(Aws::Vector<Backup>&& value) { m_backups = std::move(value); }

    /**
     * <p>An array of backups.</p>
     */
    inline DescribeBackupsResult& WithBackups(const Aws::Vector<Backup>& value) { SetBackups(value); return *this;}

    /**
     * <p>An array of backups.</p>
     */
    inline DescribeBackupsResult& WithBackups(Aws::Vector<Backup>&& value) { SetBackups(std::move(value)); return *this;}

    /**
     * <p>An array of backups.</p>
     */
    inline DescribeBackupsResult& AddBackups(const Backup& value) { m_backups.push_back(value); return *this; }

    /**
     * <p>An array of backups.</p>
     */
    inline DescribeBackupsResult& AddBackups(Backup&& value) { m_backups.push_back(std::move(value)); return *this; }


    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Backup> m_backups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
