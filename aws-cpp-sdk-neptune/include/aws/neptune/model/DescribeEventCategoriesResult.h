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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/EventCategoriesMap.h>
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
namespace Neptune
{
namespace Model
{
  class AWS_NEPTUNE_API DescribeEventCategoriesResult
  {
  public:
    DescribeEventCategoriesResult();
    DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline const Aws::Vector<EventCategoriesMap>& GetEventCategoriesMapList() const{ return m_eventCategoriesMapList; }

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline void SetEventCategoriesMapList(const Aws::Vector<EventCategoriesMap>& value) { m_eventCategoriesMapList = value; }

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline void SetEventCategoriesMapList(Aws::Vector<EventCategoriesMap>&& value) { m_eventCategoriesMapList = std::move(value); }

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoriesMapList(const Aws::Vector<EventCategoriesMap>& value) { SetEventCategoriesMapList(value); return *this;}

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoriesMapList(Aws::Vector<EventCategoriesMap>&& value) { SetEventCategoriesMapList(std::move(value)); return *this;}

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline DescribeEventCategoriesResult& AddEventCategoriesMapList(const EventCategoriesMap& value) { m_eventCategoriesMapList.push_back(value); return *this; }

    /**
     * <p>A list of EventCategoriesMap data types.</p>
     */
    inline DescribeEventCategoriesResult& AddEventCategoriesMapList(EventCategoriesMap&& value) { m_eventCategoriesMapList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEventCategoriesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEventCategoriesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EventCategoriesMap> m_eventCategoriesMapList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
