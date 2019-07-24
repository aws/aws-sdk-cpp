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
#include <aws/sts/STS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/ResponseMetadata.h>
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
namespace STS
{
namespace Model
{
  class AWS_STS_API GetAccessKeyInfoResult
  {
  public:
    GetAccessKeyInfoResult();
    GetAccessKeyInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccessKeyInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_account = value; }

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_account = std::move(value); }

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline void SetAccount(const char* value) { m_account.assign(value); }

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline GetAccessKeyInfoResult& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline GetAccessKeyInfoResult& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The number used to identify the AWS account.</p>
     */
    inline GetAccessKeyInfoResult& WithAccount(const char* value) { SetAccount(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAccessKeyInfoResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccessKeyInfoResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_account;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
