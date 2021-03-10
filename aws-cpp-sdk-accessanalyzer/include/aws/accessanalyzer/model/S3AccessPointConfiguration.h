/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/NetworkOriginConfiguration.h>
#include <aws/accessanalyzer/model/S3PublicAccessBlockConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The configuration for an Amazon S3 access point for the bucket. You can
   * propose up to 10 access points per bucket. If the proposed Amazon S3 access
   * point configuration is for an existing bucket, the access preview uses the
   * proposed access point configuration in place of the existing access points. To
   * propose an access point without a policy, you can provide an empty string as the
   * access point policy. For more information, see <a
   * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/AmazonS3/latest/dev/creating-access-points.html">Creating
   * access points</a>. For more information about access point policy limits, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points-restrictions-limitations.html">Access
   * points restrictions and limitations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3AccessPointConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API S3AccessPointConfiguration
  {
  public:
    S3AccessPointConfiguration();
    S3AccessPointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3AccessPointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access point policy.</p>
     */
    inline const Aws::String& GetAccessPointPolicy() const{ return m_accessPointPolicy; }

    /**
     * <p>The access point policy.</p>
     */
    inline bool AccessPointPolicyHasBeenSet() const { return m_accessPointPolicyHasBeenSet; }

    /**
     * <p>The access point policy.</p>
     */
    inline void SetAccessPointPolicy(const Aws::String& value) { m_accessPointPolicyHasBeenSet = true; m_accessPointPolicy = value; }

    /**
     * <p>The access point policy.</p>
     */
    inline void SetAccessPointPolicy(Aws::String&& value) { m_accessPointPolicyHasBeenSet = true; m_accessPointPolicy = std::move(value); }

    /**
     * <p>The access point policy.</p>
     */
    inline void SetAccessPointPolicy(const char* value) { m_accessPointPolicyHasBeenSet = true; m_accessPointPolicy.assign(value); }

    /**
     * <p>The access point policy.</p>
     */
    inline S3AccessPointConfiguration& WithAccessPointPolicy(const Aws::String& value) { SetAccessPointPolicy(value); return *this;}

    /**
     * <p>The access point policy.</p>
     */
    inline S3AccessPointConfiguration& WithAccessPointPolicy(Aws::String&& value) { SetAccessPointPolicy(std::move(value)); return *this;}

    /**
     * <p>The access point policy.</p>
     */
    inline S3AccessPointConfiguration& WithAccessPointPolicy(const char* value) { SetAccessPointPolicy(value); return *this;}


    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline const NetworkOriginConfiguration& GetNetworkOrigin() const{ return m_networkOrigin; }

    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline bool NetworkOriginHasBeenSet() const { return m_networkOriginHasBeenSet; }

    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline void SetNetworkOrigin(const NetworkOriginConfiguration& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = value; }

    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline void SetNetworkOrigin(NetworkOriginConfiguration&& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = std::move(value); }

    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline S3AccessPointConfiguration& WithNetworkOrigin(const NetworkOriginConfiguration& value) { SetNetworkOrigin(value); return *this;}

    /**
     * <p>The proposed <code>Internet</code> and <code>VpcConfiguration</code> to apply
     * to this Amazon S3 access point. If the access preview is for a new resource and
     * neither is specified, the access preview uses <code>Internet</code> for the
     * network origin. If the access preview is for an existing resource and neither is
     * specified, the access preview uses the exiting network origin.</p>
     */
    inline S3AccessPointConfiguration& WithNetworkOrigin(NetworkOriginConfiguration&& value) { SetNetworkOrigin(std::move(value)); return *this;}


    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline const S3PublicAccessBlockConfiguration& GetPublicAccessBlock() const{ return m_publicAccessBlock; }

    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline bool PublicAccessBlockHasBeenSet() const { return m_publicAccessBlockHasBeenSet; }

    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline void SetPublicAccessBlock(const S3PublicAccessBlockConfiguration& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = value; }

    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline void SetPublicAccessBlock(S3PublicAccessBlockConfiguration&& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = std::move(value); }

    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline S3AccessPointConfiguration& WithPublicAccessBlock(const S3PublicAccessBlockConfiguration& value) { SetPublicAccessBlock(value); return *this;}

    /**
     * <p>The proposed <code>S3PublicAccessBlock</code> configuration to apply to this
     * Amazon S3 Access Point.</p>
     */
    inline S3AccessPointConfiguration& WithPublicAccessBlock(S3PublicAccessBlockConfiguration&& value) { SetPublicAccessBlock(std::move(value)); return *this;}

  private:

    Aws::String m_accessPointPolicy;
    bool m_accessPointPolicyHasBeenSet;

    NetworkOriginConfiguration m_networkOrigin;
    bool m_networkOriginHasBeenSet;

    S3PublicAccessBlockConfiguration m_publicAccessBlock;
    bool m_publicAccessBlockHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
