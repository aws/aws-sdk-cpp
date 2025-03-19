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
    AWS_EC2_API GetInstanceMetadataDefaultsResponse() = default;
    AWS_EC2_API GetInstanceMetadataDefaultsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceMetadataDefaultsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The account-level default IMDS settings.</p>
     */
    inline const InstanceMetadataDefaultsResponse& GetAccountLevel() const { return m_accountLevel; }
    template<typename AccountLevelT = InstanceMetadataDefaultsResponse>
    void SetAccountLevel(AccountLevelT&& value) { m_accountLevelHasBeenSet = true; m_accountLevel = std::forward<AccountLevelT>(value); }
    template<typename AccountLevelT = InstanceMetadataDefaultsResponse>
    GetInstanceMetadataDefaultsResponse& WithAccountLevel(AccountLevelT&& value) { SetAccountLevel(std::forward<AccountLevelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetInstanceMetadataDefaultsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceMetadataDefaultsResponse m_accountLevel;
    bool m_accountLevelHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
