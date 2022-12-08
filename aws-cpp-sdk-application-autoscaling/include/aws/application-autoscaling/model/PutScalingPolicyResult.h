/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/Alarm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{
  class PutScalingPolicyResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PutScalingPolicyResult();
    AWS_APPLICATIONAUTOSCALING_API PutScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API PutScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}


    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarms = value; }

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarms = std::move(value); }

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline PutScalingPolicyResult& AddAlarms(const Alarm& value) { m_alarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
     */
    inline PutScalingPolicyResult& AddAlarms(Alarm&& value) { m_alarms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyARN;

    Aws::Vector<Alarm> m_alarms;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
