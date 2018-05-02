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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FleetData.h>
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
  class AWS_EC2_API DescribeFleetsResponse
  {
  public:
    DescribeFleetsResponse();
    DescribeFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The EC2 Fleets.</p>
     */
    inline const Aws::Vector<FleetData>& GetFleets() const{ return m_fleets; }

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline void SetFleets(const Aws::Vector<FleetData>& value) { m_fleets = value; }

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline void SetFleets(Aws::Vector<FleetData>&& value) { m_fleets = std::move(value); }

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline DescribeFleetsResponse& WithFleets(const Aws::Vector<FleetData>& value) { SetFleets(value); return *this;}

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline DescribeFleetsResponse& WithFleets(Aws::Vector<FleetData>&& value) { SetFleets(std::move(value)); return *this;}

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline DescribeFleetsResponse& AddFleets(const FleetData& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>The EC2 Fleets.</p>
     */
    inline DescribeFleetsResponse& AddFleets(FleetData&& value) { m_fleets.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFleetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFleetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<FleetData> m_fleets;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
