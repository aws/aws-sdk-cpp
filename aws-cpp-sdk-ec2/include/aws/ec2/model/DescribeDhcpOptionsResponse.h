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
#include <aws/ec2/model/DhcpOptions.h>
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
   * <p>Contains the output of DescribeDhcpOptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeDhcpOptionsResponse
  {
  public:
    DescribeDhcpOptionsResponse();
    DescribeDhcpOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDhcpOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline const Aws::Vector<DhcpOptions>& GetDhcpOptions() const{ return m_dhcpOptions; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline void SetDhcpOptions(const Aws::Vector<DhcpOptions>& value) { m_dhcpOptions = value; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline void SetDhcpOptions(Aws::Vector<DhcpOptions>&& value) { m_dhcpOptions = std::move(value); }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& WithDhcpOptions(const Aws::Vector<DhcpOptions>& value) { SetDhcpOptions(value); return *this;}

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& WithDhcpOptions(Aws::Vector<DhcpOptions>&& value) { SetDhcpOptions(std::move(value)); return *this;}

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& AddDhcpOptions(const DhcpOptions& value) { m_dhcpOptions.push_back(value); return *this; }

    /**
     * <p>Information about one or more DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsResponse& AddDhcpOptions(DhcpOptions&& value) { m_dhcpOptions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDhcpOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDhcpOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DhcpOptions> m_dhcpOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
