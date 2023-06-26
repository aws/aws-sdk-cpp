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
    AWS_APPSYNC_API AwsIamConfig();
    AWS_APPSYNC_API AwsIamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AwsIamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline const Aws::String& GetSigningRegion() const{ return m_signingRegion; }

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline bool SigningRegionHasBeenSet() const { return m_signingRegionHasBeenSet; }

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline void SetSigningRegion(const Aws::String& value) { m_signingRegionHasBeenSet = true; m_signingRegion = value; }

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline void SetSigningRegion(Aws::String&& value) { m_signingRegionHasBeenSet = true; m_signingRegion = std::move(value); }

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline void SetSigningRegion(const char* value) { m_signingRegionHasBeenSet = true; m_signingRegion.assign(value); }

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(const Aws::String& value) { SetSigningRegion(value); return *this;}

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(Aws::String&& value) { SetSigningRegion(std::move(value)); return *this;}

    /**
     * <p>The signing Amazon Web Services Region for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningRegion(const char* value) { SetSigningRegion(value); return *this;}


    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline const Aws::String& GetSigningServiceName() const{ return m_signingServiceName; }

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline bool SigningServiceNameHasBeenSet() const { return m_signingServiceNameHasBeenSet; }

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline void SetSigningServiceName(const Aws::String& value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName = value; }

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline void SetSigningServiceName(Aws::String&& value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName = std::move(value); }

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline void SetSigningServiceName(const char* value) { m_signingServiceNameHasBeenSet = true; m_signingServiceName.assign(value); }

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(const Aws::String& value) { SetSigningServiceName(value); return *this;}

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(Aws::String&& value) { SetSigningServiceName(std::move(value)); return *this;}

    /**
     * <p>The signing service name for IAM authorization.</p>
     */
    inline AwsIamConfig& WithSigningServiceName(const char* value) { SetSigningServiceName(value); return *this;}

  private:

    Aws::String m_signingRegion;
    bool m_signingRegionHasBeenSet = false;

    Aws::String m_signingServiceName;
    bool m_signingServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
