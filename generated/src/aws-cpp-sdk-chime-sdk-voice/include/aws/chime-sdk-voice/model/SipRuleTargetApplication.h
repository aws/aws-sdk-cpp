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

  /**
   * <p>A target SIP media application and other details, such as priority and AWS
   * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
   * provided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipRuleTargetApplication">AWS
   * API Reference</a></p>
   */
  class SipRuleTargetApplication
  {
  public:
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication();
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipRuleTargetApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>The priority setting of a rule's target SIP media application.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority setting of a rule's target SIP media application.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority setting of a rule's target SIP media application.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority setting of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
    inline SipRuleTargetApplication& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of a rule's target SIP media application.</p>
     */
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
