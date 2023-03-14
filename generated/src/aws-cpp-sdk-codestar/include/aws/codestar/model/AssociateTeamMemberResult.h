/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{
  class AssociateTeamMemberResult
  {
  public:
    AWS_CODESTAR_API AssociateTeamMemberResult();
    AWS_CODESTAR_API AssociateTeamMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API AssociateTeamMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline AssociateTeamMemberResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline AssociateTeamMemberResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request.</p>
     */
    inline AssociateTeamMemberResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateTeamMemberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateTeamMemberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateTeamMemberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clientRequestToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
