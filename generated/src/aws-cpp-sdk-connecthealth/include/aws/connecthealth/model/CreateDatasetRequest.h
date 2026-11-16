/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/DatasetConfig.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 */
class CreateDatasetRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API CreateDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

  AWS_CONNECTHEALTH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the parent Domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateDatasetRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the dataset.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDatasetRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the dataset. The member that you set determines the
   * dataset type. You can't change the configuration after you create the
   * dataset.</p>
   */
  inline const DatasetConfig& GetConfig() const { return m_config; }
  inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
  template <typename ConfigT = DatasetConfig>
  void SetConfig(ConfigT&& value) {
    m_configHasBeenSet = true;
    m_config = std::forward<ConfigT>(value);
  }
  template <typename ConfigT = DatasetConfig>
  CreateDatasetRequest& WithConfig(ConfigT&& value) {
    SetConfig(std::forward<ConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the operation
   * returns the dataset that the first request created. If you reuse a clientToken
   * with different parameters, the request fails with ConflictException. Use a new
   * clientToken for a request with different parameters.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_name;

  DatasetConfig m_config;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
