﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Service.h>
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
namespace AppRunner
{
namespace Model
{
  class UpdateServiceResult
  {
  public:
    AWS_APPRUNNER_API UpdateServiceResult();
    AWS_APPRUNNER_API UpdateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API UpdateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline const Service& GetService() const{ return m_service; }
    inline void SetService(const Service& value) { m_service = value; }
    inline void SetService(Service&& value) { m_service = std::move(value); }
    inline UpdateServiceResult& WithService(const Service& value) { SetService(value); return *this;}
    inline UpdateServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline UpdateServiceResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline UpdateServiceResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline UpdateServiceResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Service m_service;

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
