/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the subscription target configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscriptionTargetForm">AWS
   * API Reference</a></p>
   */
  class SubscriptionTargetForm
  {
  public:
    AWS_DATAZONE_API SubscriptionTargetForm();
    AWS_DATAZONE_API SubscriptionTargetForm(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionTargetForm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}

    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline SubscriptionTargetForm& WithFormName(const char* value) { SetFormName(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
