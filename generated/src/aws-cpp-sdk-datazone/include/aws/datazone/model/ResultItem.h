/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LineageNodeItem.h>

#include <utility>

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
 * <p>Resulting entity from the query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ResultItem">AWS
 * API Reference</a></p>
 */
class ResultItem {
 public:
  AWS_DATAZONE_API ResultItem() = default;
  AWS_DATAZONE_API ResultItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Resulting data lineage node from the query.</p>
   */
  inline const LineageNodeItem& GetLineageNode() const { return m_lineageNode; }
  inline bool LineageNodeHasBeenSet() const { return m_lineageNodeHasBeenSet; }
  template <typename LineageNodeT = LineageNodeItem>
  void SetLineageNode(LineageNodeT&& value) {
    m_lineageNodeHasBeenSet = true;
    m_lineageNode = std::forward<LineageNodeT>(value);
  }
  template <typename LineageNodeT = LineageNodeItem>
  ResultItem& WithLineageNode(LineageNodeT&& value) {
    SetLineageNode(std::forward<LineageNodeT>(value));
    return *this;
  }
  ///@}
 private:
  LineageNodeItem m_lineageNode;
  bool m_lineageNodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
