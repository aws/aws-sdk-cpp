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
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult();
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline const AvailabilityOptionsStatus& GetAvailabilityOptions() const{ return m_availabilityOptions; }

    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline void SetAvailabilityOptions(const AvailabilityOptionsStatus& value) { m_availabilityOptions = value; }

    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline void SetAvailabilityOptions(AvailabilityOptionsStatus&& value) { m_availabilityOptions = std::move(value); }

    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline UpdateAvailabilityOptionsResult& WithAvailabilityOptions(const AvailabilityOptionsStatus& value) { SetAvailabilityOptions(value); return *this;}

    /**
     * <p>The newly-configured availability options. Indicates whether Multi-AZ is
     * enabled for the domain. </p>
     */
    inline UpdateAvailabilityOptionsResult& WithAvailabilityOptions(AvailabilityOptionsStatus&& value) { SetAvailabilityOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateAvailabilityOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateAvailabilityOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AvailabilityOptionsStatus m_availabilityOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
