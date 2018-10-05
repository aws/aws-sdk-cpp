/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API UpdateTrustResult
  {
  public:
    UpdateTrustResult();
    UpdateTrustResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateTrustResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
