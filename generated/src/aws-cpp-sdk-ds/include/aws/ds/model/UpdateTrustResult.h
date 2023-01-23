/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  class UpdateTrustResult
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateTrustResult();
    AWS_DIRECTORYSERVICE_API UpdateTrustResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API UpdateTrustResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTrustResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTrustResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTrustResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustId = value; }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustId = std::move(value); }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(const char* value) { m_trustId.assign(value); }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustResult& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustResult& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustResult& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_trustId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
