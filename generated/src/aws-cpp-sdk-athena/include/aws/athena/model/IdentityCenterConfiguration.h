/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies whether the workgroup is IAM Identity Center
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/IdentityCenterConfiguration">AWS
   * API Reference</a></p>
   */
  class IdentityCenterConfiguration
  {
  public:
    AWS_ATHENA_API IdentityCenterConfiguration();
    AWS_ATHENA_API IdentityCenterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API IdentityCenterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline bool GetEnableIdentityCenter() const{ return m_enableIdentityCenter; }

    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline bool EnableIdentityCenterHasBeenSet() const { return m_enableIdentityCenterHasBeenSet; }

    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline void SetEnableIdentityCenter(bool value) { m_enableIdentityCenterHasBeenSet = true; m_enableIdentityCenter = value; }

    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline IdentityCenterConfiguration& WithEnableIdentityCenter(bool value) { SetEnableIdentityCenter(value); return *this;}


    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline IdentityCenterConfiguration& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline IdentityCenterConfiguration& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline IdentityCenterConfiguration& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}

  private:

    bool m_enableIdentityCenter;
    bool m_enableIdentityCenterHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
