/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/EventCategoriesMap.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>Data returned from the <code>DescribeEventCategories</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EventCategoriesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventCategoriesResult
  {
  public:
    AWS_RDS_API DescribeEventCategoriesResult();
    AWS_RDS_API DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline const Aws::Vector<EventCategoriesMap>& GetEventCategoriesMapList() const{ return m_eventCategoriesMapList; }

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline void SetEventCategoriesMapList(const Aws::Vector<EventCategoriesMap>& value) { m_eventCategoriesMapList = value; }

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline void SetEventCategoriesMapList(Aws::Vector<EventCategoriesMap>&& value) { m_eventCategoriesMapList = std::move(value); }

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoriesMapList(const Aws::Vector<EventCategoriesMap>& value) { SetEventCategoriesMapList(value); return *this;}

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline DescribeEventCategoriesResult& WithEventCategoriesMapList(Aws::Vector<EventCategoriesMap>&& value) { SetEventCategoriesMapList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
     */
    inline DescribeEventCategoriesResult& AddEventCategoriesMapList(const EventCategoriesMap& value) { m_eventCategoriesMapList.push_back(value); return *this; }

    /**
     * <p>A list of <code>EventCategoriesMap</code> data types.</p>
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
} // namespace RDS
} // namespace Aws
