﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{
  class EnableDelegatedAdminAccountResult
  {
  public:
    AWS_INSPECTOR2_API EnableDelegatedAdminAccountResult();
    AWS_INSPECTOR2_API EnableDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API EnableDelegatedAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the successfully Amazon Inspector
     * delegated administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const{ return m_delegatedAdminAccountId; }
    inline void SetDelegatedAdminAccountId(const Aws::String& value) { m_delegatedAdminAccountId = value; }
    inline void SetDelegatedAdminAccountId(Aws::String&& value) { m_delegatedAdminAccountId = std::move(value); }
    inline void SetDelegatedAdminAccountId(const char* value) { m_delegatedAdminAccountId.assign(value); }
    inline EnableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(const Aws::String& value) { SetDelegatedAdminAccountId(value); return *this;}
    inline EnableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(Aws::String&& value) { SetDelegatedAdminAccountId(std::move(value)); return *this;}
    inline EnableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(const char* value) { SetDelegatedAdminAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EnableDelegatedAdminAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EnableDelegatedAdminAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EnableDelegatedAdminAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_delegatedAdminAccountId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
