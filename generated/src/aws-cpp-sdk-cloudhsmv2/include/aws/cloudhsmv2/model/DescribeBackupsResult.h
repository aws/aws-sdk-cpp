/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/Backup.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class DescribeBackupsResult
  {
  public:
    AWS_CLOUDHSMV2_API DescribeBackupsResult() = default;
    AWS_CLOUDHSMV2_API DescribeBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API DescribeBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of backups.</p>
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
     * <p>An opaque string that indicates that the response contains only a subset of
     * backups. Use this value in a subsequent <code>DescribeBackups</code> request to
     * get more backups.</p>
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
} // namespace CloudHSMV2
} // namespace Aws
