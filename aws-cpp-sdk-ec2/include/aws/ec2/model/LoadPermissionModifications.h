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
    AWS_EC2_API LoadPermissionModifications();
    AWS_EC2_API LoadPermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LoadPermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The load permissions to add.</p>
     */
    inline const Aws::Vector<LoadPermissionRequest>& GetAdd() const{ return m_add; }

    /**
     * <p>The load permissions to add.</p>
     */
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }

    /**
     * <p>The load permissions to add.</p>
     */
    inline void SetAdd(const Aws::Vector<LoadPermissionRequest>& value) { m_addHasBeenSet = true; m_add = value; }

    /**
     * <p>The load permissions to add.</p>
     */
    inline void SetAdd(Aws::Vector<LoadPermissionRequest>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

    /**
     * <p>The load permissions to add.</p>
     */
    inline LoadPermissionModifications& WithAdd(const Aws::Vector<LoadPermissionRequest>& value) { SetAdd(value); return *this;}

    /**
     * <p>The load permissions to add.</p>
     */
    inline LoadPermissionModifications& WithAdd(Aws::Vector<LoadPermissionRequest>&& value) { SetAdd(std::move(value)); return *this;}

    /**
     * <p>The load permissions to add.</p>
     */
    inline LoadPermissionModifications& AddAdd(const LoadPermissionRequest& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

    /**
     * <p>The load permissions to add.</p>
     */
    inline LoadPermissionModifications& AddAdd(LoadPermissionRequest&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }


    /**
     * <p>The load permissions to remove.</p>
     */
    inline const Aws::Vector<LoadPermissionRequest>& GetRemove() const{ return m_remove; }

    /**
     * <p>The load permissions to remove.</p>
     */
    inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }

    /**
     * <p>The load permissions to remove.</p>
     */
    inline void SetRemove(const Aws::Vector<LoadPermissionRequest>& value) { m_removeHasBeenSet = true; m_remove = value; }

    /**
     * <p>The load permissions to remove.</p>
     */
    inline void SetRemove(Aws::Vector<LoadPermissionRequest>&& value) { m_removeHasBeenSet = true; m_remove = std::move(value); }

    /**
     * <p>The load permissions to remove.</p>
     */
    inline LoadPermissionModifications& WithRemove(const Aws::Vector<LoadPermissionRequest>& value) { SetRemove(value); return *this;}

    /**
     * <p>The load permissions to remove.</p>
     */
    inline LoadPermissionModifications& WithRemove(Aws::Vector<LoadPermissionRequest>&& value) { SetRemove(std::move(value)); return *this;}

    /**
     * <p>The load permissions to remove.</p>
     */
    inline LoadPermissionModifications& AddRemove(const LoadPermissionRequest& value) { m_removeHasBeenSet = true; m_remove.push_back(value); return *this; }

    /**
     * <p>The load permissions to remove.</p>
     */
    inline LoadPermissionModifications& AddRemove(LoadPermissionRequest&& value) { m_removeHasBeenSet = true; m_remove.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LoadPermissionRequest> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<LoadPermissionRequest> m_remove;
    bool m_removeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
