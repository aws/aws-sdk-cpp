/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/LinkAttributeAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Structure that contains attribute update information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/LinkAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class LinkAttributeUpdate
  {
  public:
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate() = default;
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetAttributeKey() const { return m_attributeKey; }
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }
    template<typename AttributeKeyT = AttributeKey>
    void SetAttributeKey(AttributeKeyT&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::forward<AttributeKeyT>(value); }
    template<typename AttributeKeyT = AttributeKey>
    LinkAttributeUpdate& WithAttributeKey(AttributeKeyT&& value) { SetAttributeKey(std::forward<AttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const LinkAttributeAction& GetAttributeAction() const { return m_attributeAction; }
    inline bool AttributeActionHasBeenSet() const { return m_attributeActionHasBeenSet; }
    template<typename AttributeActionT = LinkAttributeAction>
    void SetAttributeAction(AttributeActionT&& value) { m_attributeActionHasBeenSet = true; m_attributeAction = std::forward<AttributeActionT>(value); }
    template<typename AttributeActionT = LinkAttributeAction>
    LinkAttributeUpdate& WithAttributeAction(AttributeActionT&& value) { SetAttributeAction(std::forward<AttributeActionT>(value)); return *this;}
    ///@}
  private:

    AttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet = false;

    LinkAttributeAction m_attributeAction;
    bool m_attributeActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
