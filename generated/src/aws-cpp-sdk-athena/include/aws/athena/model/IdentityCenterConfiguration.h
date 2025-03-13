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
    AWS_ATHENA_API IdentityCenterConfiguration() = default;
    AWS_ATHENA_API IdentityCenterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API IdentityCenterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline bool GetEnableIdentityCenter() const { return m_enableIdentityCenter; }
    inline bool EnableIdentityCenterHasBeenSet() const { return m_enableIdentityCenterHasBeenSet; }
    inline void SetEnableIdentityCenter(bool value) { m_enableIdentityCenterHasBeenSet = true; m_enableIdentityCenter = value; }
    inline IdentityCenterConfiguration& WithEnableIdentityCenter(bool value) { SetEnableIdentityCenter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center instance ARN that the workgroup associates to.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value); }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    IdentityCenterConfiguration& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enableIdentityCenter{false};
    bool m_enableIdentityCenterHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
