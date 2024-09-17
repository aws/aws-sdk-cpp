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
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate();
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API LinkAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetAttributeKey() const{ return m_attributeKey; }
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }
    inline void SetAttributeKey(const AttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }
    inline void SetAttributeKey(AttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::move(value); }
    inline LinkAttributeUpdate& WithAttributeKey(const AttributeKey& value) { SetAttributeKey(value); return *this;}
    inline LinkAttributeUpdate& WithAttributeKey(AttributeKey&& value) { SetAttributeKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const LinkAttributeAction& GetAttributeAction() const{ return m_attributeAction; }
    inline bool AttributeActionHasBeenSet() const { return m_attributeActionHasBeenSet; }
    inline void SetAttributeAction(const LinkAttributeAction& value) { m_attributeActionHasBeenSet = true; m_attributeAction = value; }
    inline void SetAttributeAction(LinkAttributeAction&& value) { m_attributeActionHasBeenSet = true; m_attributeAction = std::move(value); }
    inline LinkAttributeUpdate& WithAttributeAction(const LinkAttributeAction& value) { SetAttributeAction(value); return *this;}
    inline LinkAttributeUpdate& WithAttributeAction(LinkAttributeAction&& value) { SetAttributeAction(std::move(value)); return *this;}
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
