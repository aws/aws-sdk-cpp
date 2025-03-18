/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 signing process</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SigV4Authorization">AWS
   * API Reference</a></p>
   */
  class SigV4Authorization
  {
  public:
    AWS_IOT_API SigV4Authorization() = default;
    AWS_IOT_API SigV4Authorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SigV4Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signing region.</p>
     */
    inline const Aws::String& GetSigningRegion() const { return m_signingRegion; }
    inline bool SigningRegionHasBeenSet() const { return m_signingRegionHasBeenSet; }
    template<typename SigningRegionT = Aws::String>
    void SetSigningRegion(SigningRegionT&& value) { m_signingRegionHasBeenSet = true; m_signingRegion = std::forward<SigningRegionT>(value); }
    template<typename SigningRegionT = Aws::String>
    SigV4Authorization& WithSigningRegion(SigningRegionT&& value) { SetSigningRegion(std::forward<SigningRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    SigV4Authorization& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signing role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SigV4Authorization& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signingRegion;
    bool m_signingRegionHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
