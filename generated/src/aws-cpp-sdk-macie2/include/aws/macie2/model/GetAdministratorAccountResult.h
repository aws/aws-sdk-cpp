/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Invitation.h>
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
namespace Macie2
{
namespace Model
{
  class GetAdministratorAccountResult
  {
  public:
    AWS_MACIE2_API GetAdministratorAccountResult();
    AWS_MACIE2_API GetAdministratorAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetAdministratorAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline const Invitation& GetAdministrator() const{ return m_administrator; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline void SetAdministrator(const Invitation& value) { m_administrator = value; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline void SetAdministrator(Invitation&& value) { m_administrator = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(const Invitation& value) { SetAdministrator(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(Invitation&& value) { SetAdministrator(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAdministratorAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAdministratorAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAdministratorAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Invitation m_administrator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
