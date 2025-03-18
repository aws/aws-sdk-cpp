/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>A list of email addresses that you have verified with Amazon SES under your
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddressesResponse">AWS
   * API Reference</a></p>
   */
  class ListVerifiedEmailAddressesResult
  {
  public:
    AWS_SES_API ListVerifiedEmailAddressesResult() = default;
    AWS_SES_API ListVerifiedEmailAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListVerifiedEmailAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVerifiedEmailAddresses() const { return m_verifiedEmailAddresses; }
    template<typename VerifiedEmailAddressesT = Aws::Vector<Aws::String>>
    void SetVerifiedEmailAddresses(VerifiedEmailAddressesT&& value) { m_verifiedEmailAddressesHasBeenSet = true; m_verifiedEmailAddresses = std::forward<VerifiedEmailAddressesT>(value); }
    template<typename VerifiedEmailAddressesT = Aws::Vector<Aws::String>>
    ListVerifiedEmailAddressesResult& WithVerifiedEmailAddresses(VerifiedEmailAddressesT&& value) { SetVerifiedEmailAddresses(std::forward<VerifiedEmailAddressesT>(value)); return *this;}
    template<typename VerifiedEmailAddressesT = Aws::String>
    ListVerifiedEmailAddressesResult& AddVerifiedEmailAddresses(VerifiedEmailAddressesT&& value) { m_verifiedEmailAddressesHasBeenSet = true; m_verifiedEmailAddresses.emplace_back(std::forward<VerifiedEmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListVerifiedEmailAddressesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_verifiedEmailAddresses;
    bool m_verifiedEmailAddressesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
