/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API CreateJobRequest : public SnowballRequest
  {
  public:
    CreateJobRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline CreateJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline CreateJobRequest& WithJobType(JobType&& value) { SetJobType(value); return *this;}

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline CreateJobRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline CreateJobRequest& WithResources(JobResource&& value) { SetResources(value); return *this;}

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(Aws::String&& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * AWS Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * AWS Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snowball you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p>
     */
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snowball you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p>
     */
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snowball you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p>
     */
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snowball you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p>
     */
    inline CreateJobRequest& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snowball you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p>
     */
    inline CreateJobRequest& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>The shipping speed for this job. Note that this speed does not dictate how
     * soon you'll get the Snowball, rather it represents how quickly the Snowball
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day.</p> </li>
     * <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The shipping speed for this job. Note that this speed does not dictate how
     * soon you'll get the Snowball, rather it represents how quickly the Snowball
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day.</p> </li>
     * <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for this job. Note that this speed does not dictate how
     * soon you'll get the Snowball, rather it represents how quickly the Snowball
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day.</p> </li>
     * <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for this job. Note that this speed does not dictate how
     * soon you'll get the Snowball, rather it represents how quickly the Snowball
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day.</p> </li>
     * <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline CreateJobRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The shipping speed for this job. Note that this speed does not dictate how
     * soon you'll get the Snowball, rather it represents how quickly the Snowball
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day.</p> </li>
     * <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline CreateJobRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(value); return *this;}

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline CreateJobRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline CreateJobRequest& WithNotification(Notification&& value) { SetNotification(value); return *this;}

  private:
    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
    JobResource m_resources;
    bool m_resourcesHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;
    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet;
    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet;
    Notification m_notification;
    bool m_notificationHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
