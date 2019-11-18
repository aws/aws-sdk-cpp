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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API RegisterTypeResult
  {
  public:
    RegisterTypeResult();
    RegisterTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RegisterTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline const Aws::String& GetRegistrationToken() const{ return m_registrationToken; }

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline void SetRegistrationToken(const Aws::String& value) { m_registrationToken = value; }

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline void SetRegistrationToken(Aws::String&& value) { m_registrationToken = std::move(value); }

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline void SetRegistrationToken(const char* value) { m_registrationToken.assign(value); }

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline RegisterTypeResult& WithRegistrationToken(const Aws::String& value) { SetRegistrationToken(value); return *this;}

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline RegisterTypeResult& WithRegistrationToken(Aws::String&& value) { SetRegistrationToken(std::move(value)); return *this;}

    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <code> <a>DescribeTypeRegistration</a> </code>, which returns
     * information about the status and IDs of the type registration. </p>
     */
    inline RegisterTypeResult& WithRegistrationToken(const char* value) { SetRegistrationToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RegisterTypeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RegisterTypeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_registrationToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
