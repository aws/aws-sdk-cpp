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
  class CreateIdMappingTableResult
  {
  public:
    AWS_CLEANROOMS_API CreateIdMappingTableResult();
    AWS_CLEANROOMS_API CreateIdMappingTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateIdMappingTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID mapping table that was created.</p>
     */
    inline const IdMappingTable& GetIdMappingTable() const{ return m_idMappingTable; }
    inline void SetIdMappingTable(const IdMappingTable& value) { m_idMappingTable = value; }
    inline void SetIdMappingTable(IdMappingTable&& value) { m_idMappingTable = std::move(value); }
    inline CreateIdMappingTableResult& WithIdMappingTable(const IdMappingTable& value) { SetIdMappingTable(value); return *this;}
    inline CreateIdMappingTableResult& WithIdMappingTable(IdMappingTable&& value) { SetIdMappingTable(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIdMappingTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIdMappingTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIdMappingTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdMappingTable m_idMappingTable;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
