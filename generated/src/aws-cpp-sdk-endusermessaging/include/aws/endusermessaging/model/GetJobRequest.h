/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class GetJobRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API GetJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the asynchronous job. Use the GetJob operation to
   * check the status of the job and to retrieve its results.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetJobRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;
  bool m_jobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
