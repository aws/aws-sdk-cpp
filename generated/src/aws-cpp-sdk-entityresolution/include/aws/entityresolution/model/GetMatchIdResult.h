/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{
  class GetMatchIdResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetMatchIdResult();
    AWS_ENTITYRESOLUTION_API GetMatchIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetMatchIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline const Aws::String& GetMatchId() const{ return m_matchId; }

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline void SetMatchId(const Aws::String& value) { m_matchId = value; }

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline void SetMatchId(Aws::String&& value) { m_matchId = std::move(value); }

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline void SetMatchId(const char* value) { m_matchId.assign(value); }

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline GetMatchIdResult& WithMatchId(const Aws::String& value) { SetMatchId(value); return *this;}

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline GetMatchIdResult& WithMatchId(Aws::String&& value) { SetMatchId(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline GetMatchIdResult& WithMatchId(const char* value) { SetMatchId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMatchIdResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMatchIdResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMatchIdResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_matchId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
