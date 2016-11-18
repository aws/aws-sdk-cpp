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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/LoginProfile.h>
#include <aws/iam/model/ResponseMetadata.h>

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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>CreateLoginProfile</a> request. </p>
   */
  class AWS_IAM_API CreateLoginProfileResult
  {
  public:
    CreateLoginProfileResult();
    CreateLoginProfileResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateLoginProfileResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline const LoginProfile& GetLoginProfile() const{ return m_loginProfile; }

    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline void SetLoginProfile(const LoginProfile& value) { m_loginProfile = value; }

    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline void SetLoginProfile(LoginProfile&& value) { m_loginProfile = value; }

    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline CreateLoginProfileResult& WithLoginProfile(const LoginProfile& value) { SetLoginProfile(value); return *this;}

    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline CreateLoginProfileResult& WithLoginProfile(LoginProfile&& value) { SetLoginProfile(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateLoginProfileResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLoginProfileResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    LoginProfile m_loginProfile;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws