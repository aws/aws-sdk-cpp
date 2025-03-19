/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LoadPermissionRequest.h>
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
   * <p>Describes modifications to the load permissions of an Amazon FPGA image
   * (AFI).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LoadPermissionModifications">AWS
   * API Reference</a></p>
   */
  class LoadPermissionModifications
  {
  public:
    AWS_EC2_API LoadPermissionModifications() = default;
    AWS_EC2_API LoadPermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LoadPermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The load permissions to add.</p>
     */
    inline const Aws::Vector<LoadPermissionRequest>& GetAdd() const { return m_add; }
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
    template<typename AddT = Aws::Vector<LoadPermissionRequest>>
    void SetAdd(AddT&& value) { m_addHasBeenSet = true; m_add = std::forward<AddT>(value); }
    template<typename AddT = Aws::Vector<LoadPermissionRequest>>
    LoadPermissionModifications& WithAdd(AddT&& value) { SetAdd(std::forward<AddT>(value)); return *this;}
    template<typename AddT = LoadPermissionRequest>
    LoadPermissionModifications& AddAdd(AddT&& value) { m_addHasBeenSet = true; m_add.emplace_back(std::forward<AddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load permissions to remove.</p>
     */
    inline const Aws::Vector<LoadPermissionRequest>& GetRemove() const { return m_remove; }
    inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }
    template<typename RemoveT = Aws::Vector<LoadPermissionRequest>>
    void SetRemove(RemoveT&& value) { m_removeHasBeenSet = true; m_remove = std::forward<RemoveT>(value); }
    template<typename RemoveT = Aws::Vector<LoadPermissionRequest>>
    LoadPermissionModifications& WithRemove(RemoveT&& value) { SetRemove(std::forward<RemoveT>(value)); return *this;}
    template<typename RemoveT = LoadPermissionRequest>
    LoadPermissionModifications& AddRemove(RemoveT&& value) { m_removeHasBeenSet = true; m_remove.emplace_back(std::forward<RemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LoadPermissionRequest> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<LoadPermissionRequest> m_remove;
    bool m_removeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
