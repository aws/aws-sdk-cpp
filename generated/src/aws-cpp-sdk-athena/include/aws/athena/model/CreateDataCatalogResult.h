/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/DataCatalog.h>
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
namespace Athena
{
namespace Model
{
  class CreateDataCatalogResult
  {
  public:
    AWS_ATHENA_API CreateDataCatalogResult() = default;
    AWS_ATHENA_API CreateDataCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreateDataCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const DataCatalog& GetDataCatalog() const { return m_dataCatalog; }
    template<typename DataCatalogT = DataCatalog>
    void SetDataCatalog(DataCatalogT&& value) { m_dataCatalogHasBeenSet = true; m_dataCatalog = std::forward<DataCatalogT>(value); }
    template<typename DataCatalogT = DataCatalog>
    CreateDataCatalogResult& WithDataCatalog(DataCatalogT&& value) { SetDataCatalog(std::forward<DataCatalogT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataCatalogResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataCatalog m_dataCatalog;
    bool m_dataCatalogHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
