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
    AWS_DATAZONE_API SubscriptionTargetForm() = default;
    AWS_DATAZONE_API SubscriptionTargetForm(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionTargetForm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the subscription target configuration.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    SubscriptionTargetForm& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The form name included in the subscription target configuration.</p>
     */
    inline const Aws::String& GetFormName() const { return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    template<typename FormNameT = Aws::String>
    void SetFormName(FormNameT&& value) { m_formNameHasBeenSet = true; m_formName = std::forward<FormNameT>(value); }
    template<typename FormNameT = Aws::String>
    SubscriptionTargetForm& WithFormName(FormNameT&& value) { SetFormName(std::forward<FormNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
