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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a <code>TestDNSAnswer</code>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TestDNSAnswerResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API TestDNSAnswerResult
  {
  public:
    TestDNSAnswerResult();
    TestDNSAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    TestDNSAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline const Aws::String& GetNameserver() const{ return m_nameserver; }

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline void SetNameserver(const Aws::String& value) { m_nameserver = value; }

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline void SetNameserver(Aws::String&& value) { m_nameserver = std::move(value); }

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline void SetNameserver(const char* value) { m_nameserver.assign(value); }

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline TestDNSAnswerResult& WithNameserver(const Aws::String& value) { SetNameserver(value); return *this;}

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline TestDNSAnswerResult& WithNameserver(Aws::String&& value) { SetNameserver(std::move(value)); return *this;}

    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline TestDNSAnswerResult& WithNameserver(const char* value) { SetNameserver(value); return *this;}


    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline const Aws::String& GetRecordName() const{ return m_recordName; }

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline void SetRecordName(const Aws::String& value) { m_recordName = value; }

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline void SetRecordName(Aws::String&& value) { m_recordName = std::move(value); }

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline void SetRecordName(const char* value) { m_recordName.assign(value); }

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline TestDNSAnswerResult& WithRecordName(const Aws::String& value) { SetRecordName(value); return *this;}

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline TestDNSAnswerResult& WithRecordName(Aws::String&& value) { SetRecordName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline TestDNSAnswerResult& WithRecordName(const char* value) { SetRecordName(value); return *this;}


    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline const RRType& GetRecordType() const{ return m_recordType; }

    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline void SetRecordType(const RRType& value) { m_recordType = value; }

    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline void SetRecordType(RRType&& value) { m_recordType = std::move(value); }

    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline TestDNSAnswerResult& WithRecordType(const RRType& value) { SetRecordType(value); return *this;}

    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline TestDNSAnswerResult& WithRecordType(RRType&& value) { SetRecordType(std::move(value)); return *this;}


    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordData() const{ return m_recordData; }

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline void SetRecordData(const Aws::Vector<Aws::String>& value) { m_recordData = value; }

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline void SetRecordData(Aws::Vector<Aws::String>&& value) { m_recordData = std::move(value); }

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline TestDNSAnswerResult& WithRecordData(const Aws::Vector<Aws::String>& value) { SetRecordData(value); return *this;}

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline TestDNSAnswerResult& WithRecordData(Aws::Vector<Aws::String>&& value) { SetRecordData(std::move(value)); return *this;}

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline TestDNSAnswerResult& AddRecordData(const Aws::String& value) { m_recordData.push_back(value); return *this; }

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline TestDNSAnswerResult& AddRecordData(Aws::String&& value) { m_recordData.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline TestDNSAnswerResult& AddRecordData(const char* value) { m_recordData.push_back(value); return *this; }


    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline void SetResponseCode(const Aws::String& value) { m_responseCode = value; }

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline void SetResponseCode(Aws::String&& value) { m_responseCode = std::move(value); }

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline void SetResponseCode(const char* value) { m_responseCode.assign(value); }

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline TestDNSAnswerResult& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline TestDNSAnswerResult& WithResponseCode(Aws::String&& value) { SetResponseCode(std::move(value)); return *this;}

    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline TestDNSAnswerResult& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}


    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocol = value; }

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocol = std::move(value); }

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline void SetProtocol(const char* value) { m_protocol.assign(value); }

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline TestDNSAnswerResult& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline TestDNSAnswerResult& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline TestDNSAnswerResult& WithProtocol(const char* value) { SetProtocol(value); return *this;}

  private:

    Aws::String m_nameserver;

    Aws::String m_recordName;

    RRType m_recordType;

    Aws::Vector<Aws::String> m_recordData;

    Aws::String m_responseCode;

    Aws::String m_protocol;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
