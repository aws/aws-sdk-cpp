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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CreateVolumePermission.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes modifications to the permissions for a volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolumePermissionModifications">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVolumePermissionModifications
  {
  public:
    CreateVolumePermissionModifications();
    CreateVolumePermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreateVolumePermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetAdd() const{ return m_add; }

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline void SetAdd(const Aws::Vector<CreateVolumePermission>& value) { m_addHasBeenSet = true; m_add = value; }

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline void SetAdd(Aws::Vector<CreateVolumePermission>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline CreateVolumePermissionModifications& WithAdd(const Aws::Vector<CreateVolumePermission>& value) { SetAdd(value); return *this;}

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline CreateVolumePermissionModifications& WithAdd(Aws::Vector<CreateVolumePermission>&& value) { SetAdd(std::move(value)); return *this;}

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline CreateVolumePermissionModifications& AddAdd(const CreateVolumePermission& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

    /**
     * <p>Adds a specific AWS account ID or group to a volume's list of create volume
     * permissions.</p>
     */
    inline CreateVolumePermissionModifications& AddAdd(CreateVolumePermission&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }


    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetRemove() const{ return m_remove; }

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline void SetRemove(const Aws::Vector<CreateVolumePermission>& value) { m_removeHasBeenSet = true; m_remove = value; }

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline void SetRemove(Aws::Vector<CreateVolumePermission>&& value) { m_removeHasBeenSet = true; m_remove = std::move(value); }

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline CreateVolumePermissionModifications& WithRemove(const Aws::Vector<CreateVolumePermission>& value) { SetRemove(value); return *this;}

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline CreateVolumePermissionModifications& WithRemove(Aws::Vector<CreateVolumePermission>&& value) { SetRemove(std::move(value)); return *this;}

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline CreateVolumePermissionModifications& AddRemove(const CreateVolumePermission& value) { m_removeHasBeenSet = true; m_remove.push_back(value); return *this; }

    /**
     * <p>Removes a specific AWS account ID or group from a volume's list of create
     * volume permissions.</p>
     */
    inline CreateVolumePermissionModifications& AddRemove(CreateVolumePermission&& value) { m_removeHasBeenSet = true; m_remove.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CreateVolumePermission> m_add;
    bool m_addHasBeenSet;

    Aws::Vector<CreateVolumePermission> m_remove;
    bool m_removeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
