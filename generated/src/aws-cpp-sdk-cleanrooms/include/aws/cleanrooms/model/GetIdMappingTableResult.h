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
    AWS_CLEANROOMS_API GetIdMappingTableResult();
    AWS_CLEANROOMS_API GetIdMappingTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetIdMappingTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID mapping table that you requested.</p>
     */
    inline const IdMappingTable& GetIdMappingTable() const{ return m_idMappingTable; }
    inline void SetIdMappingTable(const IdMappingTable& value) { m_idMappingTable = value; }
    inline void SetIdMappingTable(IdMappingTable&& value) { m_idMappingTable = std::move(value); }
    inline GetIdMappingTableResult& WithIdMappingTable(const IdMappingTable& value) { SetIdMappingTable(value); return *this;}
    inline GetIdMappingTableResult& WithIdMappingTable(IdMappingTable&& value) { SetIdMappingTable(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdMappingTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdMappingTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdMappingTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdMappingTable m_idMappingTable;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
