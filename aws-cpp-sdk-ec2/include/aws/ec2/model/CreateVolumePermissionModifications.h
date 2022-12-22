/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes modifications to the list of create volume permissions for a
   * volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolumePermissionModifications">AWS
   * API Reference</a></p>
   */
  class CreateVolumePermissionModifications
  {
  public:
    AWS_EC2_API CreateVolumePermissionModifications();
    AWS_EC2_API CreateVolumePermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVolumePermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetAdd() const{ return m_add; }

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline void SetAdd(const Aws::Vector<CreateVolumePermission>& value) { m_addHasBeenSet = true; m_add = value; }

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline void SetAdd(Aws::Vector<CreateVolumePermission>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline CreateVolumePermissionModifications& WithAdd(const Aws::Vector<CreateVolumePermission>& value) { SetAdd(value); return *this;}

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline CreateVolumePermissionModifications& WithAdd(Aws::Vector<CreateVolumePermission>&& value) { SetAdd(std::move(value)); return *this;}

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline CreateVolumePermissionModifications& AddAdd(const CreateVolumePermission& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

    /**
     * <p>Adds the specified Amazon Web Services account ID or group to the list.</p>
     */
    inline CreateVolumePermissionModifications& AddAdd(CreateVolumePermission&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }


    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetRemove() const{ return m_remove; }

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline void SetRemove(const Aws::Vector<CreateVolumePermission>& value) { m_removeHasBeenSet = true; m_remove = value; }

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline void SetRemove(Aws::Vector<CreateVolumePermission>&& value) { m_removeHasBeenSet = true; m_remove = std::move(value); }

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline CreateVolumePermissionModifications& WithRemove(const Aws::Vector<CreateVolumePermission>& value) { SetRemove(value); return *this;}

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline CreateVolumePermissionModifications& WithRemove(Aws::Vector<CreateVolumePermission>&& value) { SetRemove(std::move(value)); return *this;}

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline CreateVolumePermissionModifications& AddRemove(const CreateVolumePermission& value) { m_removeHasBeenSet = true; m_remove.push_back(value); return *this; }

    /**
     * <p>Removes the specified Amazon Web Services account ID or group from the
     * list.</p>
     */
    inline CreateVolumePermissionModifications& AddRemove(CreateVolumePermission&& value) { m_removeHasBeenSet = true; m_remove.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CreateVolumePermission> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<CreateVolumePermission> m_remove;
    bool m_removeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
