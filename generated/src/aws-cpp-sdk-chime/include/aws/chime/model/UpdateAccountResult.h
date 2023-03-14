/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Account.h>
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
namespace Chime
{
namespace Model
{
  class UpdateAccountResult
  {
  public:
    AWS_CHIME_API UpdateAccountResult();
    AWS_CHIME_API UpdateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API UpdateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated Amazon Chime account details.</p>
     */
    inline const Account& GetAccount() const{ return m_account; }

    /**
     * <p>The updated Amazon Chime account details.</p>
     */
    inline void SetAccount(const Account& value) { m_account = value; }

    /**
     * <p>The updated Amazon Chime account details.</p>
     */
    inline void SetAccount(Account&& value) { m_account = std::move(value); }

    /**
     * <p>The updated Amazon Chime account details.</p>
     */
    inline UpdateAccountResult& WithAccount(const Account& value) { SetAccount(value); return *this;}

    /**
     * <p>The updated Amazon Chime account details.</p>
     */
    inline UpdateAccountResult& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Account m_account;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
