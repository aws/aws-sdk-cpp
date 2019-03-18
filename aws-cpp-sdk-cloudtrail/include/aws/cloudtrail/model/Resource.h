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
  class AWS_CLOUDTRAIL_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of a resource referenced by the event returned. When the resource
     * type cannot be determined, null is returned. Some examples of resource types
     * are: <b>Instance</b> for EC2, <b>Trail</b> for CloudTrail, <b>DBInstance</b> for
     * RDS, and <b>AccessKey</b> for IAM. For a list of resource types supported for
     * event lookup, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/lookup_supported_resourcetypes.html">Resource
     * Types Supported for Event Lookup</a>.</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline Resource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline Resource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource referenced by the event returned. These are
     * user-created names whose values will depend on the environment. For example, the
     * resource name might be "auto-scaling-test-group" for an Auto Scaling Group or
     * "i-1234567" for an EC2 Instance.</p>
     */
    inline Resource& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
