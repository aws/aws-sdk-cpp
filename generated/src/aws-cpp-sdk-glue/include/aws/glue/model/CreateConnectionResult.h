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
    AWS_GLUE_API CreateConnectionResult();
    AWS_GLUE_API CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the connection creation request. The request can take some time
     * for certain authentication types, for example when creating an OAuth connection
     * with token exchange over VPC.</p>
     */
    inline const ConnectionStatus& GetCreateConnectionStatus() const{ return m_createConnectionStatus; }
    inline void SetCreateConnectionStatus(const ConnectionStatus& value) { m_createConnectionStatus = value; }
    inline void SetCreateConnectionStatus(ConnectionStatus&& value) { m_createConnectionStatus = std::move(value); }
    inline CreateConnectionResult& WithCreateConnectionStatus(const ConnectionStatus& value) { SetCreateConnectionStatus(value); return *this;}
    inline CreateConnectionResult& WithCreateConnectionStatus(ConnectionStatus&& value) { SetCreateConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConnectionStatus m_createConnectionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
