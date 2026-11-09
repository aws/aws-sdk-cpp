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
 * <p>Specifies the Collector to disassociate from this Environment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DisassociateCollectorInput">AWS
 * API Reference</a></p>
 */
class DisassociateCollectorRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API DisassociateCollectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateCollector"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Environment whose associations are updated.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  DisassociateCollectorRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Collector to disassociate from this Environment.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  inline bool CollectorArnHasBeenSet() const { return m_collectorArnHasBeenSet; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  DisassociateCollectorRequest& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_collectorArn;
  bool m_environmentIdHasBeenSet = false;
  bool m_collectorArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
