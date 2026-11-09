/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Continuum {
namespace Model {

/**
 * <p>Identifies the Collector whose inventory is requested.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCollectorDataAccessAuthorizationInput">AWS
 * API Reference</a></p>
 */
class GetCollectorDataAccessAuthorizationRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API GetCollectorDataAccessAuthorizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCollectorDataAccessAuthorization"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  AWS_CONTINUUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The AWS account that owns the Collector.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  GetCollectorDataAccessAuthorizationRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Collector.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  GetCollectorDataAccessAuthorizationRequest& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full ARN of the Environment requesting the Collector's data. The
   * Environment must be in the caller's account. Continuum supplies this value as
   * the continuum:EnvironmentArn condition key.</p>
   */
  inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
  inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
  template <typename EnvironmentArnT = Aws::String>
  void SetEnvironmentArn(EnvironmentArnT&& value) {
    m_environmentArnHasBeenSet = true;
    m_environmentArn = std::forward<EnvironmentArnT>(value);
  }
  template <typename EnvironmentArnT = Aws::String>
  GetCollectorDataAccessAuthorizationRequest& WithEnvironmentArn(EnvironmentArnT&& value) {
    SetEnvironmentArn(std::forward<EnvironmentArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_collectorId;

  Aws::String m_environmentArn;
  bool m_accountIdHasBeenSet = false;
  bool m_collectorIdHasBeenSet = false;
  bool m_environmentArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
