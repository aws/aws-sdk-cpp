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
#include <aws/securityhub/model/StandardsStatus.h>
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
   * <p>A resource that represents your subscription to a supported
   * standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsSubscription">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API StandardsSubscription
  {
  public:
    StandardsSubscription();
    StandardsSubscription(Aws::Utils::Json::JsonView jsonValue);
    StandardsSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const{ return m_standardsSubscriptionArn; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(const Aws::String& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = value; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(Aws::String&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(const char* value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline StandardsSubscription& WithStandardsSubscriptionArn(const Aws::String& value) { SetStandardsSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline StandardsSubscription& WithStandardsSubscriptionArn(Aws::String&& value) { SetStandardsSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline StandardsSubscription& WithStandardsSubscriptionArn(const char* value) { SetStandardsSubscriptionArn(value); return *this;}


    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline StandardsSubscription& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline StandardsSubscription& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a standard.</p> <p>In this release, Security Hub supports only the
     * CIS AWS Foundations standard, which uses the following ARN:
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0.</code>
     * </p>
     */
    inline StandardsSubscription& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


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
    inline StandardsSubscription& WithStandardsInput(const Aws::Map<Aws::String, Aws::String>& value) { SetStandardsInput(value); return *this;}

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& WithStandardsInput(Aws::Map<Aws::String, Aws::String>&& value) { SetStandardsInput(std::move(value)); return *this;}

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(const Aws::String& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, const Aws::String& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(const Aws::String& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(const char* key, Aws::String&& value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(Aws::String&& key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value pair of input for the standard.</p>
     */
    inline StandardsSubscription& AddStandardsInput(const char* key, const char* value) { m_standardsInputHasBeenSet = true; m_standardsInput.emplace(key, value); return *this; }


    /**
     * <p>The status of the standards subscription.</p>
     */
    inline const StandardsStatus& GetStandardsStatus() const{ return m_standardsStatus; }

    /**
     * <p>The status of the standards subscription.</p>
     */
    inline bool StandardsStatusHasBeenSet() const { return m_standardsStatusHasBeenSet; }

    /**
     * <p>The status of the standards subscription.</p>
     */
    inline void SetStandardsStatus(const StandardsStatus& value) { m_standardsStatusHasBeenSet = true; m_standardsStatus = value; }

    /**
     * <p>The status of the standards subscription.</p>
     */
    inline void SetStandardsStatus(StandardsStatus&& value) { m_standardsStatusHasBeenSet = true; m_standardsStatus = std::move(value); }

    /**
     * <p>The status of the standards subscription.</p>
     */
    inline StandardsSubscription& WithStandardsStatus(const StandardsStatus& value) { SetStandardsStatus(value); return *this;}

    /**
     * <p>The status of the standards subscription.</p>
     */
    inline StandardsSubscription& WithStandardsStatus(StandardsStatus&& value) { SetStandardsStatus(std::move(value)); return *this;}

  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet;

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_standardsInput;
    bool m_standardsInputHasBeenSet;

    StandardsStatus m_standardsStatus;
    bool m_standardsStatusHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
