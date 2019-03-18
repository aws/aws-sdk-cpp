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
   * <p>The AWS IAM configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AwsIamConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API AwsIamConfig
  {
  public:
    AwsIamConfig();
    AwsIamConfig(Aws::Utils::Json::JsonView jsonValue);
    AwsIamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline const Aws::String& GetSigningRegion() const{ return m_signingRegion; }

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline bool SigningRegionHasBeenSet() const { return m_signingRegionHasBeenSet; }

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline void SetSigningRegion(const Aws::String& value) { m_signingRegionHasBeenSet = true; m_signingRegion = value; }

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline void SetSigningRegion(Aws::String&& value) { m_signingRegionHasBeenSet = true; m_signingRegion = std::move(value); }

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline void SetSigningRegion(const char* value) { m_signingRegionHasBeenSet = true; m_signingRegion.assign(value); }

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(const Aws::String& value) { SetSigningRegion(value); return *this;}

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(Aws::String&& value) { SetSigningRegion(std::move(value)); return *this;}

    /**
     * <p>The signing region for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(const char* value) { SetSigningRegion(value); return *this;}


    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline const Aws::String& GetSigningServiceName() const{ return m_signingServiceName; }

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline bool SigningServiceNameHasBeenSet() const { return m_signingServiceNameHasBeenSet; }

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline void SetSigningServiceName(const Aws::String& value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName = value; }

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline void SetSigningServiceName(Aws::String&& value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName = std::move(value); }

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline void SetSigningServiceName(const char* value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName.assign(value); }

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(const Aws::String& value) { SetSigningServiceName(value); return *this;}

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(Aws::String&& value) { SetSigningServiceName(std::move(value)); return *this;}

    /**
     * <p>The signing service name for AWS IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(const char* value) { SetSigningServiceName(value); return *this;}

  private:

    Aws::String m_signingRegion;
    bool m_signingRegionHasBeenSet;

    Aws::String m_signingServiceName;
    bool m_signingServiceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
