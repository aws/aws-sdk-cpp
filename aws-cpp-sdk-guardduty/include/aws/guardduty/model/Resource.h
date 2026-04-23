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

  /**
   * The AWS resource associated with the activity that prompted GuardDuty to
   * generate a finding.<p><h3>See Also:</h3>   <a
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


    
    inline const AccessKeyDetails& GetAccessKeyDetails() const{ return m_accessKeyDetails; }

    
    inline bool AccessKeyDetailsHasBeenSet() const { return m_accessKeyDetailsHasBeenSet; }

    
    inline void SetAccessKeyDetails(const AccessKeyDetails& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = value; }

    
    inline void SetAccessKeyDetails(AccessKeyDetails&& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = std::move(value); }

    
    inline Resource& WithAccessKeyDetails(const AccessKeyDetails& value) { SetAccessKeyDetails(value); return *this;}

    
    inline Resource& WithAccessKeyDetails(AccessKeyDetails&& value) { SetAccessKeyDetails(std::move(value)); return *this;}


    
    inline const InstanceDetails& GetInstanceDetails() const{ return m_instanceDetails; }

    
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }

    
    inline void SetInstanceDetails(const InstanceDetails& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = value; }

    
    inline void SetInstanceDetails(InstanceDetails&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::move(value); }

    
    inline Resource& WithInstanceDetails(const InstanceDetails& value) { SetInstanceDetails(value); return *this;}

    
    inline Resource& WithInstanceDetails(InstanceDetails&& value) { SetInstanceDetails(std::move(value)); return *this;}


    /**
     * The type of the AWS resource.
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * The type of the AWS resource.
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * The type of the AWS resource.
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * The type of the AWS resource.
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * The type of the AWS resource.
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * The type of the AWS resource.
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * The type of the AWS resource.
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * The type of the AWS resource.
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
