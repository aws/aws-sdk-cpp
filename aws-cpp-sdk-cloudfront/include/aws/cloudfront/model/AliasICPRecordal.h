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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/ICPRecordalStatus.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>AWS services in China customers must file for an Internet Content Provider
   * (ICP) recordal if they want to serve content publicly on an alternate domain
   * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
   * provides the ICP recordal status for CNAMEs associated with distributions. The
   * status is returned in the CloudFront response; you can't configure it
   * yourself.</p> <p>For more information about ICP recordals, see <a
   * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
   * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
   * China</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/AliasICPRecordal">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API AliasICPRecordal
  {
  public:
    AliasICPRecordal();
    AliasICPRecordal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AliasICPRecordal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline const Aws::String& GetCNAME() const{ return m_cNAME; }

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline bool CNAMEHasBeenSet() const { return m_cNAMEHasBeenSet; }

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline void SetCNAME(const Aws::String& value) { m_cNAMEHasBeenSet = true; m_cNAME = value; }

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline void SetCNAME(Aws::String&& value) { m_cNAMEHasBeenSet = true; m_cNAME = std::move(value); }

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline void SetCNAME(const char* value) { m_cNAMEHasBeenSet = true; m_cNAME.assign(value); }

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline AliasICPRecordal& WithCNAME(const Aws::String& value) { SetCNAME(value); return *this;}

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline AliasICPRecordal& WithCNAME(Aws::String&& value) { SetCNAME(std::move(value)); return *this;}

    /**
     * <p>A domain name associated with a distribution. </p>
     */
    inline AliasICPRecordal& WithCNAME(const char* value) { SetCNAME(value); return *this;}


    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline const ICPRecordalStatus& GetICPRecordalStatus() const{ return m_iCPRecordalStatus; }

    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline bool ICPRecordalStatusHasBeenSet() const { return m_iCPRecordalStatusHasBeenSet; }

    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline void SetICPRecordalStatus(const ICPRecordalStatus& value) { m_iCPRecordalStatusHasBeenSet = true; m_iCPRecordalStatus = value; }

    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline void SetICPRecordalStatus(ICPRecordalStatus&& value) { m_iCPRecordalStatusHasBeenSet = true; m_iCPRecordalStatus = std::move(value); }

    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline AliasICPRecordal& WithICPRecordalStatus(const ICPRecordalStatus& value) { SetICPRecordalStatus(value); return *this;}

    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in regions outside
     * of China. </p> <p>The status values returned are the following:</p> <ul> <li>
     * <p> <b>APPROVED</b> indicates that the associated CNAME has a valid ICP recordal
     * number. Multiple CNAMEs can be associated with a distribution, and CNAMEs can
     * correspond to different ICP recordals. To be marked as APPROVED, that is, valid
     * to use with China region, a CNAME must have one ICP recordal number associated
     * with it.</p> </li> <li> <p> <b>SUSPENDED</b> indicates that the associated CNAME
     * does not have a valid ICP recordal number.</p> </li> <li> <p> <b>PENDING</b>
     * indicates that at least one CNAME associated with the distribution does not have
     * a valid ICP recordal number.</p> </li> </ul>
     */
    inline AliasICPRecordal& WithICPRecordalStatus(ICPRecordalStatus&& value) { SetICPRecordalStatus(std::move(value)); return *this;}

  private:

    Aws::String m_cNAME;
    bool m_cNAMEHasBeenSet;

    ICPRecordalStatus m_iCPRecordalStatus;
    bool m_iCPRecordalStatusHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
