/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/Alarm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  /**
   * <p>Contains the output of PutScalingPolicy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PolicyARNType">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API PutScalingPolicyResult
  {
  public:
    PutScalingPolicyResult();
    PutScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    PutScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
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


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PutScalingPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PutScalingPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_policyARN;

    Aws::Vector<Alarm> m_alarms;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
