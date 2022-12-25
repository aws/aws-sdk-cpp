/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LaunchPermission.h>
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
   * <p>Describes a launch permission modification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchPermissionModifications">AWS
   * API Reference</a></p>
   */
  class LaunchPermissionModifications
  {
  public:
    AWS_EC2_API LaunchPermissionModifications();
    AWS_EC2_API LaunchPermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchPermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetAdd() const{ return m_add; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline void SetAdd(const Aws::Vector<LaunchPermission>& value) { m_addHasBeenSet = true; m_add = value; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline void SetAdd(Aws::Vector<LaunchPermission>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& WithAdd(const Aws::Vector<LaunchPermission>& value) { SetAdd(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& WithAdd(Aws::Vector<LaunchPermission>&& value) { SetAdd(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& AddAdd(const LaunchPermission& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& AddAdd(LaunchPermission&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetRemove() const{ return m_remove; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline void SetRemove(const Aws::Vector<LaunchPermission>& value) { m_removeHasBeenSet = true; m_remove = value; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline void SetRemove(Aws::Vector<LaunchPermission>&& value) { m_removeHasBeenSet = true; m_remove = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& WithRemove(const Aws::Vector<LaunchPermission>& value) { SetRemove(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& WithRemove(Aws::Vector<LaunchPermission>&& value) { SetRemove(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& AddRemove(const LaunchPermission& value) { m_removeHasBeenSet = true; m_remove.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline LaunchPermissionModifications& AddRemove(LaunchPermission&& value) { m_removeHasBeenSet = true; m_remove.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LaunchPermission> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<LaunchPermission> m_remove;
    bool m_removeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
