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
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult();
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeDirectoryDataAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of data access through the Directory Service Data API.</p>
     */
    inline const DataAccessStatus& GetDataAccessStatus() const{ return m_dataAccessStatus; }
    inline void SetDataAccessStatus(const DataAccessStatus& value) { m_dataAccessStatus = value; }
    inline void SetDataAccessStatus(DataAccessStatus&& value) { m_dataAccessStatus = std::move(value); }
    inline DescribeDirectoryDataAccessResult& WithDataAccessStatus(const DataAccessStatus& value) { SetDataAccessStatus(value); return *this;}
    inline DescribeDirectoryDataAccessResult& WithDataAccessStatus(DataAccessStatus&& value) { SetDataAccessStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDirectoryDataAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDirectoryDataAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDirectoryDataAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataAccessStatus m_dataAccessStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
