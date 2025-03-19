/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace AppConfigData
{
namespace Model
{
  class GetLatestConfigurationResult
  {
  public:
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult() = default;
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult(GetLatestConfigurationResult&&) = default;
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult& operator=(GetLatestConfigurationResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetLatestConfigurationResult(const GetLatestConfigurationResult&) = delete;
    GetLatestConfigurationResult& operator=(const GetLatestConfigurationResult&) = delete;


    AWS_APPCONFIGDATA_API GetLatestConfigurationResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline const Aws::String& GetNextPollConfigurationToken() const { return m_nextPollConfigurationToken; }
    template<typename NextPollConfigurationTokenT = Aws::String>
    void SetNextPollConfigurationToken(NextPollConfigurationTokenT&& value) { m_nextPollConfigurationTokenHasBeenSet = true; m_nextPollConfigurationToken = std::forward<NextPollConfigurationTokenT>(value); }
    template<typename NextPollConfigurationTokenT = Aws::String>
    GetLatestConfigurationResult& WithNextPollConfigurationToken(NextPollConfigurationTokenT&& value) { SetNextPollConfigurationToken(std::forward<NextPollConfigurationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the client should wait before polling for configuration
     * updates again. Use <code>RequiredMinimumPollIntervalInSeconds</code> to set the
     * desired poll interval.</p>
     */
    inline int GetNextPollIntervalInSeconds() const { return m_nextPollIntervalInSeconds; }
    inline void SetNextPollIntervalInSeconds(int value) { m_nextPollIntervalInSecondsHasBeenSet = true; m_nextPollIntervalInSeconds = value; }
    inline GetLatestConfigurationResult& WithNextPollIntervalInSeconds(int value) { SetNextPollIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetLatestConfigurationResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data of the configuration. This may be empty if the client already has
     * the latest version of configuration.</p>
     */
    inline Aws::IOStream& GetConfiguration() const { return m_configuration.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_configuration = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    GetLatestConfigurationResult& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLatestConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPollConfigurationToken;
    bool m_nextPollConfigurationTokenHasBeenSet = false;

    int m_nextPollIntervalInSeconds{0};
    bool m_nextPollIntervalInSecondsHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_configuration{};
    bool m_configurationHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
