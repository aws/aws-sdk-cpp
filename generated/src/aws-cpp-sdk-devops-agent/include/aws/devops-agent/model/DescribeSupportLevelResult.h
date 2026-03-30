/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SupportLevel.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Response structure containing detailed support level for an
 * account</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DescribeSupportLevelResponse">AWS
 * API Reference</a></p>
 */
class DescribeSupportLevelResult {
 public:
  AWS_DEVOPSAGENT_API DescribeSupportLevelResult() = default;
  AWS_DEVOPSAGENT_API DescribeSupportLevelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API DescribeSupportLevelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The account's support level</p>
   */
  inline const SupportLevel& GetSupportLevel() const { return m_supportLevel; }
  template <typename SupportLevelT = SupportLevel>
  void SetSupportLevel(SupportLevelT&& value) {
    m_supportLevelHasBeenSet = true;
    m_supportLevel = std::forward<SupportLevelT>(value);
  }
  template <typename SupportLevelT = SupportLevel>
  DescribeSupportLevelResult& WithSupportLevel(SupportLevelT&& value) {
    SetSupportLevel(std::forward<SupportLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account's Mosaic equivalent support level</p>
   */
  inline const SupportLevel& GetMosaicSupportLevel() const { return m_mosaicSupportLevel; }
  template <typename MosaicSupportLevelT = SupportLevel>
  void SetMosaicSupportLevel(MosaicSupportLevelT&& value) {
    m_mosaicSupportLevelHasBeenSet = true;
    m_mosaicSupportLevel = std::forward<MosaicSupportLevelT>(value);
  }
  template <typename MosaicSupportLevelT = SupportLevel>
  DescribeSupportLevelResult& WithMosaicSupportLevel(MosaicSupportLevelT&& value) {
    SetMosaicSupportLevel(std::forward<MosaicSupportLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether or not the account's subscription is active</p>
   */
  inline bool GetActiveSubscription() const { return m_activeSubscription; }
  inline void SetActiveSubscription(bool value) {
    m_activeSubscriptionHasBeenSet = true;
    m_activeSubscription = value;
  }
  inline DescribeSupportLevelResult& WithActiveSubscription(bool value) {
    SetActiveSubscription(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeSupportLevelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SupportLevel m_supportLevel;

  SupportLevel m_mosaicSupportLevel;

  bool m_activeSubscription{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_supportLevelHasBeenSet = false;
  bool m_mosaicSupportLevelHasBeenSet = false;
  bool m_activeSubscriptionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
