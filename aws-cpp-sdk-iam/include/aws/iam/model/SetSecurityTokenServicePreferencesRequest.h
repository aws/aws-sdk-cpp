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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/model/GlobalEndpointTokenVersion.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API SetSecurityTokenServicePreferencesRequest : public IAMRequest
  {
  public:
    SetSecurityTokenServicePreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetSecurityTokenServicePreferences"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const GlobalEndpointTokenVersion& GetGlobalEndpointTokenVersion() const{ return m_globalEndpointTokenVersion; }

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool GlobalEndpointTokenVersionHasBeenSet() const { return m_globalEndpointTokenVersionHasBeenSet; }

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetGlobalEndpointTokenVersion(const GlobalEndpointTokenVersion& value) { m_globalEndpointTokenVersionHasBeenSet = true; m_globalEndpointTokenVersion = value; }

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetGlobalEndpointTokenVersion(GlobalEndpointTokenVersion&& value) { m_globalEndpointTokenVersionHasBeenSet = true; m_globalEndpointTokenVersion = std::move(value); }

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline SetSecurityTokenServicePreferencesRequest& WithGlobalEndpointTokenVersion(const GlobalEndpointTokenVersion& value) { SetGlobalEndpointTokenVersion(value); return *this;}

    /**
     * <p>The version of the global endpoint token. Version 1 tokens are valid only in
     * AWS Regions that are available by default. These tokens do not work in manually
     * enabled Regions, such as Asia Pacific (Hong Kong). Version 2 tokens are valid in
     * all Regions. However, version 2 tokens are longer and might affect systems where
     * you temporarily store tokens.</p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
     */
    inline SetSecurityTokenServicePreferencesRequest& WithGlobalEndpointTokenVersion(GlobalEndpointTokenVersion&& value) { SetGlobalEndpointTokenVersion(std::move(value)); return *this;}

  private:

    GlobalEndpointTokenVersion m_globalEndpointTokenVersion;
    bool m_globalEndpointTokenVersionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
