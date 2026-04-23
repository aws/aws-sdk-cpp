/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API LinkAttributeUpdate
  {
  public:
    LinkAttributeUpdate();
    LinkAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    LinkAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetAttributeKey() const{ return m_attributeKey; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetAttributeKey(const AttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetAttributeKey(AttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::move(value); }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline LinkAttributeUpdate& WithAttributeKey(const AttributeKey& value) { SetAttributeKey(value); return *this;}

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline LinkAttributeUpdate& WithAttributeKey(AttributeKey&& value) { SetAttributeKey(std::move(value)); return *this;}


    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const LinkAttributeAction& GetAttributeAction() const{ return m_attributeAction; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline bool AttributeActionHasBeenSet() const { return m_attributeActionHasBeenSet; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetAttributeAction(const LinkAttributeAction& value) { m_attributeActionHasBeenSet = true; m_attributeAction = value; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetAttributeAction(LinkAttributeAction&& value) { m_attributeActionHasBeenSet = true; m_attributeAction = std::move(value); }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline LinkAttributeUpdate& WithAttributeAction(const LinkAttributeAction& value) { SetAttributeAction(value); return *this;}

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline LinkAttributeUpdate& WithAttributeAction(LinkAttributeAction&& value) { SetAttributeAction(std::move(value)); return *this;}

  private:

    AttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet;

    LinkAttributeAction m_attributeAction;
    bool m_attributeActionHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
