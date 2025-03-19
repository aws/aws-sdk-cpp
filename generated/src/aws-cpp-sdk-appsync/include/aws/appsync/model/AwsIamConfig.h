/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The Identity and Access Management (IAM) configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AwsIamConfig">AWS
   * API Reference</a></p>
   */
  class AwsIamConfig
  {
  public:
    AWS_APPSYNC_API AwsIamConfig() = default;
    AWS_APPSYNC_API AwsIamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AwsIamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline const Aws::String& GetSigningRegion() const { return m_signingRegion; }
    inline bool SigningRegionHasBeenSet() const { return m_signingRegionHasBeenSet; }
    template<typename SigningRegionT = Aws::String>
    void SetSigningRegion(SigningRegionT&& value) { m_signingRegionHasBeenSet = true; m_signingRegion = std::forward<SigningRegionT>(value); }
    template<typename SigningRegionT = Aws::String>
    AwsIamConfig& WithSigningRegion(SigningRegionT&& value) { SetSigningRegion(std::forward<SigningRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline const Aws::String& GetSigningServiceName() const { return m_signingServiceName; }
    inline bool SigningServiceNameHasBeenSet() const { return m_signingServiceNameHasBeenSet; }
    template<typename SigningServiceNameT = Aws::String>
    void SetSigningServiceName(SigningServiceNameT&& value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName = std::forward<SigningServiceNameT>(value); }
    template<typename SigningServiceNameT = Aws::String>
    AwsIamConfig& WithSigningServiceName(SigningServiceNameT&& value) { SetSigningServiceName(std::forward<SigningServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signingRegion;
    bool m_signingRegionHasBeenSet = false;

    Aws::String m_signingServiceName;
    bool m_signingServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
