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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of AllocateHosts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHostsResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AllocateHostsResponse
  {
  public:
    AllocateHostsResponse();
    AllocateHostsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AllocateHostsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIds = value; }

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIds = std::move(value); }

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline AllocateHostsResponse& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline AllocateHostsResponse& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline AllocateHostsResponse& AddHostIds(const Aws::String& value) { m_hostIds.push_back(value); return *this; }

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline AllocateHostsResponse& AddHostIds(Aws::String&& value) { m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the allocated Dedicated Host. This is used when you want to launch
     * an instance onto a specific host.</p>
     */
    inline AllocateHostsResponse& AddHostIds(const char* value) { m_hostIds.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AllocateHostsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AllocateHostsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_hostIds;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
