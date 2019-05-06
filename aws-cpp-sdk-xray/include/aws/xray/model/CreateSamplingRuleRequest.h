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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/xray/model/SamplingRule.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API CreateSamplingRuleRequest : public XRayRequest
  {
  public:
    CreateSamplingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSamplingRule"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The rule definition.</p>
     */
    inline const SamplingRule& GetSamplingRule() const{ return m_samplingRule; }

    /**
     * <p>The rule definition.</p>
     */
    inline bool SamplingRuleHasBeenSet() const { return m_samplingRuleHasBeenSet; }

    /**
     * <p>The rule definition.</p>
     */
    inline void SetSamplingRule(const SamplingRule& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = value; }

    /**
     * <p>The rule definition.</p>
     */
    inline void SetSamplingRule(SamplingRule&& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = std::move(value); }

    /**
     * <p>The rule definition.</p>
     */
    inline CreateSamplingRuleRequest& WithSamplingRule(const SamplingRule& value) { SetSamplingRule(value); return *this;}

    /**
     * <p>The rule definition.</p>
     */
    inline CreateSamplingRuleRequest& WithSamplingRule(SamplingRule&& value) { SetSamplingRule(std::move(value)); return *this;}

  private:

    SamplingRule m_samplingRule;
    bool m_samplingRuleHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
