/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/DataSource.h>
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
namespace AppSync
{
namespace Model
{
  class GetDataSourceResult
  {
  public:
    AWS_APPSYNC_API GetDataSourceResult();
    AWS_APPSYNC_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>DataSource</code> object.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The <code>DataSource</code> object.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }

    /**
     * <p>The <code>DataSource</code> object.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The <code>DataSource</code> object.</p>
     */
    inline GetDataSourceResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The <code>DataSource</code> object.</p>
     */
    inline GetDataSourceResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DataSource m_dataSource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
