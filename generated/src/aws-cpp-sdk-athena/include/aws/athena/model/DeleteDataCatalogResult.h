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
  class DeleteDataCatalogResult
  {
  public:
    AWS_ATHENA_API DeleteDataCatalogResult();
    AWS_ATHENA_API DeleteDataCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API DeleteDataCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const DataCatalog& GetDataCatalog() const{ return m_dataCatalog; }
    inline void SetDataCatalog(const DataCatalog& value) { m_dataCatalog = value; }
    inline void SetDataCatalog(DataCatalog&& value) { m_dataCatalog = std::move(value); }
    inline DeleteDataCatalogResult& WithDataCatalog(const DataCatalog& value) { SetDataCatalog(value); return *this;}
    inline DeleteDataCatalogResult& WithDataCatalog(DataCatalog&& value) { SetDataCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDataCatalogResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDataCatalogResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDataCatalogResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataCatalog m_dataCatalog;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
