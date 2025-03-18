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
    AWS_FSX_API DescribeBackupsResult() = default;
    AWS_FSX_API DescribeBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of backups.</p>
     */
    inline const Aws::Vector<Backup>& GetBackups() const { return m_backups; }
    template<typename BackupsT = Aws::Vector<Backup>>
    void SetBackups(BackupsT&& value) { m_backupsHasBeenSet = true; m_backups = std::forward<BackupsT>(value); }
    template<typename BackupsT = Aws::Vector<Backup>>
    DescribeBackupsResult& WithBackups(BackupsT&& value) { SetBackups(std::forward<BackupsT>(value)); return *this;}
    template<typename BackupsT = Backup>
    DescribeBackupsResult& AddBackups(BackupsT&& value) { m_backupsHasBeenSet = true; m_backups.emplace_back(std::forward<BackupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>NextToken</code> value is present if there are more backups than
     * returned in the response. You can use the <code>NextToken</code> value in the
     * subsequent request to fetch the backups. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBackupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBackupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Backup> m_backups;
    bool m_backupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
