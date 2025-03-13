/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/MainframeActionType.h>
#include <aws/apptest/model/MainframeActionProperties.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the mainframe action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/MainframeAction">AWS
   * API Reference</a></p>
   */
  class MainframeAction
  {
  public:
    AWS_APPTEST_API MainframeAction() = default;
    AWS_APPTEST_API MainframeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the mainframe action.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    MainframeAction& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the mainframe action.</p>
     */
    inline const MainframeActionType& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = MainframeActionType>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = MainframeActionType>
    MainframeAction& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the mainframe action.</p>
     */
    inline const MainframeActionProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = MainframeActionProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = MainframeActionProperties>
    MainframeAction& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    MainframeActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    MainframeActionProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
