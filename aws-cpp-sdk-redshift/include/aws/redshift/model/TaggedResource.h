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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>A tag and its associated resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/TaggedResource">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API TaggedResource
  {
  public:
    TaggedResource();
    TaggedResource(const Aws::Utils::Xml::XmlNode& xmlNode);
    TaggedResource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The tag for the resource.</p>
     */
    inline const Tag& GetTag() const{ return m_tag; }

    /**
     * <p>The tag for the resource.</p>
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * <p>The tag for the resource.</p>
     */
    inline void SetTag(const Tag& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * <p>The tag for the resource.</p>
     */
    inline void SetTag(Tag&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * <p>The tag for the resource.</p>
     */
    inline TaggedResource& WithTag(const Tag& value) { SetTag(value); return *this;}

    /**
     * <p>The tag for the resource.</p>
     */
    inline TaggedResource& WithTag(Tag&& value) { SetTag(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline TaggedResource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline TaggedResource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) with which the tag is associated, for example:
     * <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.</p>
     */
    inline TaggedResource& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline TaggedResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline TaggedResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource with which the tag is associated. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> </ul> <p>For
     * more information about Amazon Redshift resource types and constructing ARNs, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Constructing
     * an Amazon Redshift Amazon Resource Name (ARN)</a> in the Amazon Redshift Cluster
     * Management Guide. </p>
     */
    inline TaggedResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Tag m_tag;
    bool m_tagHasBeenSet;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
