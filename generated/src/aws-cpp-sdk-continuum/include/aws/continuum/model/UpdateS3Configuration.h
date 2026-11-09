/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Replacement credentials for a customer-managed S3 integration. The bucket
 * cannot be changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateS3Configuration">AWS
 * API Reference</a></p>
 */
class UpdateS3Configuration {
 public:
  AWS_CONTINUUM_API UpdateS3Configuration() = default;
  AWS_CONTINUUM_API UpdateS3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API UpdateS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The role to use. Supply the current role when rotating only the external ID.
   * The caller must be allowed to pass this exact role to Continuum.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateS3Configuration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replacement external ID used when assuming the supplied role. If omitted,
   * the existing external ID is preserved. This value is sensitive and is never
   * included in the public integration response.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  UpdateS3Configuration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_externalId;
  bool m_roleArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
