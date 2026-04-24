/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataExchange {
namespace Model {

/**
 * <p>The configuration for the asset, which can include tags.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetConfiguration">AWS
 * API Reference</a></p>
 */
class AssetConfiguration {
 public:
  AWS_DATAEXCHANGE_API AssetConfiguration() = default;
  AWS_DATAEXCHANGE_API AssetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAEXCHANGE_API AssetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tags to be applied to assets created by the job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  AssetConfiguration& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  AssetConfiguration& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataExchange
}  // namespace Aws
