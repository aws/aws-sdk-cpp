/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQuery.h>
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
  class UpdateProtectedQueryResult
  {
  public:
    AWS_CLEANROOMS_API UpdateProtectedQueryResult() = default;
    AWS_CLEANROOMS_API UpdateProtectedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateProtectedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The protected query output.</p>
     */
    inline const ProtectedQuery& GetProtectedQuery() const { return m_protectedQuery; }
    template<typename ProtectedQueryT = ProtectedQuery>
    void SetProtectedQuery(ProtectedQueryT&& value) { m_protectedQueryHasBeenSet = true; m_protectedQuery = std::forward<ProtectedQueryT>(value); }
    template<typename ProtectedQueryT = ProtectedQuery>
    UpdateProtectedQueryResult& WithProtectedQuery(ProtectedQueryT&& value) { SetProtectedQuery(std::forward<ProtectedQueryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProtectedQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProtectedQuery m_protectedQuery;
    bool m_protectedQueryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
