/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>The result of the exchange and whether it was
   * <code>successful</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuoteResult">AWS
   * API Reference</a></p>
   */
  class AcceptReservedInstancesExchangeQuoteResponse
  {
  public:
    AWS_EC2_API AcceptReservedInstancesExchangeQuoteResponse() = default;
    AWS_EC2_API AcceptReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptReservedInstancesExchangeQuoteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline const Aws::String& GetExchangeId() const { return m_exchangeId; }
    template<typename ExchangeIdT = Aws::String>
    void SetExchangeId(ExchangeIdT&& value) { m_exchangeIdHasBeenSet = true; m_exchangeId = std::forward<ExchangeIdT>(value); }
    template<typename ExchangeIdT = Aws::String>
    AcceptReservedInstancesExchangeQuoteResponse& WithExchangeId(ExchangeIdT&& value) { SetExchangeId(std::forward<ExchangeIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AcceptReservedInstancesExchangeQuoteResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exchangeId;
    bool m_exchangeIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
