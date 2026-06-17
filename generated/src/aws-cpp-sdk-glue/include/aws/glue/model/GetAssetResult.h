/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetFormEntry.h>
#include <aws/glue/model/IterableFormEntry.h>

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
class GetAssetResult {
 public:
  AWS_GLUE_API GetAssetResult() = default;
  AWS_GLUE_API GetAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the asset.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetAssetResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the asset.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAssetResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the asset.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAssetResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the asset was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAssetResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the asset was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetAssetResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the asset type for this asset.</p>
   */
  inline const Aws::String& GetAssetTypeId() const { return m_assetTypeId; }
  template <typename AssetTypeIdT = Aws::String>
  void SetAssetTypeId(AssetTypeIdT&& value) {
    m_assetTypeIdHasBeenSet = true;
    m_assetTypeId = std::forward<AssetTypeIdT>(value);
  }
  template <typename AssetTypeIdT = Aws::String>
  GetAssetResult& WithAssetTypeId(AssetTypeIdT&& value) {
    SetAssetTypeId(std::forward<AssetTypeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the glossary terms associated with the asset.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  void SetGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms = std::forward<GlossaryTermsT>(value);
  }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  GetAssetResult& WithGlossaryTerms(GlossaryTermsT&& value) {
    SetGlossaryTerms(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  template <typename GlossaryTermsT = Aws::String>
  GetAssetResult& AddGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms on the asset, keyed by form name.</p>
   */
  inline const Aws::Map<Aws::String, AssetFormEntry>& GetForms() const { return m_forms; }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  GetAssetResult& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsKeyT = Aws::String, typename FormsValueT = AssetFormEntry>
  GetAssetResult& AddForms(FormsKeyT&& key, FormsValueT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace(std::forward<FormsKeyT>(key), std::forward<FormsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attachments on the asset for more context, keyed by attachment
   * name.</p>
   */
  inline const Aws::Map<Aws::String, AssetFormEntry>& GetAttachments() const { return m_attachments; }
  template <typename AttachmentsT = Aws::Map<Aws::String, AssetFormEntry>>
  void SetAttachments(AttachmentsT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments = std::forward<AttachmentsT>(value);
  }
  template <typename AttachmentsT = Aws::Map<Aws::String, AssetFormEntry>>
  GetAssetResult& WithAttachments(AttachmentsT&& value) {
    SetAttachments(std::forward<AttachmentsT>(value));
    return *this;
  }
  template <typename AttachmentsKeyT = Aws::String, typename AttachmentsValueT = AssetFormEntry>
  GetAssetResult& AddAttachments(AttachmentsKeyT&& key, AttachmentsValueT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments.emplace(std::forward<AttachmentsKeyT>(key), std::forward<AttachmentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The iterable forms available on the asset, keyed by form name (for example,
   * <code>columns</code>). Use the form name with <code>ListIterableForms</code> or
   * <code>BatchGetIterableForms</code> to retrieve the form's items.</p>
   */
  inline const Aws::Map<Aws::String, IterableFormEntry>& GetIterableForms() const { return m_iterableForms; }
  template <typename IterableFormsT = Aws::Map<Aws::String, IterableFormEntry>>
  void SetIterableForms(IterableFormsT&& value) {
    m_iterableFormsHasBeenSet = true;
    m_iterableForms = std::forward<IterableFormsT>(value);
  }
  template <typename IterableFormsT = Aws::Map<Aws::String, IterableFormEntry>>
  GetAssetResult& WithIterableForms(IterableFormsT&& value) {
    SetIterableForms(std::forward<IterableFormsT>(value));
    return *this;
  }
  template <typename IterableFormsKeyT = Aws::String, typename IterableFormsValueT = IterableFormEntry>
  GetAssetResult& AddIterableForms(IterableFormsKeyT&& key, IterableFormsValueT&& value) {
    m_iterableFormsHasBeenSet = true;
    m_iterableForms.emplace(std::forward<IterableFormsKeyT>(key), std::forward<IterableFormsValueT>(value));
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
  GetAssetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_assetTypeId;

  Aws::Vector<Aws::String> m_glossaryTerms;

  Aws::Map<Aws::String, AssetFormEntry> m_forms;

  Aws::Map<Aws::String, AssetFormEntry> m_attachments;

  Aws::Map<Aws::String, IterableFormEntry> m_iterableForms;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_assetTypeIdHasBeenSet = false;
  bool m_glossaryTermsHasBeenSet = false;
  bool m_formsHasBeenSet = false;
  bool m_attachmentsHasBeenSet = false;
  bool m_iterableFormsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
