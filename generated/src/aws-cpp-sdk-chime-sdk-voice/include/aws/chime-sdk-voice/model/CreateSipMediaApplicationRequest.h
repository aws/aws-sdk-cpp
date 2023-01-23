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
  class CreateSipMediaApplicationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplication"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    
    inline CreateSipMediaApplicationRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    
    inline CreateSipMediaApplicationRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateSipMediaApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateSipMediaApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const{ return m_endpoints; }

    
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    
    inline void SetEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    
    inline void SetEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    
    inline CreateSipMediaApplicationRequest& WithEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { SetEndpoints(value); return *this;}

    
    inline CreateSipMediaApplicationRequest& WithEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationRequest& AddEndpoints(const SipMediaApplicationEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    
    inline CreateSipMediaApplicationRequest& AddEndpoints(SipMediaApplicationEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
