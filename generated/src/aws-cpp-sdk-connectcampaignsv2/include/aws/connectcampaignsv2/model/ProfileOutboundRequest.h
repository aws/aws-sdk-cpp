/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Information about a profile outbound request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ProfileOutboundRequest">AWS
   * API Reference</a></p>
   */
  class ProfileOutboundRequest
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ProfileOutboundRequest();
    AWS_CONNECTCAMPAIGNSV2_API ProfileOutboundRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API ProfileOutboundRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ProfileOutboundRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ProfileOutboundRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ProfileOutboundRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ProfileOutboundRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ProfileOutboundRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ProfileOutboundRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline ProfileOutboundRequest& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline ProfileOutboundRequest& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
