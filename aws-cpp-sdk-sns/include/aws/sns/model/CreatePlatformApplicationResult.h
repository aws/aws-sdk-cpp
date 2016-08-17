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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Response from CreatePlatformApplication action.</p>
   */
  class AWS_SNS_API CreatePlatformApplicationResult
  {
  public:
    CreatePlatformApplicationResult();
    CreatePlatformApplicationResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreatePlatformApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArn.assign(value); }

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreatePlatformApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreatePlatformApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_platformApplicationArn;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws