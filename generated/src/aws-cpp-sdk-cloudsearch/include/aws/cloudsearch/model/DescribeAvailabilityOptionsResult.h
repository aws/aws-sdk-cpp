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
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult() = default;
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The availability options configured for the domain. Indicates whether
     * Multi-AZ is enabled for the domain. </p>
     */
    inline const AvailabilityOptionsStatus& GetAvailabilityOptions() const { return m_availabilityOptions; }
    template<typename AvailabilityOptionsT = AvailabilityOptionsStatus>
    void SetAvailabilityOptions(AvailabilityOptionsT&& value) { m_availabilityOptionsHasBeenSet = true; m_availabilityOptions = std::forward<AvailabilityOptionsT>(value); }
    template<typename AvailabilityOptionsT = AvailabilityOptionsStatus>
    DescribeAvailabilityOptionsResult& WithAvailabilityOptions(AvailabilityOptionsT&& value) { SetAvailabilityOptions(std::forward<AvailabilityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAvailabilityOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AvailabilityOptionsStatus m_availabilityOptions;
    bool m_availabilityOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
