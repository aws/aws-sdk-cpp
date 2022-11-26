﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPrefixListReference.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class AWS_EC2_API ModifyTransitGatewayPrefixListReferenceResponse
  {
  public:
    ModifyTransitGatewayPrefixListReferenceResponse();
    ModifyTransitGatewayPrefixListReferenceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyTransitGatewayPrefixListReferenceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline const TransitGatewayPrefixListReference& GetTransitGatewayPrefixListReference() const{ return m_transitGatewayPrefixListReference; }

    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline void SetTransitGatewayPrefixListReference(const TransitGatewayPrefixListReference& value) { m_transitGatewayPrefixListReference = value; }

    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline void SetTransitGatewayPrefixListReference(TransitGatewayPrefixListReference&& value) { m_transitGatewayPrefixListReference = std::move(value); }

    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline ModifyTransitGatewayPrefixListReferenceResponse& WithTransitGatewayPrefixListReference(const TransitGatewayPrefixListReference& value) { SetTransitGatewayPrefixListReference(value); return *this;}

    /**
     * <p>Information about the prefix list reference.</p>
     */
    inline ModifyTransitGatewayPrefixListReferenceResponse& WithTransitGatewayPrefixListReference(TransitGatewayPrefixListReference&& value) { SetTransitGatewayPrefixListReference(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTransitGatewayPrefixListReferenceResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTransitGatewayPrefixListReferenceResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPrefixListReference m_transitGatewayPrefixListReference;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
