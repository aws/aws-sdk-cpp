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
  class DeleteDataProviderResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteDataProviderResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DeleteDataProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteDataProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data provider that was deleted.</p>
     */
    inline const DataProvider& GetDataProvider() const { return m_dataProvider; }
    template<typename DataProviderT = DataProvider>
    void SetDataProvider(DataProviderT&& value) { m_dataProviderHasBeenSet = true; m_dataProvider = std::forward<DataProviderT>(value); }
    template<typename DataProviderT = DataProvider>
    DeleteDataProviderResult& WithDataProvider(DataProviderT&& value) { SetDataProvider(std::forward<DataProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDataProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataProvider m_dataProvider;
    bool m_dataProviderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
