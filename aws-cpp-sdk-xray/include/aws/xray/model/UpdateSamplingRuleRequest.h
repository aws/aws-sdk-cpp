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
#include <aws/xray/model/SamplingRuleUpdate.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API UpdateSamplingRuleRequest : public XRayRequest
  {
  public:
    UpdateSamplingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSamplingRule"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The rule and fields to change.</p>
     */
    inline const SamplingRuleUpdate& GetSamplingRuleUpdate() const{ return m_samplingRuleUpdate; }

    /**
     * <p>The rule and fields to change.</p>
     */
    inline bool SamplingRuleUpdateHasBeenSet() const { return m_samplingRuleUpdateHasBeenSet; }

    /**
     * <p>The rule and fields to change.</p>
     */
    inline void SetSamplingRuleUpdate(const SamplingRuleUpdate& value) { m_samplingRuleUpdateHasBeenSet = true; m_samplingRuleUpdate = value; }

    /**
     * <p>The rule and fields to change.</p>
     */
    inline void SetSamplingRuleUpdate(SamplingRuleUpdate&& value) { m_samplingRuleUpdateHasBeenSet = true; m_samplingRuleUpdate = std::move(value); }

    /**
     * <p>The rule and fields to change.</p>
     */
    inline UpdateSamplingRuleRequest& WithSamplingRuleUpdate(const SamplingRuleUpdate& value) { SetSamplingRuleUpdate(value); return *this;}

    /**
     * <p>The rule and fields to change.</p>
     */
    inline UpdateSamplingRuleRequest& WithSamplingRuleUpdate(SamplingRuleUpdate&& value) { SetSamplingRuleUpdate(std::move(value)); return *this;}

  private:

    SamplingRuleUpdate m_samplingRuleUpdate;
    bool m_samplingRuleUpdateHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
