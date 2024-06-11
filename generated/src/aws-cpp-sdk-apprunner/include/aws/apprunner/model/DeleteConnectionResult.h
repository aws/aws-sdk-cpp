﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Connection.h>
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
  class DeleteConnectionResult
  {
  public:
    AWS_APPRUNNER_API DeleteConnectionResult();
    AWS_APPRUNNER_API DeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }
    inline void SetConnection(const Connection& value) { m_connection = value; }
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }
    inline DeleteConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}
    inline DeleteConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Connection m_connection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
