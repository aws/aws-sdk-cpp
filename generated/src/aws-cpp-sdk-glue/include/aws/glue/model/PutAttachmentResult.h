/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class PutAttachmentResult {
 public:
  AWS_GLUE_API PutAttachmentResult() = default;
  AWS_GLUE_API PutAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API PutAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the asset.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  PutAttachmentResult& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the iterable form, if the attachment targets an item.</p>
   */
  inline const Aws::String& GetIterableFormName() const { return m_iterableFormName; }
  template <typename IterableFormNameT = Aws::String>
  void SetIterableFormName(IterableFormNameT&& value) {
    m_iterableFormNameHasBeenSet = true;
    m_iterableFormName = std::forward<IterableFormNameT>(value);
  }
  template <typename IterableFormNameT = Aws::String>
  PutAttachmentResult& WithIterableFormName(IterableFormNameT&& value) {
    SetIterableFormName(std::forward<IterableFormNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the item within the iterable form, if applicable.</p>
   */
  inline const Aws::String& GetItemIdentifier() const { return m_itemIdentifier; }
  template <typename ItemIdentifierT = Aws::String>
  void SetItemIdentifier(ItemIdentifierT&& value) {
    m_itemIdentifierHasBeenSet = true;
    m_itemIdentifier = std::forward<ItemIdentifierT>(value);
  }
  template <typename ItemIdentifierT = Aws::String>
  PutAttachmentResult& WithItemIdentifier(ItemIdentifierT&& value) {
    SetItemIdentifier(std::forward<ItemIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attachment.</p>
   */
  inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
  template <typename AttachmentNameT = Aws::String>
  void SetAttachmentName(AttachmentNameT&& value) {
    m_attachmentNameHasBeenSet = true;
    m_attachmentName = std::forward<AttachmentNameT>(value);
  }
  template <typename AttachmentNameT = Aws::String>
  PutAttachmentResult& WithAttachmentName(AttachmentNameT&& value) {
    SetAttachmentName(std::forward<AttachmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the form type for this attachment.</p>
   */
  inline const Aws::String& GetFormTypeId() const { return m_formTypeId; }
  template <typename FormTypeIdT = Aws::String>
  void SetFormTypeId(FormTypeIdT&& value) {
    m_formTypeIdHasBeenSet = true;
    m_formTypeId = std::forward<FormTypeIdT>(value);
  }
  template <typename FormTypeIdT = Aws::String>
  PutAttachmentResult& WithFormTypeId(FormTypeIdT&& value) {
    SetFormTypeId(std::forward<FormTypeIdT>(value));
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
  PutAttachmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assetIdentifier;

  Aws::String m_iterableFormName;

  Aws::String m_itemIdentifier;

  Aws::String m_attachmentName;

  Aws::String m_formTypeId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assetIdentifierHasBeenSet = false;
  bool m_iterableFormNameHasBeenSet = false;
  bool m_itemIdentifierHasBeenSet = false;
  bool m_attachmentNameHasBeenSet = false;
  bool m_formTypeIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
