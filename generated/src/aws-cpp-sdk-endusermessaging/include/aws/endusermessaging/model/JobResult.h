/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>Pairs an asynchronous job with the resource identifier from your request that
 * the job processes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/JobResult">AWS
 * API Reference</a></p>
 */
class JobResult {
 public:
  AWS_ENDUSERMESSAGING_API JobResult() = default;
  AWS_ENDUSERMESSAGING_API JobResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API JobResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  JobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier from your request that this job is processing.</p>
   */
  inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
  inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
  template <typename ResourceIdentifierT = Aws::String>
  void SetResourceIdentifier(ResourceIdentifierT&& value) {
    m_resourceIdentifierHasBeenSet = true;
    m_resourceIdentifier = std::forward<ResourceIdentifierT>(value);
  }
  template <typename ResourceIdentifierT = Aws::String>
  JobResult& WithResourceIdentifier(ResourceIdentifierT&& value) {
    SetResourceIdentifier(std::forward<ResourceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  Aws::String m_resourceIdentifier;
  bool m_jobIdHasBeenSet = false;
  bool m_resourceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
