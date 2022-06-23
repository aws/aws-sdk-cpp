/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ItemIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_SSMINCIDENTS_API RelatedItem
  {
  public:
    RelatedItem();
    RelatedItem(Aws::Utils::Json::JsonView jsonValue);
    RelatedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

    ItemIdentifier m_identifier;
    bool m_identifierHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
