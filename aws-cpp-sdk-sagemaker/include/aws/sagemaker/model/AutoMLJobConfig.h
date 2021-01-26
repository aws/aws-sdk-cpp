/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/sagemaker/model/AutoMLSecurityConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings used for a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLJobConfig
  {
  public:
    AutoMLJobConfig();
    AutoMLJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AutoMLJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline AutoMLJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline AutoMLJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}


    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }

    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline void SetSecurityConfig(const AutoMLSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }

    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline void SetSecurityConfig(AutoMLSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }

    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline AutoMLJobConfig& WithSecurityConfig(const AutoMLSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>Security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline AutoMLJobConfig& WithSecurityConfig(AutoMLSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}

  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet;

    AutoMLSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
