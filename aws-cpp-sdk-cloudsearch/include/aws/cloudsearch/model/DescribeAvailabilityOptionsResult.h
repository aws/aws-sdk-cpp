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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/AvailabilityOptionsStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeAvailabilityOptions</code> request. Indicates
   * whether or not the Multi-AZ option is enabled for the domain specified in the
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAvailabilityOptionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult
  {
  public:
    DescribeAvailabilityOptionsResult();
    DescribeAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline const AvailabilityOptionsStatus& GetAvailabilityOptions() const{ return m_availabilityOptions; }

    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline void SetAvailabilityOptions(const AvailabilityOptionsStatus& value) { m_availabilityOptions = value; }

    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline void SetAvailabilityOptions(AvailabilityOptionsStatus&& value) { m_availabilityOptions = std::move(value); }

    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline DescribeAvailabilityOptionsResult& WithAvailabilityOptions(const AvailabilityOptionsStatus& value) { SetAvailabilityOptions(value); return *this;}

    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline DescribeAvailabilityOptionsResult& WithAvailabilityOptions(AvailabilityOptionsStatus&& value) { SetAvailabilityOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAvailabilityOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAvailabilityOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AvailabilityOptionsStatus m_availabilityOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
