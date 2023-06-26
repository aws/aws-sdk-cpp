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
  class UpdateConnectorProfileResult
  {
  public:
    AWS_APPFLOW_API UpdateConnectorProfileResult();
    AWS_APPFLOW_API UpdateConnectorProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API UpdateConnectorProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline const Aws::String& GetConnectorProfileArn() const{ return m_connectorProfileArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline void SetConnectorProfileArn(const Aws::String& value) { m_connectorProfileArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline void SetConnectorProfileArn(Aws::String&& value) { m_connectorProfileArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline void SetConnectorProfileArn(const char* value) { m_connectorProfileArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline UpdateConnectorProfileResult& WithConnectorProfileArn(const Aws::String& value) { SetConnectorProfileArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline UpdateConnectorProfileResult& WithConnectorProfileArn(Aws::String&& value) { SetConnectorProfileArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline UpdateConnectorProfileResult& WithConnectorProfileArn(const char* value) { SetConnectorProfileArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateConnectorProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateConnectorProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateConnectorProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_connectorProfileArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
