﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies the type and name of a resource referenced by an
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_CLOUDTRAIL_API Resource();
    AWS_CLOUDTRAIL_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * Amazon RDS, and <b>AccessKey</b> for IAM. To learn more about how to look up and
     * filter events by the resource types supported for a service, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/view-cloudtrail-events-console.html#filtering-cloudtrail-events">Filtering
     * CloudTrail Events</a>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline Resource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline Resource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline Resource& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
