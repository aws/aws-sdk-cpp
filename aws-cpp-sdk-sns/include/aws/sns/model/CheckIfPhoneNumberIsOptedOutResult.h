﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/model/ResponseMetadata.h>

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
   * <p>The response from the <code>CheckIfPhoneNumberIsOptedOut</code> action.</p>
   */
  class AWS_SNS_API CheckIfPhoneNumberIsOptedOutResult
  {
  public:
    CheckIfPhoneNumberIsOptedOutResult();
    CheckIfPhoneNumberIsOptedOutResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CheckIfPhoneNumberIsOptedOutResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CheckIfPhoneNumberIsOptedOutResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CheckIfPhoneNumberIsOptedOutResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    bool m_isOptedOut;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws