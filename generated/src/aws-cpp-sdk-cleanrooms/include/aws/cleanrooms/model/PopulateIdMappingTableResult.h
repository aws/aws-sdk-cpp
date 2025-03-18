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
    AWS_CLEANROOMS_API PopulateIdMappingTableResult() = default;
    AWS_CLEANROOMS_API PopulateIdMappingTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API PopulateIdMappingTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the mapping job that will populate the ID mapping
     * table.</p>
     */
    inline const Aws::String& GetIdMappingJobId() const { return m_idMappingJobId; }
    template<typename IdMappingJobIdT = Aws::String>
    void SetIdMappingJobId(IdMappingJobIdT&& value) { m_idMappingJobIdHasBeenSet = true; m_idMappingJobId = std::forward<IdMappingJobIdT>(value); }
    template<typename IdMappingJobIdT = Aws::String>
    PopulateIdMappingTableResult& WithIdMappingJobId(IdMappingJobIdT&& value) { SetIdMappingJobId(std::forward<IdMappingJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PopulateIdMappingTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idMappingJobId;
    bool m_idMappingJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
