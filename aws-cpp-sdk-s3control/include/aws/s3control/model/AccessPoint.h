/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/NetworkOrigin.h>
#include <aws/s3control/model/VpcConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>An access point used to access a bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccessPoint">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API AccessPoint
  {
  public:
    AccessPoint();
    AccessPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of this access point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this access point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this access point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this access point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this access point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this access point.</p>
     */
    inline AccessPoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this access point.</p>
     */
    inline AccessPoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this access point.</p>
     */
    inline AccessPoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline const NetworkOrigin& GetNetworkOrigin() const{ return m_networkOrigin; }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline bool NetworkOriginHasBeenSet() const { return m_networkOriginHasBeenSet; }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline void SetNetworkOrigin(const NetworkOrigin& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = value; }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline void SetNetworkOrigin(NetworkOrigin&& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = std::move(value); }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline AccessPoint& WithNetworkOrigin(const NetworkOrigin& value) { SetNetworkOrigin(value); return *this;}

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p>
     */
    inline AccessPoint& WithNetworkOrigin(NetworkOrigin&& value) { SetNetworkOrigin(std::move(value)); return *this;}


    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline AccessPoint& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) configuration for this access point, if one
     * exists.</p>
     */
    inline AccessPoint& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline AccessPoint& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline AccessPoint& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket associated with this access point.</p>
     */
    inline AccessPoint& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The ARN for the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN for the access point.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>The ARN for the access point.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>The ARN for the access point.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN for the access point.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>The ARN for the access point.</p>
     */
    inline AccessPoint& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN for the access point.</p>
     */
    inline AccessPoint& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the access point.</p>
     */
    inline AccessPoint& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    NetworkOrigin m_networkOrigin;
    bool m_networkOriginHasBeenSet;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
