/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Identity.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Summary data of the moderators in a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelModeratorSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API ChannelModeratorSummary
  {
  public:
    ChannelModeratorSummary();
    ChannelModeratorSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelModeratorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data for a moderator.</p>
     */
    inline const Identity& GetModerator() const{ return m_moderator; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline bool ModeratorHasBeenSet() const { return m_moderatorHasBeenSet; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline void SetModerator(const Identity& value) { m_moderatorHasBeenSet = true; m_moderator = value; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline void SetModerator(Identity&& value) { m_moderatorHasBeenSet = true; m_moderator = std::move(value); }

    /**
     * <p>The data for a moderator.</p>
     */
    inline ChannelModeratorSummary& WithModerator(const Identity& value) { SetModerator(value); return *this;}

    /**
     * <p>The data for a moderator.</p>
     */
    inline ChannelModeratorSummary& WithModerator(Identity&& value) { SetModerator(std::move(value)); return *this;}

  private:

    Identity m_moderator;
    bool m_moderatorHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
