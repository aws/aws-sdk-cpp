/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/S3Bucket.h>
#include <aws/guardduty/model/Ec2Instance.h>
#include <aws/guardduty/model/AccessKey.h>
#include <aws/guardduty/model/Ec2NetworkInterface.h>
#include <aws/guardduty/model/S3Object.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Web Services resource that is
   * associated with the activity that prompted GuardDuty to generate a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ResourceData">AWS
   * API Reference</a></p>
   */
  class ResourceData
  {
  public:
    AWS_GUARDDUTY_API ResourceData();
    AWS_GUARDDUTY_API ResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the Amazon S3 bucket.</p>
     */
    inline const S3Bucket& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const S3Bucket& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(S3Bucket&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline ResourceData& WithS3Bucket(const S3Bucket& value) { SetS3Bucket(value); return *this;}
    inline ResourceData& WithS3Bucket(S3Bucket&& value) { SetS3Bucket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon EC2 instance.</p>
     */
    inline const Ec2Instance& GetEc2Instance() const{ return m_ec2Instance; }
    inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
    inline void SetEc2Instance(const Ec2Instance& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = value; }
    inline void SetEc2Instance(Ec2Instance&& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = std::move(value); }
    inline ResourceData& WithEc2Instance(const Ec2Instance& value) { SetEc2Instance(value); return *this;}
    inline ResourceData& WithEc2Instance(Ec2Instance&& value) { SetEc2Instance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the IAM access key details of a user that involved
     * in the GuardDuty finding.</p>
     */
    inline const AccessKey& GetAccessKey() const{ return m_accessKey; }
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
    inline void SetAccessKey(const AccessKey& value) { m_accessKeyHasBeenSet = true; m_accessKey = value; }
    inline void SetAccessKey(AccessKey&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::move(value); }
    inline ResourceData& WithAccessKey(const AccessKey& value) { SetAccessKey(value); return *this;}
    inline ResourceData& WithAccessKey(AccessKey&& value) { SetAccessKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the elastic network interface of the Amazon EC2
     * instance.</p>
     */
    inline const Ec2NetworkInterface& GetEc2NetworkInterface() const{ return m_ec2NetworkInterface; }
    inline bool Ec2NetworkInterfaceHasBeenSet() const { return m_ec2NetworkInterfaceHasBeenSet; }
    inline void SetEc2NetworkInterface(const Ec2NetworkInterface& value) { m_ec2NetworkInterfaceHasBeenSet = true; m_ec2NetworkInterface = value; }
    inline void SetEc2NetworkInterface(Ec2NetworkInterface&& value) { m_ec2NetworkInterfaceHasBeenSet = true; m_ec2NetworkInterface = std::move(value); }
    inline ResourceData& WithEc2NetworkInterface(const Ec2NetworkInterface& value) { SetEc2NetworkInterface(value); return *this;}
    inline ResourceData& WithEc2NetworkInterface(Ec2NetworkInterface&& value) { SetEc2NetworkInterface(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon S3 object.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }
    inline ResourceData& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}
    inline ResourceData& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}
    ///@}
  private:

    S3Bucket m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Ec2Instance m_ec2Instance;
    bool m_ec2InstanceHasBeenSet = false;

    AccessKey m_accessKey;
    bool m_accessKeyHasBeenSet = false;

    Ec2NetworkInterface m_ec2NetworkInterface;
    bool m_ec2NetworkInterfaceHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
