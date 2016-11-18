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
#include <aws/iam/model/AccessKey.h>
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
   * <p>Contains the response to a successful <a>CreateAccessKey</a> request. </p>
   */
  class AWS_IAM_API CreateAccessKeyResult
  {
  public:
    CreateAccessKeyResult();
    CreateAccessKeyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateAccessKeyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A structure with details about the access key.</p>
     */
    inline const AccessKey& GetAccessKey() const{ return m_accessKey; }

    /**
     * <p>A structure with details about the access key.</p>
     */
    inline void SetAccessKey(const AccessKey& value) { m_accessKey = value; }

    /**
     * <p>A structure with details about the access key.</p>
     */
    inline void SetAccessKey(AccessKey&& value) { m_accessKey = value; }

    /**
     * <p>A structure with details about the access key.</p>
     */
    inline CreateAccessKeyResult& WithAccessKey(const AccessKey& value) { SetAccessKey(value); return *this;}

    /**
     * <p>A structure with details about the access key.</p>
     */
    inline CreateAccessKeyResult& WithAccessKey(AccessKey&& value) { SetAccessKey(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateAccessKeyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateAccessKeyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    AccessKey m_accessKey;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws