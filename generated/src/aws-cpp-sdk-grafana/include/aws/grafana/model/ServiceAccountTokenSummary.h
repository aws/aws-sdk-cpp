/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure that contains the information about a service account
 * token.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ServiceAccountTokenSummary">AWS
 * API Reference</a></p>
 */
class ServiceAccountTokenSummary {
 public:
  AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary() = default;
  AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the service account token.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ServiceAccountTokenSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service account token.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ServiceAccountTokenSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the service account token was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ServiceAccountTokenSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the service account token will expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  ServiceAccountTokenSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time the token was used to authorize a Grafana HTTP API.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUsedAt() const { return m_lastUsedAt; }
  inline bool LastUsedAtHasBeenSet() const { return m_lastUsedAtHasBeenSet; }
  template <typename LastUsedAtT = Aws::Utils::DateTime>
  void SetLastUsedAt(LastUsedAtT&& value) {
    m_lastUsedAtHasBeenSet = true;
    m_lastUsedAt = std::forward<LastUsedAtT>(value);
  }
  template <typename LastUsedAtT = Aws::Utils::DateTime>
  ServiceAccountTokenSummary& WithLastUsedAt(LastUsedAtT&& value) {
    SetLastUsedAt(std::forward<LastUsedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Utils::DateTime m_lastUsedAt{};
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_lastUsedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
