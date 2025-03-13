/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Summary information about a particular command resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandSummary">AWS
   * API Reference</a></p>
   */
  class CommandSummary
  {
  public:
    AWS_IOT_API CommandSummary() = default;
    AWS_IOT_API CommandSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CommandSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the command.</p>
     */
    inline const Aws::String& GetCommandArn() const { return m_commandArn; }
    inline bool CommandArnHasBeenSet() const { return m_commandArnHasBeenSet; }
    template<typename CommandArnT = Aws::String>
    void SetCommandArn(CommandArnT&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::forward<CommandArnT>(value); }
    template<typename CommandArnT = Aws::String>
    CommandSummary& WithCommandArn(CommandArnT&& value) { SetCommandArn(std::forward<CommandArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the command.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    CommandSummary& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the command.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CommandSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command has been deprecated.</p>
     */
    inline bool GetDeprecated() const { return m_deprecated; }
    inline bool DeprecatedHasBeenSet() const { return m_deprecatedHasBeenSet; }
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }
    inline CommandSummary& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CommandSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CommandSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command is pending deletion.</p>
     */
    inline bool GetPendingDeletion() const { return m_pendingDeletion; }
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }
    inline CommandSummary& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}
  private:

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_deprecated{false};
    bool m_deprecatedHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    bool m_pendingDeletion{false};
    bool m_pendingDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
