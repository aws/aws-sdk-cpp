/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectionStatus.h>
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
namespace Glue
{
namespace Model
{
  class CreateConnectionResult
  {
  public:
    AWS_GLUE_API CreateConnectionResult() = default;
    AWS_GLUE_API CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the connection creation request. The request can take some time
     * for certain authentication types, for example when creating an OAuth connection
     * with token exchange over VPC.</p>
     */
    inline ConnectionStatus GetCreateConnectionStatus() const { return m_createConnectionStatus; }
    inline void SetCreateConnectionStatus(ConnectionStatus value) { m_createConnectionStatusHasBeenSet = true; m_createConnectionStatus = value; }
    inline CreateConnectionResult& WithCreateConnectionStatus(ConnectionStatus value) { SetCreateConnectionStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectionStatus m_createConnectionStatus{ConnectionStatus::NOT_SET};
    bool m_createConnectionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
