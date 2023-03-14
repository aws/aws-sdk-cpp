/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataCellsFilter.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetDataCellsFilterResult
  {
  public:
    AWS_LAKEFORMATION_API GetDataCellsFilterResult();
    AWS_LAKEFORMATION_API GetDataCellsFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetDataCellsFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline const DataCellsFilter& GetDataCellsFilter() const{ return m_dataCellsFilter; }

    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline void SetDataCellsFilter(const DataCellsFilter& value) { m_dataCellsFilter = value; }

    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline void SetDataCellsFilter(DataCellsFilter&& value) { m_dataCellsFilter = std::move(value); }

    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline GetDataCellsFilterResult& WithDataCellsFilter(const DataCellsFilter& value) { SetDataCellsFilter(value); return *this;}

    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline GetDataCellsFilterResult& WithDataCellsFilter(DataCellsFilter&& value) { SetDataCellsFilter(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataCellsFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataCellsFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataCellsFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DataCellsFilter m_dataCellsFilter;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
