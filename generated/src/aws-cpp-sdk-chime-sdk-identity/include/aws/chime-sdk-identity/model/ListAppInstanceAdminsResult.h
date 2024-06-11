/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdminSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstanceAdminsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each administrator.</p>
     */
    inline const Aws::Vector<AppInstanceAdminSummary>& GetAppInstanceAdmins() const{ return m_appInstanceAdmins; }
    inline void SetAppInstanceAdmins(const Aws::Vector<AppInstanceAdminSummary>& value) { m_appInstanceAdmins = value; }
    inline void SetAppInstanceAdmins(Aws::Vector<AppInstanceAdminSummary>&& value) { m_appInstanceAdmins = std::move(value); }
    inline ListAppInstanceAdminsResult& WithAppInstanceAdmins(const Aws::Vector<AppInstanceAdminSummary>& value) { SetAppInstanceAdmins(value); return *this;}
    inline ListAppInstanceAdminsResult& WithAppInstanceAdmins(Aws::Vector<AppInstanceAdminSummary>&& value) { SetAppInstanceAdmins(std::move(value)); return *this;}
    inline ListAppInstanceAdminsResult& AddAppInstanceAdmins(const AppInstanceAdminSummary& value) { m_appInstanceAdmins.push_back(value); return *this; }
    inline ListAppInstanceAdminsResult& AddAppInstanceAdmins(AppInstanceAdminSummary&& value) { m_appInstanceAdmins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAppInstanceAdminsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppInstanceAdminsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppInstanceAdminsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAppInstanceAdminsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAppInstanceAdminsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAppInstanceAdminsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;

    Aws::Vector<AppInstanceAdminSummary> m_appInstanceAdmins;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
