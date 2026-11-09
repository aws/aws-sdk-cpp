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
namespace Continuum {
namespace Model {

/**
 */
class GetCodeScanRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API GetCodeScanRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCodeScan"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Environment that owns the scan.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetCodeScanRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scan to retrieve.</p>
   */
  inline const Aws::String& GetScanRunId() const { return m_scanRunId; }
  inline bool ScanRunIdHasBeenSet() const { return m_scanRunIdHasBeenSet; }
  template <typename ScanRunIdT = Aws::String>
  void SetScanRunId(ScanRunIdT&& value) {
    m_scanRunIdHasBeenSet = true;
    m_scanRunId = std::forward<ScanRunIdT>(value);
  }
  template <typename ScanRunIdT = Aws::String>
  GetCodeScanRequest& WithScanRunId(ScanRunIdT&& value) {
    SetScanRunId(std::forward<ScanRunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_scanRunId;
  bool m_environmentIdHasBeenSet = false;
  bool m_scanRunIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
