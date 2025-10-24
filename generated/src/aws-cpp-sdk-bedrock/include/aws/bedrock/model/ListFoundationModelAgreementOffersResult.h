﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/Offer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
class ListFoundationModelAgreementOffersResult {
 public:
  AWS_BEDROCK_API ListFoundationModelAgreementOffersResult() = default;
  AWS_BEDROCK_API ListFoundationModelAgreementOffersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API ListFoundationModelAgreementOffersResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Model Id of the foundation model.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  ListFoundationModelAgreementOffersResult& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the offers associated with the specified model.</p>
   */
  inline const Aws::Vector<Offer>& GetOffers() const { return m_offers; }
  template <typename OffersT = Aws::Vector<Offer>>
  void SetOffers(OffersT&& value) {
    m_offersHasBeenSet = true;
    m_offers = std::forward<OffersT>(value);
  }
  template <typename OffersT = Aws::Vector<Offer>>
  ListFoundationModelAgreementOffersResult& WithOffers(OffersT&& value) {
    SetOffers(std::forward<OffersT>(value));
    return *this;
  }
  template <typename OffersT = Offer>
  ListFoundationModelAgreementOffersResult& AddOffers(OffersT&& value) {
    m_offersHasBeenSet = true;
    m_offers.emplace_back(std::forward<OffersT>(value));
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
  ListFoundationModelAgreementOffersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;
  bool m_modelIdHasBeenSet = false;

  Aws::Vector<Offer> m_offers;
  bool m_offersHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
