/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateCommandRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCommandRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCommand"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the command to be updated.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    UpdateCommandRequest& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new user-friendly name to use in the console for the command.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateCommandRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the command.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCommandRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that you can use to specify whether to deprecate a command.</p>
     */
    inline bool GetDeprecated() const { return m_deprecated; }
    inline bool DeprecatedHasBeenSet() const { return m_deprecatedHasBeenSet; }
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }
    inline UpdateCommandRequest& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_deprecated{false};
    bool m_deprecatedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
