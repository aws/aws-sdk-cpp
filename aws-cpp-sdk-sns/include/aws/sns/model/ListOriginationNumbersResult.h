/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/PhoneNumberInformation.h>
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
  class ListOriginationNumbersResult
  {
  public:
    AWS_SNS_API ListOriginationNumbersResult();
    AWS_SNS_API ListOriginationNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListOriginationNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline ListOriginationNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline ListOriginationNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline ListOriginationNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberInformation>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { m_phoneNumbers = value; }

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { m_phoneNumbers = std::move(value); }

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline ListOriginationNumbersResult& WithPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline ListOriginationNumbersResult& WithPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline ListOriginationNumbersResult& AddPhoneNumbers(const PhoneNumberInformation& value) { m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline ListOriginationNumbersResult& AddPhoneNumbers(PhoneNumberInformation&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListOriginationNumbersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListOriginationNumbersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PhoneNumberInformation> m_phoneNumbers;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
