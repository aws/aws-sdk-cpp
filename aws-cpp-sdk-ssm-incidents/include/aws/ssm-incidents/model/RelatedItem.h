/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ItemIdentifier.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Resources that responders use to triage and mitigate the
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RelatedItem">AWS
   * API Reference</a></p>
   */
  class RelatedItem
  {
  public:
    AWS_SSMINCIDENTS_API RelatedItem();
    AWS_SSMINCIDENTS_API RelatedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RelatedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline const Aws::String& GetGeneratedId() const{ return m_generatedId; }

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline bool GeneratedIdHasBeenSet() const { return m_generatedIdHasBeenSet; }

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline void SetGeneratedId(const Aws::String& value) { m_generatedIdHasBeenSet = true; m_generatedId = value; }

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline void SetGeneratedId(Aws::String&& value) { m_generatedIdHasBeenSet = true; m_generatedId = std::move(value); }

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline void SetGeneratedId(const char* value) { m_generatedIdHasBeenSet = true; m_generatedId.assign(value); }

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline RelatedItem& WithGeneratedId(const Aws::String& value) { SetGeneratedId(value); return *this;}

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline RelatedItem& WithGeneratedId(Aws::String&& value) { SetGeneratedId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline RelatedItem& WithGeneratedId(const char* value) { SetGeneratedId(value); return *this;}


    /**
     * <p>Details about the related item.</p>
     */
    inline const ItemIdentifier& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Details about the related item.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Details about the related item.</p>
     */
    inline void SetIdentifier(const ItemIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Details about the related item.</p>
     */
    inline void SetIdentifier(ItemIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Details about the related item.</p>
     */
    inline RelatedItem& WithIdentifier(const ItemIdentifier& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Details about the related item.</p>
     */
    inline RelatedItem& WithIdentifier(ItemIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}


    /**
     * <p>The title of the related item.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the related item.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the related item.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the related item.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the related item.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the related item.</p>
     */
    inline RelatedItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the related item.</p>
     */
    inline RelatedItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the related item.</p>
     */
    inline RelatedItem& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_generatedId;
    bool m_generatedIdHasBeenSet = false;

    ItemIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
