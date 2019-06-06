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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccessKeyDetails.h>
#include <aws/guardduty/model/InstanceDetails.h>
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
namespace GuardDuty
{
namespace Model
{

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
     * <p>The type of the AWS resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the AWS resource.</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    AccessKeyDetails m_accessKeyDetails;
    bool m_accessKeyDetailsHasBeenSet;

    InstanceDetails m_instanceDetails;
    bool m_instanceDetailsHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
