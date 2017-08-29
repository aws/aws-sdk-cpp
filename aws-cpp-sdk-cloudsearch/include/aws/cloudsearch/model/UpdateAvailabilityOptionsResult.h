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
   * <p>The result of a <code>UpdateAvailabilityOptions</code> request. Contains the
   * status of the domain's availability options. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsResult
  {
  public:
    UpdateAvailabilityOptionsResult();
    UpdateAvailabilityOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateAvailabilityOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
