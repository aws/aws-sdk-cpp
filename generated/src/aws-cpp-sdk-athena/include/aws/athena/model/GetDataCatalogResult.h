/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/DataCatalog.h>
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
  class GetDataCatalogResult
  {
  public:
    AWS_ATHENA_API GetDataCatalogResult();
    AWS_ATHENA_API GetDataCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetDataCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data catalog returned.</p>
     */
    inline const DataCatalog& GetDataCatalog() const{ return m_dataCatalog; }

    /**
     * <p>The data catalog returned.</p>
     */
    inline void SetDataCatalog(const DataCatalog& value) { m_dataCatalog = value; }

    /**
     * <p>The data catalog returned.</p>
     */
    inline void SetDataCatalog(DataCatalog&& value) { m_dataCatalog = std::move(value); }

    /**
     * <p>The data catalog returned.</p>
     */
    inline GetDataCatalogResult& WithDataCatalog(const DataCatalog& value) { SetDataCatalog(value); return *this;}

    /**
     * <p>The data catalog returned.</p>
     */
    inline GetDataCatalogResult& WithDataCatalog(DataCatalog&& value) { SetDataCatalog(std::move(value)); return *this;}

  private:

    DataCatalog m_dataCatalog;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
