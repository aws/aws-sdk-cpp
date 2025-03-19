/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Connection.h>
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
namespace Glue
{
namespace Model
{
  class GetConnectionsResult
  {
  public:
    AWS_GLUE_API GetConnectionsResult() = default;
    AWS_GLUE_API GetConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline const Aws::Vector<Connection>& GetConnectionList() const { return m_connectionList; }
    template<typename ConnectionListT = Aws::Vector<Connection>>
    void SetConnectionList(ConnectionListT&& value) { m_connectionListHasBeenSet = true; m_connectionList = std::forward<ConnectionListT>(value); }
    template<typename ConnectionListT = Aws::Vector<Connection>>
    GetConnectionsResult& WithConnectionList(ConnectionListT&& value) { SetConnectionList(std::forward<ConnectionListT>(value)); return *this;}
    template<typename ConnectionListT = Connection>
    GetConnectionsResult& AddConnectionList(ConnectionListT&& value) { m_connectionListHasBeenSet = true; m_connectionList.emplace_back(std::forward<ConnectionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Connection> m_connectionList;
    bool m_connectionListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
