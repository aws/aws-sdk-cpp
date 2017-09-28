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
  class AWS_EC2_API LoadPermissionModifications
  {
  public:
    LoadPermissionModifications();
    LoadPermissionModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadPermissionModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The load permissions to add.</p>
     */
    inline const Aws::Vector<LoadPermissionRequest>& GetAdd() const{ return m_add; }

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
    bool m_addHasBeenSet;

    Aws::Vector<LoadPermissionRequest> m_remove;
    bool m_removeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
