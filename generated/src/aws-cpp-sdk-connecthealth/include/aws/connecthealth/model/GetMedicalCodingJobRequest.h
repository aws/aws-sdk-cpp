/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 */
class GetMedicalCodingJobRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API GetMedicalCodingJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMedicalCodingJob"; }

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
  GetMedicalCodingJobRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the medical coding job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetMedicalCodingJobRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_jobId;
  bool m_domainIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
