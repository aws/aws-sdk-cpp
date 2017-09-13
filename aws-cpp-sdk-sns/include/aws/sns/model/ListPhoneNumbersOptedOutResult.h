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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response from the <code>ListPhoneNumbersOptedOut</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPhoneNumbersOptedOutResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API ListPhoneNumbersOptedOutResult
  {
  public:
    ListPhoneNumbersOptedOutResult();
    ListPhoneNumbersOptedOutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPhoneNumbersOptedOutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<Aws::String>& value) { m_phoneNumbers = value; }

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<Aws::String>&& value) { m_phoneNumbers = std::move(value); }

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline ListPhoneNumbersOptedOutResult& WithPhoneNumbers(const Aws::Vector<Aws::String>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline ListPhoneNumbersOptedOutResult& WithPhoneNumbers(Aws::Vector<Aws::String>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline ListPhoneNumbersOptedOutResult& AddPhoneNumbers(const Aws::String& value) { m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline ListPhoneNumbersOptedOutResult& AddPhoneNumbers(Aws::String&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of phone numbers that are opted out of receiving SMS messages. The
     * list is paginated, and each page can contain up to 100 phone numbers.</p>
     */
    inline ListPhoneNumbersOptedOutResult& AddPhoneNumbers(const char* value) { m_phoneNumbers.push_back(value); return *this; }


    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListPhoneNumbersOptedOut</code> action if additional records are available
     * after the first page of results.</p>
     */
    inline ListPhoneNumbersOptedOutResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPhoneNumbersOptedOutResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPhoneNumbersOptedOutResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_phoneNumbers;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
