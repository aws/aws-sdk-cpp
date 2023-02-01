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
    AWS_IOT_API SigV4Authorization();
    AWS_IOT_API SigV4Authorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SigV4Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The signing region.</p>
     */
    inline const Aws::String& GetSigningRegion() const{ return m_signingRegion; }

    /**
     * <p>The signing region.</p>
     */
    inline bool SigningRegionHasBeenSet() const { return m_signingRegionHasBeenSet; }

    /**
     * <p>The signing region.</p>
     */
    inline void SetSigningRegion(const Aws::String& value) { m_signingRegionHasBeenSet = true; m_signingRegion = value; }

    /**
     * <p>The signing region.</p>
     */
    inline void SetSigningRegion(Aws::String&& value) { m_signingRegionHasBeenSet = true; m_signingRegion = std::move(value); }

    /**
     * <p>The signing region.</p>
     */
    inline void SetSigningRegion(const char* value) { m_signingRegionHasBeenSet = true; m_signingRegion.assign(value); }

    /**
     * <p>The signing region.</p>
     */
    inline SigV4Authorization& WithSigningRegion(const Aws::String& value) { SetSigningRegion(value); return *this;}

    /**
     * <p>The signing region.</p>
     */
    inline SigV4Authorization& WithSigningRegion(Aws::String&& value) { SetSigningRegion(std::move(value)); return *this;}

    /**
     * <p>The signing region.</p>
     */
    inline SigV4Authorization& WithSigningRegion(const char* value) { SetSigningRegion(value); return *this;}


    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline SigV4Authorization& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline SigV4Authorization& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The service name to use while signing with Sig V4.</p>
     */
    inline SigV4Authorization& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The ARN of the signing role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline SigV4Authorization& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline SigV4Authorization& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signing role.</p>
     */
    inline SigV4Authorization& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

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
