﻿/**
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
  /**
   * <p>The result of a DeleteTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrustResult">AWS
   * API Reference</a></p>
   */
  class DeleteTrustResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DeleteTrustResult();
    AWS_DIRECTORYSERVICE_API DeleteTrustResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DeleteTrustResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }
    inline void SetTrustId(const Aws::String& value) { m_trustId = value; }
    inline void SetTrustId(Aws::String&& value) { m_trustId = std::move(value); }
    inline void SetTrustId(const char* value) { m_trustId.assign(value); }
    inline DeleteTrustResult& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}
    inline DeleteTrustResult& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}
    inline DeleteTrustResult& WithTrustId(const char* value) { SetTrustId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteTrustResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteTrustResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteTrustResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trustId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
