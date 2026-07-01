/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class CancelUpdateRequest : public EKSRequest {
 public:
  AWS_EKS_API CancelUpdateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelUpdate"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster associated with the update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CancelUpdateRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the update to cancel.</p>
   */
  inline const Aws::String& GetUpdateId() const { return m_updateId; }
  inline bool UpdateIdHasBeenSet() const { return m_updateIdHasBeenSet; }
  template <typename UpdateIdT = Aws::String>
  void SetUpdateId(UpdateIdT&& value) {
    m_updateIdHasBeenSet = true;
    m_updateId = std::forward<UpdateIdT>(value);
  }
  template <typename UpdateIdT = Aws::String>
  CancelUpdateRequest& WithUpdateId(UpdateIdT&& value) {
    SetUpdateId(std::forward<UpdateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CancelUpdateRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_updateId;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_updateIdHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
