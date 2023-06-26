/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/AccountPolicy.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutAccountPolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult();
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account policy that you created.</p>
     */
    inline const AccountPolicy& GetAccountPolicy() const{ return m_accountPolicy; }

    /**
     * <p>The account policy that you created.</p>
     */
    inline void SetAccountPolicy(const AccountPolicy& value) { m_accountPolicy = value; }

    /**
     * <p>The account policy that you created.</p>
     */
    inline void SetAccountPolicy(AccountPolicy&& value) { m_accountPolicy = std::move(value); }

    /**
     * <p>The account policy that you created.</p>
     */
    inline PutAccountPolicyResult& WithAccountPolicy(const AccountPolicy& value) { SetAccountPolicy(value); return *this;}

    /**
     * <p>The account policy that you created.</p>
     */
    inline PutAccountPolicyResult& WithAccountPolicy(AccountPolicy&& value) { SetAccountPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAccountPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAccountPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAccountPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountPolicy m_accountPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
