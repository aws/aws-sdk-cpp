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
 * <p>Specifies the Collector to retrieve.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCollectorInput">AWS
 * API Reference</a></p>
 */
class GetCollectorRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API GetCollectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCollector"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Collector to retrieve.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  GetCollectorRequest& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectorId;
  bool m_collectorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
