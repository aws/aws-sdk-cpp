/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ClientAuthenticationSettingInfo.h>
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
  class DescribeClientAuthenticationSettingsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the type of client authentication for the specified
     * directory. The following information is retrieved: The date and time when the
     * status of the client authentication type was last updated, whether the client
     * authentication type is enabled or disabled, and the type of client
     * authentication.</p>
     */
    inline const Aws::Vector<ClientAuthenticationSettingInfo>& GetClientAuthenticationSettingsInfo() const { return m_clientAuthenticationSettingsInfo; }
    template<typename ClientAuthenticationSettingsInfoT = Aws::Vector<ClientAuthenticationSettingInfo>>
    void SetClientAuthenticationSettingsInfo(ClientAuthenticationSettingsInfoT&& value) { m_clientAuthenticationSettingsInfoHasBeenSet = true; m_clientAuthenticationSettingsInfo = std::forward<ClientAuthenticationSettingsInfoT>(value); }
    template<typename ClientAuthenticationSettingsInfoT = Aws::Vector<ClientAuthenticationSettingInfo>>
    DescribeClientAuthenticationSettingsResult& WithClientAuthenticationSettingsInfo(ClientAuthenticationSettingsInfoT&& value) { SetClientAuthenticationSettingsInfo(std::forward<ClientAuthenticationSettingsInfoT>(value)); return *this;}
    template<typename ClientAuthenticationSettingsInfoT = ClientAuthenticationSettingInfo>
    DescribeClientAuthenticationSettingsResult& AddClientAuthenticationSettingsInfo(ClientAuthenticationSettingsInfoT&& value) { m_clientAuthenticationSettingsInfoHasBeenSet = true; m_clientAuthenticationSettingsInfo.emplace_back(std::forward<ClientAuthenticationSettingsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to retrieve the client authentication settings if the
     * number of setting types exceeds page limit and there is another page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeClientAuthenticationSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClientAuthenticationSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClientAuthenticationSettingInfo> m_clientAuthenticationSettingsInfo;
    bool m_clientAuthenticationSettingsInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
