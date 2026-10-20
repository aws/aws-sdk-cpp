/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/DisassociationMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>The parameters for disassociating the local replica from a global table using
 * Version 2019.11.21 with multi-Region eventual consistency (MREC).</p> <p>After
 * disassociation completes, the replica remains a standalone regional table that
 * keeps its data, indexes, and table settings.</p> <p>For request requirements,
 * see <a
 * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_UpdateTable.html">UpdateTable</a>.
 * For prerequisites, the protection update, and completion checks, see <a
 * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables-disassociate.html">Disassociating
 * a global table replica</a> in the <i>Amazon DynamoDB Developer
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DisassociateReplicationGroupMemberAction">AWS
 * API Reference</a></p>
 */
class DisassociateReplicationGroupMemberAction {
 public:
  AWS_DYNAMODB_API DisassociateReplicationGroupMemberAction() = default;
  AWS_DYNAMODB_API DisassociateReplicationGroupMemberAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API DisassociateReplicationGroupMemberAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Region of the replica to disassociate. Set this value to the Region where
   * you send the <code>UpdateTable</code> request. You must use credentials for the
   * account that owns the replica.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  DisassociateReplicationGroupMemberAction& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode for handling pending replication before disassociation completes.
   * You must specify <code>WAIT_FOR_REPLICATION</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables-disassociate.html">Disassociating
   * a global table replica</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
   */
  inline DisassociationMode GetDisassociationMode() const { return m_disassociationMode; }
  inline bool DisassociationModeHasBeenSet() const { return m_disassociationModeHasBeenSet; }
  inline void SetDisassociationMode(DisassociationMode value) {
    m_disassociationModeHasBeenSet = true;
    m_disassociationMode = value;
  }
  inline DisassociateReplicationGroupMemberAction& WithDisassociationMode(DisassociationMode value) {
    SetDisassociationMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_regionName;

  DisassociationMode m_disassociationMode{DisassociationMode::NOT_SET};
  bool m_regionNameHasBeenSet = false;
  bool m_disassociationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
