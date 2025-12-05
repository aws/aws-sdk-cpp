/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

/**
 */
class CancelMetadataModelConversionRequest : public DatabaseMigrationServiceRequest {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API CancelMetadataModelConversionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelMetadataModelConversion"; }

  AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

  AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The migration project name or Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
  inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
  template <typename MigrationProjectIdentifierT = Aws::String>
  void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) {
    m_migrationProjectIdentifierHasBeenSet = true;
    m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value);
  }
  template <typename MigrationProjectIdentifierT = Aws::String>
  CancelMetadataModelConversionRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) {
    SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the metadata model conversion operation to cancel. This
   * operation was initiated by StartMetadataModelConversion.</p>
   */
  inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
  inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
  template <typename RequestIdentifierT = Aws::String>
  void SetRequestIdentifier(RequestIdentifierT&& value) {
    m_requestIdentifierHasBeenSet = true;
    m_requestIdentifier = std::forward<RequestIdentifierT>(value);
  }
  template <typename RequestIdentifierT = Aws::String>
  CancelMetadataModelConversionRequest& WithRequestIdentifier(RequestIdentifierT&& value) {
    SetRequestIdentifier(std::forward<RequestIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationProjectIdentifier;

  Aws::String m_requestIdentifier;
  bool m_migrationProjectIdentifierHasBeenSet = false;
  bool m_requestIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
