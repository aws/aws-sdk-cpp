/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentUpdateContent.h>
#include <aws/connectcases/model/CustomUpdateContent.h>
#include <aws/connectcases/model/SlaUpdateContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Represents the content of a related item to be updated. This is a union type
 * that can contain comment content, custom content, or SLA content.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemUpdateContent">AWS
 * API Reference</a></p>
 */
class RelatedItemUpdateContent {
 public:
  AWS_CONNECTCASES_API RelatedItemUpdateContent() = default;
  AWS_CONNECTCASES_API RelatedItemUpdateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API RelatedItemUpdateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const CommentUpdateContent& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = CommentUpdateContent>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = CommentUpdateContent>
  RelatedItemUpdateContent& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CustomUpdateContent& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = CustomUpdateContent>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = CustomUpdateContent>
  RelatedItemUpdateContent& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the content of an SLA to be updated.</p>
   */
  inline const SlaUpdateContent& GetSla() const { return m_sla; }
  inline bool SlaHasBeenSet() const { return m_slaHasBeenSet; }
  template <typename SlaT = SlaUpdateContent>
  void SetSla(SlaT&& value) {
    m_slaHasBeenSet = true;
    m_sla = std::forward<SlaT>(value);
  }
  template <typename SlaT = SlaUpdateContent>
  RelatedItemUpdateContent& WithSla(SlaT&& value) {
    SetSla(std::forward<SlaT>(value));
    return *this;
  }
  ///@}
 private:
  CommentUpdateContent m_comment;

  CustomUpdateContent m_custom;

  SlaUpdateContent m_sla;
  bool m_commentHasBeenSet = false;
  bool m_customHasBeenSet = false;
  bool m_slaHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
