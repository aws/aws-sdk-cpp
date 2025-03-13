/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/StoredQuery.h>
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
namespace ConfigService
{
namespace Model
{
  class GetStoredQueryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetStoredQueryResult() = default;
    AWS_CONFIGSERVICE_API GetStoredQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetStoredQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline const StoredQuery& GetStoredQuery() const { return m_storedQuery; }
    template<typename StoredQueryT = StoredQuery>
    void SetStoredQuery(StoredQueryT&& value) { m_storedQueryHasBeenSet = true; m_storedQuery = std::forward<StoredQueryT>(value); }
    template<typename StoredQueryT = StoredQuery>
    GetStoredQueryResult& WithStoredQuery(StoredQueryT&& value) { SetStoredQuery(std::forward<StoredQueryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStoredQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StoredQuery m_storedQuery;
    bool m_storedQueryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
