/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationEndpoint.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class SipMediaApplication
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplication();
    AWS_CHIMESDKVOICE_API SipMediaApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    
    inline SipMediaApplication& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    
    inline SipMediaApplication& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    
    inline SipMediaApplication& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    
    inline SipMediaApplication& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    
    inline SipMediaApplication& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    
    inline SipMediaApplication& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline SipMediaApplication& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline SipMediaApplication& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline SipMediaApplication& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const{ return m_endpoints; }

    
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    
    inline void SetEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    
    inline void SetEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    
    inline SipMediaApplication& WithEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { SetEndpoints(value); return *this;}

    
    inline SipMediaApplication& WithEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    
    inline SipMediaApplication& AddEndpoints(const SipMediaApplicationEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    
    inline SipMediaApplication& AddEndpoints(SipMediaApplicationEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline SipMediaApplication& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline SipMediaApplication& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline SipMediaApplication& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline SipMediaApplication& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
