/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class GetFixtureRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API GetFixtureRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFixture"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the fixture to retrieve, as returned by SearchFixtures.</p>
   */
  inline const Aws::String& GetFixtureId() const { return m_fixtureId; }
  inline bool FixtureIdHasBeenSet() const { return m_fixtureIdHasBeenSet; }
  template <typename FixtureIdT = Aws::String>
  void SetFixtureId(FixtureIdT&& value) {
    m_fixtureIdHasBeenSet = true;
    m_fixtureId = std::forward<FixtureIdT>(value);
  }
  template <typename FixtureIdT = Aws::String>
  GetFixtureRequest& WithFixtureId(FixtureIdT&& value) {
    SetFixtureId(std::forward<FixtureIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fixtureId;
  bool m_fixtureIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
