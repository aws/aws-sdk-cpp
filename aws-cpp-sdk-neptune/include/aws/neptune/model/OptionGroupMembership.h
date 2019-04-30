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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Provides information on the option groups the DB instance is a member
   * of.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/OptionGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API OptionGroupMembership
  {
  public:
    OptionGroupMembership();
    OptionGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group that the instance belongs to.</p>
     */
    inline OptionGroupMembership& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB instance's option group membership. Valid values are:
     * <code>in-sync</code>, <code>pending-apply</code>, <code>pending-removal</code>,
     * <code>pending-maintenance-apply</code>,
     * <code>pending-maintenance-removal</code>, <code>applying</code>,
     * <code>removing</code>, and <code>failed</code>.</p>
     */
    inline OptionGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
