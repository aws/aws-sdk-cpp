/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DataZone {
namespace Model {

/**
 */
class DeleteDomainRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API DeleteDomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteDomain"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Web Services domain that is to be deleted.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  DeleteDomainRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that is provided to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteDomainRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to skip the check that prevents deletion of a domain that
   * still contains resources. When you use this parameter, Amazon DataZone deletes
   * the domain but might not remove its associated resources, which can leave
   * orphaned resources behind. To delete a domain and fully clean up its associated
   * resources, use <code>cascadeDelete</code> instead. You can't use this parameter
   * together with <code>cascadeDelete</code>.</p>
   */
  inline bool GetSkipDeletionCheck() const { return m_skipDeletionCheck; }
  inline bool SkipDeletionCheckHasBeenSet() const { return m_skipDeletionCheckHasBeenSet; }
  inline void SetSkipDeletionCheck(bool value) {
    m_skipDeletionCheckHasBeenSet = true;
    m_skipDeletionCheck = value;
  }
  inline DeleteDomainRequest& WithSkipDeletionCheck(bool value) {
    SetSkipDeletionCheck(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to delete the domain along with all of its associated
   * resources. When you use this parameter, Amazon DataZone deletes the domain and
   * cleanly removes its associated resources without leaving orphaned resources
   * behind. Amazon DataZone reports deletion progress in the
   * <code>deleteProgress</code> field. Amazon DataZone reports any resources that it
   * can't delete in the <code>failureReasons</code> field of the
   * <code>GetDomain</code> response. You can't use this parameter together with
   * <code>skipDeletionCheck</code>. If you don't specify a value, the default is
   * <code>false</code>.</p>
   */
  inline bool GetCascadeDelete() const { return m_cascadeDelete; }
  inline bool CascadeDeleteHasBeenSet() const { return m_cascadeDeleteHasBeenSet; }
  inline void SetCascadeDelete(bool value) {
    m_cascadeDeleteHasBeenSet = true;
    m_cascadeDelete = value;
  }
  inline DeleteDomainRequest& WithCascadeDelete(bool value) {
    SetCascadeDelete(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_skipDeletionCheck{false};

  bool m_cascadeDelete{false};
  bool m_identifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_skipDeletionCheckHasBeenSet = false;
  bool m_cascadeDeleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
