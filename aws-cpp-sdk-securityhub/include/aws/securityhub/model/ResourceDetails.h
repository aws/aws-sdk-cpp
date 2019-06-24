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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2InstanceDetails.h>
#include <aws/securityhub/model/AwsS3BucketDetails.h>
#include <aws/securityhub/model/AwsIamAccessKeyDetails.h>
#include <aws/securityhub/model/ContainerDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Additional details about a resource related to a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ResourceDetails
  {
  public:
    ResourceDetails();
    ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const{ return m_awsEc2Instance; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(const AwsEc2InstanceDetails& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = value; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(AwsEc2InstanceDetails&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::move(value); }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(const AwsEc2InstanceDetails& value) { SetAwsEc2Instance(value); return *this;}

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceDetails&& value) { SetAwsEc2Instance(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline const AwsS3BucketDetails& GetAwsS3Bucket() const{ return m_awsS3Bucket; }

    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline bool AwsS3BucketHasBeenSet() const { return m_awsS3BucketHasBeenSet; }

    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(const AwsS3BucketDetails& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = value; }

    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(AwsS3BucketDetails&& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = std::move(value); }

    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(const AwsS3BucketDetails& value) { SetAwsS3Bucket(value); return *this;}

    /**
     * <p>Details about an Amazon S3 Bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(AwsS3BucketDetails&& value) { SetAwsS3Bucket(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyDetails& GetAwsIamAccessKey() const{ return m_awsIamAccessKey; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline bool AwsIamAccessKeyHasBeenSet() const { return m_awsIamAccessKeyHasBeenSet; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = value; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = std::move(value); }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { SetAwsIamAccessKey(value); return *this;}

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { SetAwsIamAccessKey(std::move(value)); return *this;}


    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline const ContainerDetails& GetContainer() const{ return m_container; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(const ContainerDetails& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(ContainerDetails&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(const ContainerDetails& value) { SetContainer(value); return *this;}

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(ContainerDetails&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOther() const{ return m_other; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline void SetOther(const Aws::Map<Aws::String, Aws::String>& value) { m_otherHasBeenSet = true; m_other = value; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline void SetOther(Aws::Map<Aws::String, Aws::String>&& value) { m_otherHasBeenSet = true; m_other = std::move(value); }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& WithOther(const Aws::Map<Aws::String, Aws::String>& value) { SetOther(value); return *this;}

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& WithOther(Aws::Map<Aws::String, Aws::String>&& value) { SetOther(std::move(value)); return *this;}

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(const Aws::String& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(const Aws::String& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(const char* key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about a resource that doesn't have a specific type defined.</p>
     */
    inline ResourceDetails& AddOther(const char* key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }

  private:

    AwsEc2InstanceDetails m_awsEc2Instance;
    bool m_awsEc2InstanceHasBeenSet;

    AwsS3BucketDetails m_awsS3Bucket;
    bool m_awsS3BucketHasBeenSet;

    AwsIamAccessKeyDetails m_awsIamAccessKey;
    bool m_awsIamAccessKeyHasBeenSet;

    ContainerDetails m_container;
    bool m_containerHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_other;
    bool m_otherHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
