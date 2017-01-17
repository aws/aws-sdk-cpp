﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains metadata about a specific cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ClusterMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API ClusterMetadata
  {
  public:
    ClusterMetadata();
    ClusterMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    ClusterMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline ClusterMetadata& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline ClusterMetadata& WithClusterId(Aws::String&& value) { SetClusterId(value); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline ClusterMetadata& WithClusterId(const char* value) { SetClusterId(value); return *this;}

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline ClusterMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline ClusterMetadata& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description of the cluster.</p>
     */
    inline ClusterMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline ClusterMetadata& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline ClusterMetadata& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in AWS Key Management Service (AWS KMS).</p>
     */
    inline ClusterMetadata& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline ClusterMetadata& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline ClusterMetadata& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline ClusterMetadata& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The current status of the cluster.</p>
     */
    inline const ClusterState& GetClusterState() const{ return m_clusterState; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetClusterState(const ClusterState& value) { m_clusterStateHasBeenSet = true; m_clusterState = value; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetClusterState(ClusterState&& value) { m_clusterStateHasBeenSet = true; m_clusterState = value; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline ClusterMetadata& WithClusterState(const ClusterState& value) { SetClusterState(value); return *this;}

    /**
     * <p>The current status of the cluster.</p>
     */
    inline ClusterMetadata& WithClusterState(ClusterState&& value) { SetClusterState(value); return *this;}

    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline ClusterMetadata& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline ClusterMetadata& WithJobType(JobType&& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of AWS Snowball appliance to use for this cluster. Currently, the
     * only supported appliance type for cluster jobs is <code>EDGE</code>.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }

    /**
     * <p>The type of AWS Snowball appliance to use for this cluster. Currently, the
     * only supported appliance type for cluster jobs is <code>EDGE</code>.</p>
     */
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of AWS Snowball appliance to use for this cluster. Currently, the
     * only supported appliance type for cluster jobs is <code>EDGE</code>.</p>
     */
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of AWS Snowball appliance to use for this cluster. Currently, the
     * only supported appliance type for cluster jobs is <code>EDGE</code>.</p>
     */
    inline ClusterMetadata& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The type of AWS Snowball appliance to use for this cluster. Currently, the
     * only supported appliance type for cluster jobs is <code>EDGE</code>.</p>
     */
    inline ClusterMetadata& WithSnowballType(SnowballType&& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline ClusterMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline ClusterMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline ClusterMetadata& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline ClusterMetadata& WithResources(JobResource&& value) { SetResources(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline ClusterMetadata& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline ClusterMetadata& WithAddressId(Aws::String&& value) { SetAddressId(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline ClusterMetadata& WithAddressId(const char* value) { SetAddressId(value); return *this;}

    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge appliance, rather it represents how
     * quickly each appliance moves to its destination while in transit. Regional
     * shipping speeds are as follows:</p> <ul> <li> <p>In Australia, you have access
     * to express shipping. Typically, appliances shipped express are delivered in
     * about a day.</p> </li> <li> <p>In the European Union (EU), you have access to
     * express shipping. Typically, Snowball Edges shipped express are delivered in
     * about a day. In addition, most countries in the EU have access to standard
     * shipping, which typically takes less than a week, one way.</p> </li> <li> <p>In
     * India, Snowball Edges are delivered in one to seven days.</p> </li> <li> <p>In
     * the US, you have access to one-day shipping and two-day shipping.</p> </li>
     * </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge appliance, rather it represents how
     * quickly each appliance moves to its destination while in transit. Regional
     * shipping speeds are as follows:</p> <ul> <li> <p>In Australia, you have access
     * to express shipping. Typically, appliances shipped express are delivered in
     * about a day.</p> </li> <li> <p>In the European Union (EU), you have access to
     * express shipping. Typically, Snowball Edges shipped express are delivered in
     * about a day. In addition, most countries in the EU have access to standard
     * shipping, which typically takes less than a week, one way.</p> </li> <li> <p>In
     * India, Snowball Edges are delivered in one to seven days.</p> </li> <li> <p>In
     * the US, you have access to one-day shipping and two-day shipping.</p> </li>
     * </ul>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge appliance, rather it represents how
     * quickly each appliance moves to its destination while in transit. Regional
     * shipping speeds are as follows:</p> <ul> <li> <p>In Australia, you have access
     * to express shipping. Typically, appliances shipped express are delivered in
     * about a day.</p> </li> <li> <p>In the European Union (EU), you have access to
     * express shipping. Typically, Snowball Edges shipped express are delivered in
     * about a day. In addition, most countries in the EU have access to standard
     * shipping, which typically takes less than a week, one way.</p> </li> <li> <p>In
     * India, Snowball Edges are delivered in one to seven days.</p> </li> <li> <p>In
     * the US, you have access to one-day shipping and two-day shipping.</p> </li>
     * </ul>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge appliance, rather it represents how
     * quickly each appliance moves to its destination while in transit. Regional
     * shipping speeds are as follows:</p> <ul> <li> <p>In Australia, you have access
     * to express shipping. Typically, appliances shipped express are delivered in
     * about a day.</p> </li> <li> <p>In the European Union (EU), you have access to
     * express shipping. Typically, Snowball Edges shipped express are delivered in
     * about a day. In addition, most countries in the EU have access to standard
     * shipping, which typically takes less than a week, one way.</p> </li> <li> <p>In
     * India, Snowball Edges are delivered in one to seven days.</p> </li> <li> <p>In
     * the US, you have access to one-day shipping and two-day shipping.</p> </li>
     * </ul>
     */
    inline ClusterMetadata& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge appliance, rather it represents how
     * quickly each appliance moves to its destination while in transit. Regional
     * shipping speeds are as follows:</p> <ul> <li> <p>In Australia, you have access
     * to express shipping. Typically, appliances shipped express are delivered in
     * about a day.</p> </li> <li> <p>In the European Union (EU), you have access to
     * express shipping. Typically, Snowball Edges shipped express are delivered in
     * about a day. In addition, most countries in the EU have access to standard
     * shipping, which typically takes less than a week, one way.</p> </li> <li> <p>In
     * India, Snowball Edges are delivered in one to seven days.</p> </li> <li> <p>In
     * the US, you have access to one-day shipping and two-day shipping.</p> </li>
     * </ul>
     */
    inline ClusterMetadata& WithShippingOption(ShippingOption&& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline ClusterMetadata& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline ClusterMetadata& WithNotification(Notification&& value) { SetNotification(value); return *this;}

  private:
    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    ClusterState m_clusterState;
    bool m_clusterStateHasBeenSet;
    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    JobResource m_resources;
    bool m_resourcesHasBeenSet;
    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;
    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet;
    Notification m_notification;
    bool m_notificationHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
