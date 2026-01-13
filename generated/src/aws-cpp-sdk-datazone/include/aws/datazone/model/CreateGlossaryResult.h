/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlossaryStatus.h>
#include <aws/datazone/model/GlossaryUsageRestriction.h>

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
class CreateGlossaryResult {
 public:
  AWS_DATAZONE_API CreateGlossaryResult() = default;
  AWS_DATAZONE_API CreateGlossaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API CreateGlossaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain in which this business glossary is
   * created.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateGlossaryResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of this business glossary.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateGlossaryResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of this business glossary.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateGlossaryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that currently owns this business glossary.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  CreateGlossaryResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of this business glossary.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateGlossaryResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of this business glossary.</p>
   */
  inline GlossaryStatus GetStatus() const { return m_status; }
  inline void SetStatus(GlossaryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateGlossaryResult& WithStatus(GlossaryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The usage restriction of the restricted glossary.</p>
   */
  inline const Aws::Vector<GlossaryUsageRestriction>& GetUsageRestrictions() const { return m_usageRestrictions; }
  template <typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
  void SetUsageRestrictions(UsageRestrictionsT&& value) {
    m_usageRestrictionsHasBeenSet = true;
    m_usageRestrictions = std::forward<UsageRestrictionsT>(value);
  }
  template <typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
  CreateGlossaryResult& WithUsageRestrictions(UsageRestrictionsT&& value) {
    SetUsageRestrictions(std::forward<UsageRestrictionsT>(value));
    return *this;
  }
  inline CreateGlossaryResult& AddUsageRestrictions(GlossaryUsageRestriction value) {
    m_usageRestrictionsHasBeenSet = true;
    m_usageRestrictions.push_back(value);
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
  CreateGlossaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_owningProjectId;

  Aws::String m_description;

  GlossaryStatus m_status{GlossaryStatus::NOT_SET};

  Aws::Vector<GlossaryUsageRestriction> m_usageRestrictions;

  Aws::String m_requestId;
  bool m_domainIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_usageRestrictionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
