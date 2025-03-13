/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ManagedPrefixList.h>
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
  class CreateManagedPrefixListResponse
  {
  public:
    AWS_EC2_API CreateManagedPrefixListResponse() = default;
    AWS_EC2_API CreateManagedPrefixListResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateManagedPrefixListResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the prefix list.</p>
     */
    inline const ManagedPrefixList& GetPrefixList() const { return m_prefixList; }
    template<typename PrefixListT = ManagedPrefixList>
    void SetPrefixList(PrefixListT&& value) { m_prefixListHasBeenSet = true; m_prefixList = std::forward<PrefixListT>(value); }
    template<typename PrefixListT = ManagedPrefixList>
    CreateManagedPrefixListResponse& WithPrefixList(PrefixListT&& value) { SetPrefixList(std::forward<PrefixListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateManagedPrefixListResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ManagedPrefixList m_prefixList;
    bool m_prefixListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
