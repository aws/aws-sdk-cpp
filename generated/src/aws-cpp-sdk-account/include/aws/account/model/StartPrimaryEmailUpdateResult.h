﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/PrimaryEmailUpdateStatus.h>
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
namespace Account
{
namespace Model
{
  class StartPrimaryEmailUpdateResult
  {
  public:
    AWS_ACCOUNT_API StartPrimaryEmailUpdateResult();
    AWS_ACCOUNT_API StartPrimaryEmailUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API StartPrimaryEmailUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the primary email update request.</p>
     */
    inline const PrimaryEmailUpdateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PrimaryEmailUpdateStatus& value) { m_status = value; }
    inline void SetStatus(PrimaryEmailUpdateStatus&& value) { m_status = std::move(value); }
    inline StartPrimaryEmailUpdateResult& WithStatus(const PrimaryEmailUpdateStatus& value) { SetStatus(value); return *this;}
    inline StartPrimaryEmailUpdateResult& WithStatus(PrimaryEmailUpdateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartPrimaryEmailUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartPrimaryEmailUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartPrimaryEmailUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PrimaryEmailUpdateStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
