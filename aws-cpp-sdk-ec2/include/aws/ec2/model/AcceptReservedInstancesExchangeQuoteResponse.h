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
  class AWS_EC2_API AcceptReservedInstancesExchangeQuoteResponse
  {
  public:
    AcceptReservedInstancesExchangeQuoteResponse();
    AcceptReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AcceptReservedInstancesExchangeQuoteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline const Aws::String& GetExchangeId() const{ return m_exchangeId; }

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline void SetExchangeId(const Aws::String& value) { m_exchangeId = value; }

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline void SetExchangeId(Aws::String&& value) { m_exchangeId = std::move(value); }

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline void SetExchangeId(const char* value) { m_exchangeId.assign(value); }

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteResponse& WithExchangeId(const Aws::String& value) { SetExchangeId(value); return *this;}

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteResponse& WithExchangeId(Aws::String&& value) { SetExchangeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the successful exchange.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteResponse& WithExchangeId(const char* value) { SetExchangeId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AcceptReservedInstancesExchangeQuoteResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AcceptReservedInstancesExchangeQuoteResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_exchangeId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
