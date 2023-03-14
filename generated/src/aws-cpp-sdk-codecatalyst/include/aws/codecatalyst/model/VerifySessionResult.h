/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class VerifySessionResult
  {
  public:
    AWS_CODECATALYST_API VerifySessionResult();
    AWS_CODECATALYST_API VerifySessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API VerifySessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identity = value; }

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identity = std::move(value); }

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetIdentity(const char* value) { m_identity.assign(value); }

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline VerifySessionResult& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline VerifySessionResult& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the user in Amazon CodeCatalyst.</p>
     */
    inline VerifySessionResult& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline VerifySessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline VerifySessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline VerifySessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_identity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
