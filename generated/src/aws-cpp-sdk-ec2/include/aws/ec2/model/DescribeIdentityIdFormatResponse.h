/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IdFormat.h>
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
namespace EC2
{
namespace Model
{
  class DescribeIdentityIdFormatResponse
  {
  public:
    AWS_EC2_API DescribeIdentityIdFormatResponse();
    AWS_EC2_API DescribeIdentityIdFormatResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIdentityIdFormatResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline const Aws::Vector<IdFormat>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline void SetStatuses(const Aws::Vector<IdFormat>& value) { m_statuses = value; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline void SetStatuses(Aws::Vector<IdFormat>&& value) { m_statuses = std::move(value); }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& WithStatuses(const Aws::Vector<IdFormat>& value) { SetStatuses(value); return *this;}

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& WithStatuses(Aws::Vector<IdFormat>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& AddStatuses(const IdFormat& value) { m_statuses.push_back(value); return *this; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& AddStatuses(IdFormat&& value) { m_statuses.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIdentityIdFormatResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIdentityIdFormatResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IdFormat> m_statuses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
