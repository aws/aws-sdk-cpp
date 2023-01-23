/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationEndpoint.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class UpdateSipMediaApplicationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipMediaApplication"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateSipMediaApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateSipMediaApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateSipMediaApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const{ return m_endpoints; }

    
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    
    inline void SetEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    
    inline void SetEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    
    inline UpdateSipMediaApplicationRequest& WithEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { SetEndpoints(value); return *this;}

    
    inline UpdateSipMediaApplicationRequest& WithEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    
    inline UpdateSipMediaApplicationRequest& AddEndpoints(const SipMediaApplicationEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    
    inline UpdateSipMediaApplicationRequest& AddEndpoints(SipMediaApplicationEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
