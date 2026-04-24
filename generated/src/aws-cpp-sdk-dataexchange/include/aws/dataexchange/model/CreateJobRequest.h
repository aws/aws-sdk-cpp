/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/AssetConfiguration.h>
#include <aws/dataexchange/model/RequestDetails.h>
#include <aws/dataexchange/model/Type.h>

#include <utility>

namespace Aws {
namespace DataExchange {
namespace Model {

/**
 */
class CreateJobRequest : public DataExchangeRequest {
 public:
  AWS_DATAEXCHANGE_API CreateJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

  AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The configuration for the asset, including tags to be applied to assets
   * created by the job.</p>
   */
  inline const AssetConfiguration& GetAssetConfiguration() const { return m_assetConfiguration; }
  inline bool AssetConfigurationHasBeenSet() const { return m_assetConfigurationHasBeenSet; }
  template <typename AssetConfigurationT = AssetConfiguration>
  void SetAssetConfiguration(AssetConfigurationT&& value) {
    m_assetConfigurationHasBeenSet = true;
    m_assetConfiguration = std::forward<AssetConfigurationT>(value);
  }
  template <typename AssetConfigurationT = AssetConfiguration>
  CreateJobRequest& WithAssetConfiguration(AssetConfigurationT&& value) {
    SetAssetConfiguration(std::forward<AssetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details for the CreateJob request.</p>
   */
  inline const RequestDetails& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = RequestDetails>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = RequestDetails>
  CreateJobRequest& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of job to be created.</p>
   */
  inline Type GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(Type value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateJobRequest& WithType(Type value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  AssetConfiguration m_assetConfiguration;

  RequestDetails m_details;

  Type m_type{Type::NOT_SET};
  bool m_assetConfigurationHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataExchange
}  // namespace Aws
