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
   * <p>Contains information about the last time an AWS access key was used since IAM
   * began tracking this information on April 22, 2015.</p> <p>This data type is used
   * as a response element in the <a>GetAccessKeyLastUsed</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AccessKeyLastUsed">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API AccessKeyLastUsed
  {
  public:
    AccessKeyLastUsed();
    AccessKeyLastUsed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessKeyLastUsed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const{ return m_lastUsedDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline void SetLastUsedDate(const Aws::Utils::DateTime& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline void SetLastUsedDate(Aws::Utils::DateTime&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline AccessKeyLastUsed& WithLastUsedDate(const Aws::Utils::DateTime& value) { SetLastUsedDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the access key was most recently used. This field is
     * null in the following situations:</p> <ul> <li> <p>The user does not have an
     * access key.</p> </li> <li> <p>An access key exists but has not been used since
     * IAM began tracking this information.</p> </li> <li> <p>There is no sign-in data
     * associated with the user.</p> </li> </ul>
     */
    inline AccessKeyLastUsed& WithLastUsedDate(Aws::Utils::DateTime&& value) { SetLastUsedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline AccessKeyLastUsed& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline AccessKeyLastUsed& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS service with which this access key was most recently
     * used. The value of this field is "N/A" in the following situations:</p> <ul>
     * <li> <p>The user does not have an access key.</p> </li> <li> <p>An access key
     * exists but has not been used since IAM started tracking this information.</p>
     * </li> <li> <p>There is no sign-in data associated with the user.</p> </li> </ul>
     */
    inline AccessKeyLastUsed& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline AccessKeyLastUsed& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline AccessKeyLastUsed& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where this access key was most recently used. The value for
     * this field is "N/A" in the following situations:</p> <ul> <li> <p>The user does
     * not have an access key.</p> </li> <li> <p>An access key exists but has not been
     * used since IAM began tracking this information.</p> </li> <li> <p>There is no
     * sign-in data associated with the user.</p> </li> </ul> <p>For more information
     * about AWS Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a> in the Amazon Web Services General Reference.</p>
     */
    inline AccessKeyLastUsed& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastUsedDate;
    bool m_lastUsedDateHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
