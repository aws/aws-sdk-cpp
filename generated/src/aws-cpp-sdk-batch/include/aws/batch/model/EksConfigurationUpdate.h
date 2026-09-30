/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksAccessEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>An object that represents the attributes of an Batch compute environment's
 * Amazon EKS configuration that can be updated. Currently <code>accessEntry</code>
 * is the only attribute that you can change after the compute environment is
 * created. For more information, see <a
 * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-access-entries.html">Amazon
 * EKS access entry authentication</a> in the <i>Batch User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksConfigurationUpdate">AWS
 * API Reference</a></p>
 */
class EksConfigurationUpdate {
 public:
  AWS_BATCH_API EksConfigurationUpdate() = default;
  AWS_BATCH_API EksConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated access entry configuration for the compute environment. Set
   * <code>desiredState</code> to declare whether Batch will manage an access entry
   * on the cluster. For the accepted values, see <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_EksAccessEntry.html">
   * <code>EksAccessEntry</code> </a>.</p>
   */
  inline const EksAccessEntry& GetAccessEntry() const { return m_accessEntry; }
  inline bool AccessEntryHasBeenSet() const { return m_accessEntryHasBeenSet; }
  template <typename AccessEntryT = EksAccessEntry>
  void SetAccessEntry(AccessEntryT&& value) {
    m_accessEntryHasBeenSet = true;
    m_accessEntry = std::forward<AccessEntryT>(value);
  }
  template <typename AccessEntryT = EksAccessEntry>
  EksConfigurationUpdate& WithAccessEntry(AccessEntryT&& value) {
    SetAccessEntry(std::forward<AccessEntryT>(value));
    return *this;
  }
  ///@}
 private:
  EksAccessEntry m_accessEntry;
  bool m_accessEntryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
