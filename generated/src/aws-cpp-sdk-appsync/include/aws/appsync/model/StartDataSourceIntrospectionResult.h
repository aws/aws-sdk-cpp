/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceIntrospectionStatus.h>
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
  class StartDataSourceIntrospectionResult
  {
  public:
    AWS_APPSYNC_API StartDataSourceIntrospectionResult();
    AWS_APPSYNC_API StartDataSourceIntrospectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API StartDataSourceIntrospectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline const Aws::String& GetIntrospectionId() const{ return m_introspectionId; }

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline void SetIntrospectionId(const Aws::String& value) { m_introspectionId = value; }

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline void SetIntrospectionId(Aws::String&& value) { m_introspectionId = std::move(value); }

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline void SetIntrospectionId(const char* value) { m_introspectionId.assign(value); }

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionId(const Aws::String& value) { SetIntrospectionId(value); return *this;}

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionId(Aws::String&& value) { SetIntrospectionId(std::move(value)); return *this;}

    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionId(const char* value) { SetIntrospectionId(value); return *this;}


    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline const DataSourceIntrospectionStatus& GetIntrospectionStatus() const{ return m_introspectionStatus; }

    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline void SetIntrospectionStatus(const DataSourceIntrospectionStatus& value) { m_introspectionStatus = value; }

    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline void SetIntrospectionStatus(DataSourceIntrospectionStatus&& value) { m_introspectionStatus = std::move(value); }

    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatus(const DataSourceIntrospectionStatus& value) { SetIntrospectionStatus(value); return *this;}

    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatus(DataSourceIntrospectionStatus&& value) { SetIntrospectionStatus(std::move(value)); return *this;}


    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline const Aws::String& GetIntrospectionStatusDetail() const{ return m_introspectionStatusDetail; }

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline void SetIntrospectionStatusDetail(const Aws::String& value) { m_introspectionStatusDetail = value; }

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline void SetIntrospectionStatusDetail(Aws::String&& value) { m_introspectionStatusDetail = std::move(value); }

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline void SetIntrospectionStatusDetail(const char* value) { m_introspectionStatusDetail.assign(value); }

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatusDetail(const Aws::String& value) { SetIntrospectionStatusDetail(value); return *this;}

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatusDetail(Aws::String&& value) { SetIntrospectionStatusDetail(std::move(value)); return *this;}

    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatusDetail(const char* value) { SetIntrospectionStatusDetail(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDataSourceIntrospectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDataSourceIntrospectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDataSourceIntrospectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_introspectionId;

    DataSourceIntrospectionStatus m_introspectionStatus;

    Aws::String m_introspectionStatusDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
