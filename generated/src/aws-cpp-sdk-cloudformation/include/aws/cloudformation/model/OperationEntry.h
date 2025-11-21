/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/OperationType.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>Contains information about a CloudFormation operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/OperationEntry">AWS
 * API Reference</a></p>
 */
class OperationEntry {
 public:
  AWS_CLOUDFORMATION_API OperationEntry() = default;
  AWS_CLOUDFORMATION_API OperationEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API OperationEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of operation.</p>
   */
  inline OperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(OperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline OperationEntry& WithOperationType(OperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the operation.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  OperationEntry& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}
 private:
  OperationType m_operationType{OperationType::NOT_SET};
  bool m_operationTypeHasBeenSet = false;

  Aws::String m_operationId;
  bool m_operationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
