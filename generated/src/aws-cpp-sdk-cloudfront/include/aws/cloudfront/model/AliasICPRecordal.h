/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Amazon Web Services services in China customers must file for an Internet
   * Content Provider (ICP) recordal if they want to serve content publicly on an
   * alternate domain name, also known as a CNAME, that they've added to CloudFront.
   * AliasICPRecordal provides the ICP recordal status for CNAMEs associated with
   * distributions. The status is returned in the CloudFront response; you can't
   * configure it yourself.</p> <p>For more information about ICP recordals, see <a
   * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
   * Signup, Accounts, and Credentials</a> in <i>Getting Started with Amazon Web
   * Services services in China</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AliasICPRecordal">AWS
   * API Reference</a></p>
   */
  class AliasICPRecordal
  {
  public:
    AWS_CLOUDFRONT_API AliasICPRecordal() = default;
    AWS_CLOUDFRONT_API AliasICPRecordal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API AliasICPRecordal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A domain name associated with a distribution.</p>
     */
    inline const Aws::String& GetCNAME() const { return m_cNAME; }
    inline bool CNAMEHasBeenSet() const { return m_cNAMEHasBeenSet; }
    template<typename CNAMET = Aws::String>
    void SetCNAME(CNAMET&& value) { m_cNAMEHasBeenSet = true; m_cNAME = std::forward<CNAMET>(value); }
    template<typename CNAMET = Aws::String>
    AliasICPRecordal& WithCNAME(CNAMET&& value) { SetCNAME(std::forward<CNAMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet Content Provider (ICP) recordal status for a CNAME. The
     * ICPRecordalStatus is set to APPROVED for all CNAMEs (aliases) in Amazon Web
     * Services Regions outside of China.</p> <p>The status values returned are the
     * following:</p> <ul> <li> <p> <b>APPROVED</b> indicates that the associated CNAME
     * has a valid ICP recordal number. Multiple CNAMEs can be associated with a
     * distribution, and CNAMEs can correspond to different ICP recordals. To be marked
     * as APPROVED, that is, valid to use with the China Regions, a CNAME must have one
     * ICP recordal number associated with it.</p> </li> <li> <p> <b>SUSPENDED</b>
     * indicates that the associated CNAME does not have a valid ICP recordal
     * number.</p> </li> <li> <p> <b>PENDING</b> indicates that CloudFront can't
     * determine the ICP recordal status of the CNAME associated with the distribution
     * because there was an error in trying to determine the status. You can try again
     * to see if the error is resolved in which case CloudFront returns an APPROVED or
     * SUSPENDED status.</p> </li> </ul>
     */
    inline ICPRecordalStatus GetICPRecordalStatus() const { return m_iCPRecordalStatus; }
    inline bool ICPRecordalStatusHasBeenSet() const { return m_iCPRecordalStatusHasBeenSet; }
    inline void SetICPRecordalStatus(ICPRecordalStatus value) { m_iCPRecordalStatusHasBeenSet = true; m_iCPRecordalStatus = value; }
    inline AliasICPRecordal& WithICPRecordalStatus(ICPRecordalStatus value) { SetICPRecordalStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_cNAME;
    bool m_cNAMEHasBeenSet = false;

    ICPRecordalStatus m_iCPRecordalStatus{ICPRecordalStatus::NOT_SET};
    bool m_iCPRecordalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
