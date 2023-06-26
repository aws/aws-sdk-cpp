/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/OrganizationStatus.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeOrganizationsAccessResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeOrganizationsAccessResult();
    AWS_CLOUDFORMATION_API DescribeOrganizationsAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeOrganizationsAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Presents the status of the <code>OrganizationAccess</code>.</p>
     */
    inline const OrganizationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Presents the status of the <code>OrganizationAccess</code>.</p>
     */
    inline void SetStatus(const OrganizationStatus& value) { m_status = value; }

    /**
     * <p>Presents the status of the <code>OrganizationAccess</code>.</p>
     */
    inline void SetStatus(OrganizationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Presents the status of the <code>OrganizationAccess</code>.</p>
     */
    inline DescribeOrganizationsAccessResult& WithStatus(const OrganizationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Presents the status of the <code>OrganizationAccess</code>.</p>
     */
    inline DescribeOrganizationsAccessResult& WithStatus(OrganizationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeOrganizationsAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeOrganizationsAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    OrganizationStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
