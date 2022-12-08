/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class SipRuleTargetApplication
  {
  public:
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication();
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    
    inline SipRuleTargetApplication& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    
    inline int GetPriority() const{ return m_priority; }

    
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    
    inline SipRuleTargetApplication& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    
    inline SipRuleTargetApplication& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    
    inline SipRuleTargetApplication& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    
    inline SipRuleTargetApplication& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
