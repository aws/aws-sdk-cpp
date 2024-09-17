/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceIntrospectionStatus.h>
#include <aws/appsync/model/DataSourceIntrospectionResult.h>
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
namespace AppSync
{
namespace Model
{
  class GetDataSourceIntrospectionResult
  {
  public:
    AWS_APPSYNC_API GetDataSourceIntrospectionResult();
    AWS_APPSYNC_API GetDataSourceIntrospectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetDataSourceIntrospectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline const Aws::String& GetIntrospectionId() const{ return m_introspectionId; }
    inline void SetIntrospectionId(const Aws::String& value) { m_introspectionId = value; }
    inline void SetIntrospectionId(Aws::String&& value) { m_introspectionId = std::move(value); }
    inline void SetIntrospectionId(const char* value) { m_introspectionId.assign(value); }
    inline GetDataSourceIntrospectionResult& WithIntrospectionId(const Aws::String& value) { SetIntrospectionId(value); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionId(Aws::String&& value) { SetIntrospectionId(std::move(value)); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionId(const char* value) { SetIntrospectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the introspection during retrieval. By default, when a new
     * instrospection is being retrieved, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline const DataSourceIntrospectionStatus& GetIntrospectionStatus() const{ return m_introspectionStatus; }
    inline void SetIntrospectionStatus(const DataSourceIntrospectionStatus& value) { m_introspectionStatus = value; }
    inline void SetIntrospectionStatus(DataSourceIntrospectionStatus&& value) { m_introspectionStatus = std::move(value); }
    inline GetDataSourceIntrospectionResult& WithIntrospectionStatus(const DataSourceIntrospectionStatus& value) { SetIntrospectionStatus(value); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionStatus(DataSourceIntrospectionStatus&& value) { SetIntrospectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline const Aws::String& GetIntrospectionStatusDetail() const{ return m_introspectionStatusDetail; }
    inline void SetIntrospectionStatusDetail(const Aws::String& value) { m_introspectionStatusDetail = value; }
    inline void SetIntrospectionStatusDetail(Aws::String&& value) { m_introspectionStatusDetail = std::move(value); }
    inline void SetIntrospectionStatusDetail(const char* value) { m_introspectionStatusDetail.assign(value); }
    inline GetDataSourceIntrospectionResult& WithIntrospectionStatusDetail(const Aws::String& value) { SetIntrospectionStatusDetail(value); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionStatusDetail(Aws::String&& value) { SetIntrospectionStatusDetail(std::move(value)); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionStatusDetail(const char* value) { SetIntrospectionStatusDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DataSourceIntrospectionResult</code> object data.</p>
     */
    inline const DataSourceIntrospectionResult& GetIntrospectionResult() const{ return m_introspectionResult; }
    inline void SetIntrospectionResult(const DataSourceIntrospectionResult& value) { m_introspectionResult = value; }
    inline void SetIntrospectionResult(DataSourceIntrospectionResult&& value) { m_introspectionResult = std::move(value); }
    inline GetDataSourceIntrospectionResult& WithIntrospectionResult(const DataSourceIntrospectionResult& value) { SetIntrospectionResult(value); return *this;}
    inline GetDataSourceIntrospectionResult& WithIntrospectionResult(DataSourceIntrospectionResult&& value) { SetIntrospectionResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSourceIntrospectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSourceIntrospectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSourceIntrospectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_introspectionId;

    DataSourceIntrospectionStatus m_introspectionStatus;

    Aws::String m_introspectionStatusDetail;

    DataSourceIntrospectionResult m_introspectionResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
