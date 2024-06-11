﻿/**
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
  class GetSourceRepositoryCloneUrlsResult
  {
  public:
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult();
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTPS URL to use when cloning the source repository.</p>
     */
    inline const Aws::String& GetHttps() const{ return m_https; }
    inline void SetHttps(const Aws::String& value) { m_https = value; }
    inline void SetHttps(Aws::String&& value) { m_https = std::move(value); }
    inline void SetHttps(const char* value) { m_https.assign(value); }
    inline GetSourceRepositoryCloneUrlsResult& WithHttps(const Aws::String& value) { SetHttps(value); return *this;}
    inline GetSourceRepositoryCloneUrlsResult& WithHttps(Aws::String&& value) { SetHttps(std::move(value)); return *this;}
    inline GetSourceRepositoryCloneUrlsResult& WithHttps(const char* value) { SetHttps(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSourceRepositoryCloneUrlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSourceRepositoryCloneUrlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSourceRepositoryCloneUrlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_https;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
