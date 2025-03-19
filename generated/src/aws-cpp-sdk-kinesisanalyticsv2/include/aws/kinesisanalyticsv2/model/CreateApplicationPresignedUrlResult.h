/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class CreateApplicationPresignedUrlResult
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult() = default;
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL of the extension.</p>
     */
    inline const Aws::String& GetAuthorizedUrl() const { return m_authorizedUrl; }
    template<typename AuthorizedUrlT = Aws::String>
    void SetAuthorizedUrl(AuthorizedUrlT&& value) { m_authorizedUrlHasBeenSet = true; m_authorizedUrl = std::forward<AuthorizedUrlT>(value); }
    template<typename AuthorizedUrlT = Aws::String>
    CreateApplicationPresignedUrlResult& WithAuthorizedUrl(AuthorizedUrlT&& value) { SetAuthorizedUrl(std::forward<AuthorizedUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationPresignedUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizedUrl;
    bool m_authorizedUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
