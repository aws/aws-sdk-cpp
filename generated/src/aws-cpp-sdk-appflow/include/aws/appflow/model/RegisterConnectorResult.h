﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{
  class RegisterConnectorResult
  {
  public:
    AWS_APPFLOW_API RegisterConnectorResult();
    AWS_APPFLOW_API RegisterConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API RegisterConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the connector being registered.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }
    inline RegisterConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline RegisterConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline RegisterConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
