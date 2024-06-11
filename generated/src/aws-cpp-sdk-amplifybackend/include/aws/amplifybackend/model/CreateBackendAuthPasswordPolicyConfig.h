﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifybackend/model/AdditionalConstraintsElement.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The password policy configuration for the backend to your Amplify
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthPasswordPolicyConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthPasswordPolicyConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthPasswordPolicyConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthPasswordPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthPasswordPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional constraints for the password used to access the backend of your
     * Amplify project.</p>
     */
    inline const Aws::Vector<AdditionalConstraintsElement>& GetAdditionalConstraints() const{ return m_additionalConstraints; }
    inline bool AdditionalConstraintsHasBeenSet() const { return m_additionalConstraintsHasBeenSet; }
    inline void SetAdditionalConstraints(const Aws::Vector<AdditionalConstraintsElement>& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints = value; }
    inline void SetAdditionalConstraints(Aws::Vector<AdditionalConstraintsElement>&& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints = std::move(value); }
    inline CreateBackendAuthPasswordPolicyConfig& WithAdditionalConstraints(const Aws::Vector<AdditionalConstraintsElement>& value) { SetAdditionalConstraints(value); return *this;}
    inline CreateBackendAuthPasswordPolicyConfig& WithAdditionalConstraints(Aws::Vector<AdditionalConstraintsElement>&& value) { SetAdditionalConstraints(std::move(value)); return *this;}
    inline CreateBackendAuthPasswordPolicyConfig& AddAdditionalConstraints(const AdditionalConstraintsElement& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints.push_back(value); return *this; }
    inline CreateBackendAuthPasswordPolicyConfig& AddAdditionalConstraints(AdditionalConstraintsElement&& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum length of the password used to access the backend of your Amplify
     * project.</p>
     */
    inline double GetMinimumLength() const{ return m_minimumLength; }
    inline bool MinimumLengthHasBeenSet() const { return m_minimumLengthHasBeenSet; }
    inline void SetMinimumLength(double value) { m_minimumLengthHasBeenSet = true; m_minimumLength = value; }
    inline CreateBackendAuthPasswordPolicyConfig& WithMinimumLength(double value) { SetMinimumLength(value); return *this;}
    ///@}
  private:

    Aws::Vector<AdditionalConstraintsElement> m_additionalConstraints;
    bool m_additionalConstraintsHasBeenSet = false;

    double m_minimumLength;
    bool m_minimumLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
