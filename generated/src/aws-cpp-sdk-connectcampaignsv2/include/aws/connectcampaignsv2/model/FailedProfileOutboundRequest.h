/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/ProfileOutboundRequestFailureCode.h>
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
   * <p>Failure details for a profile outbound request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/FailedProfileOutboundRequest">AWS
   * API Reference</a></p>
   */
  class FailedProfileOutboundRequest
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API FailedProfileOutboundRequest();
    AWS_CONNECTCAMPAIGNSV2_API FailedProfileOutboundRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API FailedProfileOutboundRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline FailedProfileOutboundRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline FailedProfileOutboundRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline FailedProfileOutboundRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FailedProfileOutboundRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FailedProfileOutboundRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FailedProfileOutboundRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const ProfileOutboundRequestFailureCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const ProfileOutboundRequestFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(ProfileOutboundRequestFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline FailedProfileOutboundRequest& WithFailureCode(const ProfileOutboundRequestFailureCode& value) { SetFailureCode(value); return *this;}
    inline FailedProfileOutboundRequest& WithFailureCode(ProfileOutboundRequestFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ProfileOutboundRequestFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
