/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information associated with a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Campaign">AWS
   * API Reference</a></p>
   */
  class Campaign
  {
  public:
    AWS_CONNECT_API Campaign();
    AWS_CONNECT_API Campaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Campaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline Campaign& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline Campaign& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline Campaign& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}

  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
