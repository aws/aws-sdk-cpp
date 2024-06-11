﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class CreateConnectorResult
  {
  public:
    AWS_TRANSFER_API CreateConnectorResult();
    AWS_TRANSFER_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorId.assign(value); }
    inline CreateConnectorResult& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline CreateConnectorResult& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline CreateConnectorResult& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
