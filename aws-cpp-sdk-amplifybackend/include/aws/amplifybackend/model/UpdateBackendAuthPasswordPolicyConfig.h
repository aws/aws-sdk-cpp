/**
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
   * <p>Describes the password policy for your Amazon Cognito user pool configured as
   * a part of your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthPasswordPolicyConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthPasswordPolicyConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthPasswordPolicyConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthPasswordPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthPasswordPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline const Aws::Vector<AdditionalConstraintsElement>& GetAdditionalConstraints() const{ return m_additionalConstraints; }

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline bool AdditionalConstraintsHasBeenSet() const { return m_additionalConstraintsHasBeenSet; }

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline void SetAdditionalConstraints(const Aws::Vector<AdditionalConstraintsElement>& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints = value; }

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline void SetAdditionalConstraints(Aws::Vector<AdditionalConstraintsElement>&& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints = std::move(value); }

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthPasswordPolicyConfig& WithAdditionalConstraints(const Aws::Vector<AdditionalConstraintsElement>& value) { SetAdditionalConstraints(value); return *this;}

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthPasswordPolicyConfig& WithAdditionalConstraints(Aws::Vector<AdditionalConstraintsElement>&& value) { SetAdditionalConstraints(std::move(value)); return *this;}

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthPasswordPolicyConfig& AddAdditionalConstraints(const AdditionalConstraintsElement& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints.push_back(value); return *this; }

    /**
     * <p>Describes additional constraints on password requirements to sign in to the
     * auth resource, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthPasswordPolicyConfig& AddAdditionalConstraints(AdditionalConstraintsElement&& value) { m_additionalConstraintsHasBeenSet = true; m_additionalConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the minimum length of the password required to sign in to the auth
     * resource, configured as a part of your Amplify project.</p>
     */
    inline double GetMinimumLength() const{ return m_minimumLength; }

    /**
     * <p>Describes the minimum length of the password required to sign in to the auth
     * resource, configured as a part of your Amplify project.</p>
     */
    inline bool MinimumLengthHasBeenSet() const { return m_minimumLengthHasBeenSet; }

    /**
     * <p>Describes the minimum length of the password required to sign in to the auth
     * resource, configured as a part of your Amplify project.</p>
     */
    inline void SetMinimumLength(double value) { m_minimumLengthHasBeenSet = true; m_minimumLength = value; }

    /**
     * <p>Describes the minimum length of the password required to sign in to the auth
     * resource, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthPasswordPolicyConfig& WithMinimumLength(double value) { SetMinimumLength(value); return *this;}

  private:

    Aws::Vector<AdditionalConstraintsElement> m_additionalConstraints;
    bool m_additionalConstraintsHasBeenSet = false;

    double m_minimumLength;
    bool m_minimumLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
