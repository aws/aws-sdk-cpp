/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DeviceFarm
{
namespace Model
{
  class CreateTestGridUrlResult
  {
  public:
    AWS_DEVICEFARM_API CreateTestGridUrlResult() = default;
    AWS_DEVICEFARM_API CreateTestGridUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateTestGridUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    CreateTestGridUrlResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const { return m_expires; }
    template<typename ExpiresT = Aws::Utils::DateTime>
    void SetExpires(ExpiresT&& value) { m_expiresHasBeenSet = true; m_expires = std::forward<ExpiresT>(value); }
    template<typename ExpiresT = Aws::Utils::DateTime>
    CreateTestGridUrlResult& WithExpires(ExpiresT&& value) { SetExpires(std::forward<ExpiresT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTestGridUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_expires{};
    bool m_expiresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
