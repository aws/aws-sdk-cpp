/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IdMappingTable.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetIdMappingTableResult
  {
  public:
    AWS_CLEANROOMS_API GetIdMappingTableResult() = default;
    AWS_CLEANROOMS_API GetIdMappingTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetIdMappingTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID mapping table that you requested.</p>
     */
    inline const IdMappingTable& GetIdMappingTable() const { return m_idMappingTable; }
    template<typename IdMappingTableT = IdMappingTable>
    void SetIdMappingTable(IdMappingTableT&& value) { m_idMappingTableHasBeenSet = true; m_idMappingTable = std::forward<IdMappingTableT>(value); }
    template<typename IdMappingTableT = IdMappingTable>
    GetIdMappingTableResult& WithIdMappingTable(IdMappingTableT&& value) { SetIdMappingTable(std::forward<IdMappingTableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdMappingTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdMappingTable m_idMappingTable;
    bool m_idMappingTableHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
