/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSignature.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>A summary of a Managed API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ManagedApiSummary">AWS
 * API Reference</a></p>
 */
class ManagedApiSummary {
 public:
  AWS_APIPORTAL_API ManagedApiSummary() = default;
  AWS_APIPORTAL_API ManagedApiSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ManagedApiSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Managed API.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  inline bool ManagedApiIdHasBeenSet() const { return m_managedApiIdHasBeenSet; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  ManagedApiSummary& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Managed API.</p>
   */
  inline const Aws::String& GetManagedApiArn() const { return m_managedApiArn; }
  inline bool ManagedApiArnHasBeenSet() const { return m_managedApiArnHasBeenSet; }
  template <typename ManagedApiArnT = Aws::String>
  void SetManagedApiArn(ManagedApiArnT&& value) {
    m_managedApiArnHasBeenSet = true;
    m_managedApiArn = std::forward<ManagedApiArnT>(value);
  }
  template <typename ManagedApiArnT = Aws::String>
  ManagedApiSummary& WithManagedApiArn(ManagedApiArnT&& value) {
    SetManagedApiArn(std::forward<ManagedApiArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes that identify the API.</p>
   */
  inline const ApiSignature& GetApiSignature() const { return m_apiSignature; }
  inline bool ApiSignatureHasBeenSet() const { return m_apiSignatureHasBeenSet; }
  template <typename ApiSignatureT = ApiSignature>
  void SetApiSignature(ApiSignatureT&& value) {
    m_apiSignatureHasBeenSet = true;
    m_apiSignature = std::forward<ApiSignatureT>(value);
  }
  template <typename ApiSignatureT = ApiSignature>
  ManagedApiSummary& WithApiSignature(ApiSignatureT&& value) {
    SetApiSignature(std::forward<ApiSignatureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ManagedApiSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedApiSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedApiId;

  Aws::String m_managedApiArn;

  ApiSignature m_apiSignature;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_managedApiIdHasBeenSet = false;
  bool m_managedApiArnHasBeenSet = false;
  bool m_apiSignatureHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
