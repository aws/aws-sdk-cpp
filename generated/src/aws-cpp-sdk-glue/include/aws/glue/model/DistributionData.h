/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The distribution data for a statistic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DistributionData">AWS
 * API Reference</a></p>
 */
class DistributionData {
 public:
  AWS_GLUE_API DistributionData() = default;
  AWS_GLUE_API DistributionData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DistributionData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The bin edge values for the distribution.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBinEdges() const { return m_binEdges; }
  inline bool BinEdgesHasBeenSet() const { return m_binEdgesHasBeenSet; }
  template <typename BinEdgesT = Aws::Vector<Aws::String>>
  void SetBinEdges(BinEdgesT&& value) {
    m_binEdgesHasBeenSet = true;
    m_binEdges = std::forward<BinEdgesT>(value);
  }
  template <typename BinEdgesT = Aws::Vector<Aws::String>>
  DistributionData& WithBinEdges(BinEdgesT&& value) {
    SetBinEdges(std::forward<BinEdgesT>(value));
    return *this;
  }
  template <typename BinEdgesT = Aws::String>
  DistributionData& AddBinEdges(BinEdgesT&& value) {
    m_binEdgesHasBeenSet = true;
    m_binEdges.emplace_back(std::forward<BinEdgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency count for each bin in the distribution.</p>
   */
  inline const Aws::Vector<int>& GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  template <typename CountT = Aws::Vector<int>>
  void SetCount(CountT&& value) {
    m_countHasBeenSet = true;
    m_count = std::forward<CountT>(value);
  }
  template <typename CountT = Aws::Vector<int>>
  DistributionData& WithCount(CountT&& value) {
    SetCount(std::forward<CountT>(value));
    return *this;
  }
  inline DistributionData& AddCount(int value) {
    m_countHasBeenSet = true;
    m_count.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the column for the distribution.</p>
   */
  inline const Aws::String& GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  template <typename DataTypeT = Aws::String>
  void SetDataType(DataTypeT&& value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = std::forward<DataTypeT>(value);
  }
  template <typename DataTypeT = Aws::String>
  DistributionData& WithDataType(DataTypeT&& value) {
    SetDataType(std::forward<DataTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_binEdges;

  Aws::Vector<int> m_count;

  Aws::String m_dataType;
  bool m_binEdgesHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
