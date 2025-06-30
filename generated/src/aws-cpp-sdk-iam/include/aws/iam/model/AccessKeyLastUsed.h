/**
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
   * <p>Contains information about the last time an Amazon Web Services access key
   * was used since IAM began tracking this information on April 22, 2015.</p>
   * <p>This data type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccessKeyLastUsed.html">GetAccessKeyLastUsed</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AccessKeyLastUsed">AWS
   * API Reference</a></p>
   */
  class AccessKeyLastUsed
  {
  public:
    AWS_IAM_API AccessKeyLastUsed() = default;
    AWS_IAM_API AccessKeyLastUsed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API AccessKeyLastUsed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const { return m_lastUsedDate; }
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    void SetLastUsedDate(LastUsedDateT&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::forward<LastUsedDateT>(value); }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    AccessKeyLastUsed& WithLastUsedDate(LastUsedDateT&& value) { SetLastUsedDate(std::forward<LastUsedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used. The value of this field is "N/A" in the following
     * situations:</p> <ul> <li> <p>The user does not have an access key.</p> </li>
     * <li> <p>An access key exists but has not been used since IAM started tracking
     * this information.</p> </li> <li> <p>There is no sign-in data associated with the
     * user.</p> </li> </ul>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AccessKeyLastUsed& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this access key was most recently used.
     * The value for this field is "N/A" in the following situations:</p> <ul> <li>
     * <p>The user does not have an access key.</p> </li> <li> <p>An access key exists
     * but has not been used since IAM began tracking this information.</p> </li> <li>
     * <p>There is no sign-in data associated with the user.</p> </li> </ul> <p>For
     * more information about Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    AccessKeyLastUsed& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastUsedDate{};
    bool m_lastUsedDateHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
