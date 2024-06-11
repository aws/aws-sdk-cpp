﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorState.h>
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
namespace KafkaConnect
{
namespace Model
{
  class CreateConnectorResult
  {
  public:
    AWS_KAFKACONNECT_API CreateConnectorResult();
    AWS_KAFKACONNECT_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }
    inline CreateConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline CreateConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline CreateConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }
    inline void SetConnectorName(const Aws::String& value) { m_connectorName = value; }
    inline void SetConnectorName(Aws::String&& value) { m_connectorName = std::move(value); }
    inline void SetConnectorName(const char* value) { m_connectorName.assign(value); }
    inline CreateConnectorResult& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}
    inline CreateConnectorResult& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}
    inline CreateConnectorResult& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }
    inline void SetConnectorState(const ConnectorState& value) { m_connectorState = value; }
    inline void SetConnectorState(ConnectorState&& value) { m_connectorState = std::move(value); }
    inline CreateConnectorResult& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}
    inline CreateConnectorResult& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}
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

    Aws::String m_connectorArn;

    Aws::String m_connectorName;

    ConnectorState m_connectorState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
