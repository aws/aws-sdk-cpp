/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>The response from the <code>CheckIfPhoneNumberIsOptedOut</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOutResponse">AWS
   * API Reference</a></p>
   */
  class CheckIfPhoneNumberIsOptedOutResult
  {
  public:
    AWS_SNS_API CheckIfPhoneNumberIsOptedOutResult();
    AWS_SNS_API CheckIfPhoneNumberIsOptedOutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API CheckIfPhoneNumberIsOptedOutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates whether the phone number is opted out:</p> <ul> <li> <p>
     * <code>true</code> – The phone number is opted out, meaning you cannot publish
     * SMS messages to it.</p> </li> <li> <p> <code>false</code> – The phone number is
     * opted in, meaning you can publish SMS messages to it.</p> </li> </ul>
     */
    inline bool GetIsOptedOut() const{ return m_isOptedOut; }

    /**
     * <p>Indicates whether the phone number is opted out:</p> <ul> <li> <p>
     * <code>true</code> – The phone number is opted out, meaning you cannot publish
     * SMS messages to it.</p> </li> <li> <p> <code>false</code> – The phone number is
     * opted in, meaning you can publish SMS messages to it.</p> </li> </ul>
     */
    inline void SetIsOptedOut(bool value) { m_isOptedOut = value; }

    /**
     * <p>Indicates whether the phone number is opted out:</p> <ul> <li> <p>
     * <code>true</code> – The phone number is opted out, meaning you cannot publish
     * SMS messages to it.</p> </li> <li> <p> <code>false</code> – The phone number is
     * opted in, meaning you can publish SMS messages to it.</p> </li> </ul>
     */
    inline CheckIfPhoneNumberIsOptedOutResult& WithIsOptedOut(bool value) { SetIsOptedOut(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CheckIfPhoneNumberIsOptedOutResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CheckIfPhoneNumberIsOptedOutResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_isOptedOut;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
