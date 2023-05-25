/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAvailabilityOptionsResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult();
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
