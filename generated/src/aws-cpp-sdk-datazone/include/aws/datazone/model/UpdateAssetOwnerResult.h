/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetOwnershipTransfer.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class UpdateAssetOwnerResult {
 public:
  AWS_DATAZONE_API UpdateAssetOwnerResult() = default;
  AWS_DATAZONE_API UpdateAssetOwnerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API UpdateAssetOwnerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the asset.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateAssetOwnerResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the asset that was created when the transfer started.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  UpdateAssetOwnerResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the ownership transfer that the request started.</p>
   */
  inline const AssetOwnershipTransfer& GetOwnershipTransfer() const { return m_ownershipTransfer; }
  template <typename OwnershipTransferT = AssetOwnershipTransfer>
  void SetOwnershipTransfer(OwnershipTransferT&& value) {
    m_ownershipTransferHasBeenSet = true;
    m_ownershipTransfer = std::forward<OwnershipTransferT>(value);
  }
  template <typename OwnershipTransferT = AssetOwnershipTransfer>
  UpdateAssetOwnerResult& WithOwnershipTransfer(OwnershipTransferT&& value) {
    SetOwnershipTransfer(std::forward<OwnershipTransferT>(value));
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
  UpdateAssetOwnerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_revision;

  AssetOwnershipTransfer m_ownershipTransfer;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_ownershipTransferHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
