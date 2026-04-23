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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/SigningConfigurationOverrides.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Any overrides that are applied to the signing configuration of an AWS Signer
   * platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningPlatformOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningPlatformOverrides
  {
  public:
    SigningPlatformOverrides();
    SigningPlatformOverrides(Aws::Utils::Json::JsonView jsonValue);
    SigningPlatformOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SigningConfigurationOverrides& GetSigningConfiguration() const{ return m_signingConfiguration; }

    
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }

    
    inline void SetSigningConfiguration(const SigningConfigurationOverrides& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = value; }

    
    inline void SetSigningConfiguration(SigningConfigurationOverrides&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::move(value); }

    
    inline SigningPlatformOverrides& WithSigningConfiguration(const SigningConfigurationOverrides& value) { SetSigningConfiguration(value); return *this;}

    
    inline SigningPlatformOverrides& WithSigningConfiguration(SigningConfigurationOverrides&& value) { SetSigningConfiguration(std::move(value)); return *this;}

  private:

    SigningConfigurationOverrides m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
