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
#include <aws/xray/model/SamplingRule.h>
#include <aws/core/utils/DateTime.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A <a>SamplingRule</a> and its metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingRuleRecord">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API SamplingRuleRecord
  {
  public:
    SamplingRuleRecord();
    SamplingRuleRecord(Aws::Utils::Json::JsonView jsonValue);
    SamplingRuleRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sampling rule.</p>
     */
    inline const SamplingRule& GetSamplingRule() const{ return m_samplingRule; }

    /**
     * <p>The sampling rule.</p>
     */
    inline bool SamplingRuleHasBeenSet() const { return m_samplingRuleHasBeenSet; }

    /**
     * <p>The sampling rule.</p>
     */
    inline void SetSamplingRule(const SamplingRule& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = value; }

    /**
     * <p>The sampling rule.</p>
     */
    inline void SetSamplingRule(SamplingRule&& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = std::move(value); }

    /**
     * <p>The sampling rule.</p>
     */
    inline SamplingRuleRecord& WithSamplingRule(const SamplingRule& value) { SetSamplingRule(value); return *this;}

    /**
     * <p>The sampling rule.</p>
     */
    inline SamplingRuleRecord& WithSamplingRule(SamplingRule&& value) { SetSamplingRule(std::move(value)); return *this;}


    /**
     * <p>When the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the rule was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>When the rule was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the rule was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>When the rule was created.</p>
     */
    inline SamplingRuleRecord& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the rule was created.</p>
     */
    inline SamplingRuleRecord& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>When the rule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>When the rule was last modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>When the rule was last modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>When the rule was last modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>When the rule was last modified.</p>
     */
    inline SamplingRuleRecord& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>When the rule was last modified.</p>
     */
    inline SamplingRuleRecord& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}

  private:

    SamplingRule m_samplingRule;
    bool m_samplingRuleHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
