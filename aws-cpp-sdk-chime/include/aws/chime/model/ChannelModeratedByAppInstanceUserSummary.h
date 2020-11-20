/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelSummary.h>
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
   * <p>Returns the summary data for a moderated channel.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelModeratedByAppInstanceUserSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API ChannelModeratedByAppInstanceUserSummary
  {
  public:
    ChannelModeratedByAppInstanceUserSummary();
    ChannelModeratedByAppInstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelModeratedByAppInstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ChannelSummary& GetChannelSummary() const{ return m_channelSummary; }

    
    inline bool ChannelSummaryHasBeenSet() const { return m_channelSummaryHasBeenSet; }

    
    inline void SetChannelSummary(const ChannelSummary& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = value; }

    
    inline void SetChannelSummary(ChannelSummary&& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = std::move(value); }

    
    inline ChannelModeratedByAppInstanceUserSummary& WithChannelSummary(const ChannelSummary& value) { SetChannelSummary(value); return *this;}

    
    inline ChannelModeratedByAppInstanceUserSummary& WithChannelSummary(ChannelSummary&& value) { SetChannelSummary(std::move(value)); return *this;}

  private:

    ChannelSummary m_channelSummary;
    bool m_channelSummaryHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
