/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AccessControlConfigurationSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListAccessControlConfigurationsResult
  {
  public:
    AWS_KENDRA_API ListAccessControlConfigurationsResult() = default;
    AWS_KENDRA_API ListAccessControlConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListAccessControlConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in the subsequent request to retrieve the next set of access control
     * configurations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessControlConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of your access control configurations.</p>
     */
    inline const Aws::Vector<AccessControlConfigurationSummary>& GetAccessControlConfigurations() const { return m_accessControlConfigurations; }
    template<typename AccessControlConfigurationsT = Aws::Vector<AccessControlConfigurationSummary>>
    void SetAccessControlConfigurations(AccessControlConfigurationsT&& value) { m_accessControlConfigurationsHasBeenSet = true; m_accessControlConfigurations = std::forward<AccessControlConfigurationsT>(value); }
    template<typename AccessControlConfigurationsT = Aws::Vector<AccessControlConfigurationSummary>>
    ListAccessControlConfigurationsResult& WithAccessControlConfigurations(AccessControlConfigurationsT&& value) { SetAccessControlConfigurations(std::forward<AccessControlConfigurationsT>(value)); return *this;}
    template<typename AccessControlConfigurationsT = AccessControlConfigurationSummary>
    ListAccessControlConfigurationsResult& AddAccessControlConfigurations(AccessControlConfigurationsT&& value) { m_accessControlConfigurationsHasBeenSet = true; m_accessControlConfigurations.emplace_back(std::forward<AccessControlConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessControlConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AccessControlConfigurationSummary> m_accessControlConfigurations;
    bool m_accessControlConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
