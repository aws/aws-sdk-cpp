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
   * <p>The result of a <code>UpdateAvailabilityOptions</code> request. Contains the
   * status of the domain's availability options. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptionsResponse">AWS
   * API Reference</a></p>
   */
  class UpdateAvailabilityOptionsResult
  {
  public:
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult() = default;
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline const AvailabilityOptionsStatus& GetAvailabilityOptions() const { return m_availabilityOptions; }
    template<typename AvailabilityOptionsT = AvailabilityOptionsStatus>
    void SetAvailabilityOptions(AvailabilityOptionsT&& value) { m_availabilityOptionsHasBeenSet = true; m_availabilityOptions = std::forward<AvailabilityOptionsT>(value); }
    template<typename AvailabilityOptionsT = AvailabilityOptionsStatus>
    UpdateAvailabilityOptionsResult& WithAvailabilityOptions(AvailabilityOptionsT&& value) { SetAvailabilityOptions(std::forward<AvailabilityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateAvailabilityOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
