/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DataAccessStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeDirectoryDataAccessResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of data access through the Directory Service Data API.</p>
     */
    inline DataAccessStatus GetDataAccessStatus() const { return m_dataAccessStatus; }
    inline void SetDataAccessStatus(DataAccessStatus value) { m_dataAccessStatusHasBeenSet = true; m_dataAccessStatus = value; }
    inline DescribeDirectoryDataAccessResult& WithDataAccessStatus(DataAccessStatus value) { SetDataAccessStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectoryDataAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataAccessStatus m_dataAccessStatus{DataAccessStatus::NOT_SET};
    bool m_dataAccessStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
