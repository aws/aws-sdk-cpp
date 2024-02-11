/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DataProvider.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class ModifyDataProviderResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataProviderResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data provider that was modified.</p>
     */
    inline const DataProvider& GetDataProvider() const{ return m_dataProvider; }

    /**
     * <p>The data provider that was modified.</p>
     */
    inline void SetDataProvider(const DataProvider& value) { m_dataProvider = value; }

    /**
     * <p>The data provider that was modified.</p>
     */
    inline void SetDataProvider(DataProvider&& value) { m_dataProvider = std::move(value); }

    /**
     * <p>The data provider that was modified.</p>
     */
    inline ModifyDataProviderResult& WithDataProvider(const DataProvider& value) { SetDataProvider(value); return *this;}

    /**
     * <p>The data provider that was modified.</p>
     */
    inline ModifyDataProviderResult& WithDataProvider(DataProvider&& value) { SetDataProvider(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyDataProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyDataProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyDataProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DataProvider m_dataProvider;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
