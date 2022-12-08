/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/CloudTrailProperties.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains the generated policy details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GeneratedPolicyProperties">AWS
   * API Reference</a></p>
   */
  class GeneratedPolicyProperties
  {
  public:
    AWS_ACCESSANALYZER_API GeneratedPolicyProperties();
    AWS_ACCESSANALYZER_API GeneratedPolicyProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API GeneratedPolicyProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This value is set to <code>true</code> if the generated policy contains all
     * possible actions for a service that IAM Access Analyzer identified from the
     * CloudTrail trail that you specified, and <code>false</code> otherwise.</p>
     */
    inline bool GetIsComplete() const{ return m_isComplete; }

    /**
     * <p>This value is set to <code>true</code> if the generated policy contains all
     * possible actions for a service that IAM Access Analyzer identified from the
     * CloudTrail trail that you specified, and <code>false</code> otherwise.</p>
     */
    inline bool IsCompleteHasBeenSet() const { return m_isCompleteHasBeenSet; }

    /**
     * <p>This value is set to <code>true</code> if the generated policy contains all
     * possible actions for a service that IAM Access Analyzer identified from the
     * CloudTrail trail that you specified, and <code>false</code> otherwise.</p>
     */
    inline void SetIsComplete(bool value) { m_isCompleteHasBeenSet = true; m_isComplete = value; }

    /**
     * <p>This value is set to <code>true</code> if the generated policy contains all
     * possible actions for a service that IAM Access Analyzer identified from the
     * CloudTrail trail that you specified, and <code>false</code> otherwise.</p>
     */
    inline GeneratedPolicyProperties& WithIsComplete(bool value) { SetIsComplete(value); return *this;}


    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline GeneratedPolicyProperties& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline GeneratedPolicyProperties& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline GeneratedPolicyProperties& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline const CloudTrailProperties& GetCloudTrailProperties() const{ return m_cloudTrailProperties; }

    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline bool CloudTrailPropertiesHasBeenSet() const { return m_cloudTrailPropertiesHasBeenSet; }

    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline void SetCloudTrailProperties(const CloudTrailProperties& value) { m_cloudTrailPropertiesHasBeenSet = true; m_cloudTrailProperties = value; }

    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline void SetCloudTrailProperties(CloudTrailProperties&& value) { m_cloudTrailPropertiesHasBeenSet = true; m_cloudTrailProperties = std::move(value); }

    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline GeneratedPolicyProperties& WithCloudTrailProperties(const CloudTrailProperties& value) { SetCloudTrailProperties(value); return *this;}

    /**
     * <p>Lists details about the <code>Trail</code> used to generated policy.</p>
     */
    inline GeneratedPolicyProperties& WithCloudTrailProperties(CloudTrailProperties&& value) { SetCloudTrailProperties(std::move(value)); return *this;}

  private:

    bool m_isComplete;
    bool m_isCompleteHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    CloudTrailProperties m_cloudTrailProperties;
    bool m_cloudTrailPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
