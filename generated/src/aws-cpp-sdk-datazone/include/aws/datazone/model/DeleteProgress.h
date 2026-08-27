/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The progress of a domain deletion, including the number of projects that
 * Amazon DataZone successfully deleted. Amazon DataZone returns this structure in
 * the response to a <code>GetDomain</code> request while a cascade deletion is in
 * progress.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteProgress">AWS
 * API Reference</a></p>
 */
class DeleteProgress {
 public:
  AWS_DATAZONE_API DeleteProgress() = default;
  AWS_DATAZONE_API DeleteProgress(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API DeleteProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of projects that Amazon DataZone successfully deleted during the
   * domain deletion.</p>
   */
  inline int GetSuccessfullyDeletedProjectCount() const { return m_successfullyDeletedProjectCount; }
  inline bool SuccessfullyDeletedProjectCountHasBeenSet() const { return m_successfullyDeletedProjectCountHasBeenSet; }
  inline void SetSuccessfullyDeletedProjectCount(int value) {
    m_successfullyDeletedProjectCountHasBeenSet = true;
    m_successfullyDeletedProjectCount = value;
  }
  inline DeleteProgress& WithSuccessfullyDeletedProjectCount(int value) {
    SetSuccessfullyDeletedProjectCount(value);
    return *this;
  }
  ///@}
 private:
  int m_successfullyDeletedProjectCount{0};
  bool m_successfullyDeletedProjectCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
