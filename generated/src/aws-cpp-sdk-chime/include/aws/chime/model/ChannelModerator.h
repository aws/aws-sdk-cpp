/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Identity.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of a channel moderator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelModerator">AWS
   * API Reference</a></p>
   */
  class ChannelModerator
  {
  public:
    AWS_CHIME_API ChannelModerator();
    AWS_CHIME_API ChannelModerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelModerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The moderator's data.</p>
     */
    inline const Identity& GetModerator() const{ return m_moderator; }
    inline bool ModeratorHasBeenSet() const { return m_moderatorHasBeenSet; }
    inline void SetModerator(const Identity& value) { m_moderatorHasBeenSet = true; m_moderator = value; }
    inline void SetModerator(Identity&& value) { m_moderatorHasBeenSet = true; m_moderator = std::move(value); }
    inline ChannelModerator& WithModerator(const Identity& value) { SetModerator(value); return *this;}
    inline ChannelModerator& WithModerator(Identity&& value) { SetModerator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelModerator& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelModerator& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelModerator& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelModerator& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelModerator& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline const Identity& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Identity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Identity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ChannelModerator& WithCreatedBy(const Identity& value) { SetCreatedBy(value); return *this;}
    inline ChannelModerator& WithCreatedBy(Identity&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}
  private:

    Identity m_moderator;
    bool m_moderatorHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Identity m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
