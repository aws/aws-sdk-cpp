/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Target SIP media application and other details, such as priority and AWS
   * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
   * provided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SipRuleTargetApplication">AWS
   * API Reference</a></p>
   */
  class SipRuleTargetApplication
  {
  public:
    AWS_CHIME_API SipRuleTargetApplication();
    AWS_CHIME_API SipRuleTargetApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SipRuleTargetApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SIP media application ID.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The SIP media application ID.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The SIP media application ID.</p>
     */
    inline SipRuleTargetApplication& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>Priority of the SIP media application in the target list.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Priority of the SIP media application in the target list.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Priority of the SIP media application in the target list.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Priority of the SIP media application in the target list.</p>
     */
    inline SipRuleTargetApplication& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline SipRuleTargetApplication& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS Region of the target application.</p>
     */
    inline SipRuleTargetApplication& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of the target application.</p>
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
} // namespace Chime
} // namespace Aws
