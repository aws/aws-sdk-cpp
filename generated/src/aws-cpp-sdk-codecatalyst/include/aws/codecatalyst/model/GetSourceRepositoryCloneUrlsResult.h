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
  class GetSourceRepositoryCloneUrlsResult
  {
  public:
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult() = default;
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTPS URL to use when cloning the source repository.</p>
     */
    inline const Aws::String& GetHttps() const { return m_https; }
    template<typename HttpsT = Aws::String>
    void SetHttps(HttpsT&& value) { m_httpsHasBeenSet = true; m_https = std::forward<HttpsT>(value); }
    template<typename HttpsT = Aws::String>
    GetSourceRepositoryCloneUrlsResult& WithHttps(HttpsT&& value) { SetHttps(std::forward<HttpsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSourceRepositoryCloneUrlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_https;
    bool m_httpsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
