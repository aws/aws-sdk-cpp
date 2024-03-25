/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceMetadataDefaultsResponse.h>
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
  class GetInstanceMetadataDefaultsResponse
  {
  public:
    AWS_EC2_API GetInstanceMetadataDefaultsResponse();
    AWS_EC2_API GetInstanceMetadataDefaultsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceMetadataDefaultsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline const InstanceMetadataDefaultsResponse& GetAccountLevel() const{ return m_accountLevel; }

    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline void SetAccountLevel(const InstanceMetadataDefaultsResponse& value) { m_accountLevel = value; }

    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline void SetAccountLevel(InstanceMetadataDefaultsResponse&& value) { m_accountLevel = std::move(value); }

    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline GetInstanceMetadataDefaultsResponse& WithAccountLevel(const InstanceMetadataDefaultsResponse& value) { SetAccountLevel(value); return *this;}

    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline GetInstanceMetadataDefaultsResponse& WithAccountLevel(InstanceMetadataDefaultsResponse&& value) { SetAccountLevel(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetInstanceMetadataDefaultsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetInstanceMetadataDefaultsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceMetadataDefaultsResponse m_accountLevel;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
