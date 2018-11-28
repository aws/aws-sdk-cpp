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
   * <p>Response object for <code>DescribeBackups</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackupsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DescribeBackupsResult
  {
  public:
    DescribeBackupsResult();
    DescribeBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Any array of backups.</p>
     */
    inline const Aws::Vector<Backup>& GetBackups() const{ return m_backups; }

    /**
     * <p>Any array of backups.</p>
     */
    inline void SetBackups(const Aws::Vector<Backup>& value) { m_backups = value; }

    /**
     * <p>Any array of backups.</p>
     */
    inline void SetBackups(Aws::Vector<Backup>&& value) { m_backups = std::move(value); }

    /**
     * <p>Any array of backups.</p>
     */
    inline DescribeBackupsResult& WithBackups(const Aws::Vector<Backup>& value) { SetBackups(value); return *this;}

    /**
     * <p>Any array of backups.</p>
     */
    inline DescribeBackupsResult& WithBackups(Aws::Vector<Backup>&& value) { SetBackups(std::move(value)); return *this;}

    /**
     * <p>Any array of backups.</p>
     */
    inline DescribeBackupsResult& AddBackups(const Backup& value) { m_backups.push_back(value); return *this; }

    /**
     * <p>Any array of backups.</p>
     */
    inline DescribeBackupsResult& AddBackups(Backup&& value) { m_backups.push_back(std::move(value)); return *this; }


    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This is present if there are more backups than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the backups. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Backup> m_backups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
