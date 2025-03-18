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
    AWS_EC2_API LaunchPermissionModifications() = default;
    AWS_EC2_API LaunchPermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchPermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to add to the
     * list of launch permissions for the AMI.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetAdd() const { return m_add; }
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
    template<typename AddT = Aws::Vector<LaunchPermission>>
    void SetAdd(AddT&& value) { m_addHasBeenSet = true; m_add = std::forward<AddT>(value); }
    template<typename AddT = Aws::Vector<LaunchPermission>>
    LaunchPermissionModifications& WithAdd(AddT&& value) { SetAdd(std::forward<AddT>(value)); return *this;}
    template<typename AddT = LaunchPermission>
    LaunchPermissionModifications& AddAdd(AddT&& value) { m_addHasBeenSet = true; m_add.emplace_back(std::forward<AddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID, organization ARN, or OU ARN to remove
     * from the list of launch permissions for the AMI.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetRemove() const { return m_remove; }
    inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }
    template<typename RemoveT = Aws::Vector<LaunchPermission>>
    void SetRemove(RemoveT&& value) { m_removeHasBeenSet = true; m_remove = std::forward<RemoveT>(value); }
    template<typename RemoveT = Aws::Vector<LaunchPermission>>
    LaunchPermissionModifications& WithRemove(RemoveT&& value) { SetRemove(std::forward<RemoveT>(value)); return *this;}
    template<typename RemoveT = LaunchPermission>
    LaunchPermissionModifications& AddRemove(RemoveT&& value) { m_removeHasBeenSet = true; m_remove.emplace_back(std::forward<RemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LaunchPermission> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<LaunchPermission> m_remove;
    bool m_removeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
