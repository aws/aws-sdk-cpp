/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
  class PopulateIdMappingTableResult
  {
  public:
    AWS_CLEANROOMS_API PopulateIdMappingTableResult();
    AWS_CLEANROOMS_API PopulateIdMappingTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API PopulateIdMappingTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the mapping job that will populate the ID mapping
     * table.</p>
     */
    inline const Aws::String& GetIdMappingJobId() const{ return m_idMappingJobId; }
    inline void SetIdMappingJobId(const Aws::String& value) { m_idMappingJobId = value; }
    inline void SetIdMappingJobId(Aws::String&& value) { m_idMappingJobId = std::move(value); }
    inline void SetIdMappingJobId(const char* value) { m_idMappingJobId.assign(value); }
    inline PopulateIdMappingTableResult& WithIdMappingJobId(const Aws::String& value) { SetIdMappingJobId(value); return *this;}
    inline PopulateIdMappingTableResult& WithIdMappingJobId(Aws::String&& value) { SetIdMappingJobId(std::move(value)); return *this;}
    inline PopulateIdMappingTableResult& WithIdMappingJobId(const char* value) { SetIdMappingJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PopulateIdMappingTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PopulateIdMappingTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PopulateIdMappingTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_idMappingJobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
