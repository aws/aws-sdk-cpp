/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccessKeyDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/InstanceDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/S3BucketDetail.h>
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
   * <p>Contains information about the AWS resource associated with the activity that
   * prompted GuardDuty to generate a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const AccessKeyDetails& GetAccessKeyDetails() const{ return m_accessKeyDetails; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline bool AccessKeyDetailsHasBeenSet() const { return m_accessKeyDetailsHasBeenSet; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline void SetAccessKeyDetails(const AccessKeyDetails& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = value; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline void SetAccessKeyDetails(AccessKeyDetails&& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = std::move(value); }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithAccessKeyDetails(const AccessKeyDetails& value) { SetAccessKeyDetails(value); return *this;}

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithAccessKeyDetails(AccessKeyDetails&& value) { SetAccessKeyDetails(std::move(value)); return *this;}


    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline const Aws::Vector<S3BucketDetail>& GetS3BucketDetails() const{ return m_s3BucketDetails; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline bool S3BucketDetailsHasBeenSet() const { return m_s3BucketDetailsHasBeenSet; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline void SetS3BucketDetails(const Aws::Vector<S3BucketDetail>& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails = value; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline void SetS3BucketDetails(Aws::Vector<S3BucketDetail>&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails = std::move(value); }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& WithS3BucketDetails(const Aws::Vector<S3BucketDetail>& value) { SetS3BucketDetails(value); return *this;}

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& WithS3BucketDetails(Aws::Vector<S3BucketDetail>&& value) { SetS3BucketDetails(std::move(value)); return *this;}

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& AddS3BucketDetails(const S3BucketDetail& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails.push_back(value); return *this; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& AddS3BucketDetails(S3BucketDetail&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const{ return m_instanceDetails; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline void SetInstanceDetails(const InstanceDetails& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = value; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline void SetInstanceDetails(InstanceDetails&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::move(value); }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithInstanceDetails(const InstanceDetails& value) { SetInstanceDetails(value); return *this;}

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithInstanceDetails(InstanceDetails&& value) { SetInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The type of AWS resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    AccessKeyDetails m_accessKeyDetails;
    bool m_accessKeyDetailsHasBeenSet;

    Aws::Vector<S3BucketDetail> m_s3BucketDetails;
    bool m_s3BucketDetailsHasBeenSet;

    InstanceDetails m_instanceDetails;
    bool m_instanceDetailsHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
