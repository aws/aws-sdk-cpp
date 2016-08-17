/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/AccessKeyLastUsed.h>
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
   * <p>Contains the response to a successful <a>GetAccessKeyLastUsed</a> request. It
   * is also returned as a member of the <a>AccessKeyMetaData</a> structure returned
   * by the <a>ListAccessKeys</a> action.</p>
   */
  class AWS_IAM_API GetAccessKeyLastUsedResult
  {
  public:
    GetAccessKeyLastUsedResult();
    GetAccessKeyLastUsedResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccessKeyLastUsedResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = value; }

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline GetAccessKeyLastUsedResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline GetAccessKeyLastUsedResult& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the AWS IAM user that owns this access key.</p> <p/>
     */
    inline GetAccessKeyLastUsedResult& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline const AccessKeyLastUsed& GetAccessKeyLastUsed() const{ return m_accessKeyLastUsed; }

    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline void SetAccessKeyLastUsed(const AccessKeyLastUsed& value) { m_accessKeyLastUsed = value; }

    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline void SetAccessKeyLastUsed(AccessKeyLastUsed&& value) { m_accessKeyLastUsed = value; }

    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline GetAccessKeyLastUsedResult& WithAccessKeyLastUsed(const AccessKeyLastUsed& value) { SetAccessKeyLastUsed(value); return *this;}

    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline GetAccessKeyLastUsedResult& WithAccessKeyLastUsed(AccessKeyLastUsed&& value) { SetAccessKeyLastUsed(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetAccessKeyLastUsedResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccessKeyLastUsedResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_userName;
    AccessKeyLastUsed m_accessKeyLastUsed;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws