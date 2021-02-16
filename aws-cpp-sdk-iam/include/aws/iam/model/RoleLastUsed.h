﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about the last time that an IAM role was used. This
   * includes the date and time and the Region in which the role was last used.
   * Activity is only reported for the trailing 400 days. This period can be shorter
   * if your Region began supporting these features within the last year. The role
   * might have been used more than 400 days ago. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
   * where data is tracked</a> in the <i>IAM User Guide</i>.</p> <p>This data type is
   * returned as a response element in the <a>GetRole</a> and
   * <a>GetAccountAuthorizationDetails</a> operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RoleLastUsed">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API RoleLastUsed
  {
  public:
    RoleLastUsed();
    RoleLastUsed(const Aws::Utils::Xml::XmlNode& xmlNode);
    RoleLastUsed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const{ return m_lastUsedDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetLastUsedDate(const Aws::Utils::DateTime& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetLastUsedDate(Aws::Utils::DateTime&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline RoleLastUsed& WithLastUsedDate(const Aws::Utils::DateTime& value) { SetLastUsedDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline RoleLastUsed& WithLastUsedDate(Aws::Utils::DateTime&& value) { SetLastUsedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline RoleLastUsed& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline RoleLastUsed& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Region in which the role was last used.</p>
     */
    inline RoleLastUsed& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastUsedDate;
    bool m_lastUsedDateHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
