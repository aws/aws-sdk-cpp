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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The standard that you want to enable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsSubscriptionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API StandardsSubscriptionRequest
  {
  public:
    StandardsSubscriptionRequest();
    StandardsSubscriptionRequest(Aws::Utils::Json::JsonView jsonValue);
    StandardsSubscriptionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline StandardsSubscriptionRequest& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline StandardsSubscriptionRequest& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the standard that you want to enable.</p> <important> <p>In this
     * release, Security Hub only supports the CIS AWS Foundations standard. </p>
     * <p>Its ARN is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline StandardsSubscriptionRequest& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStandardsInput() const{ return m_standardsInput; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline bool StandardsInputHasBeenSet() const { return m_standardsInputHasBeenSet; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline void SetStandardsInput(const Aws::Map<Aws::String, Aws::String>& value) { m_standardsInputHasBeenSet = true; m_standardsInput = value; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline void SetStandardsInput(Aws::Map<Aws::String, Aws::String>&& value) { m_standardsInputHasBeenSet = true; m_standardsInput = std::move(value); }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& WithStandardsInput(const Aws::Map<Aws::String, Aws::String>& value) { SetStandardsInput(value); return *this;}

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& WithStandardsInput(Aws::Map<Aws::String, Aws::String>&& value) { SetStandardsInput(std::move(value)); return *this;}

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(const Aws::String& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(Aws::String&& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(const Aws::String& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(Aws::String&& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(const char* key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(Aws::String&& key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscriptionRequest& AddStandardsInput(const char* key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }

  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_standardsInput;
    bool m_standardsInputHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
