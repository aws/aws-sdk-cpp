/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/EventCategoriesMap.h>
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
namespace DocDB
{
namespace Model
{
  /**
   * <p>Represents the output of <a>DescribeEventCategories</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/EventCategoriesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventCategoriesResult
  {
  public:
    AWS_DOCDB_API DescribeEventCategoriesResult() = default;
    AWS_DOCDB_API DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeEventCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of event category maps.</p>
     */
    inline const Aws::Vector<EventCategoriesMap>& GetEventCategoriesMapList() const { return m_eventCategoriesMapList; }
    template<typename EventCategoriesMapListT = Aws::Vector<EventCategoriesMap>>
    void SetEventCategoriesMapList(EventCategoriesMapListT&& value) { m_eventCategoriesMapListHasBeenSet = true; m_eventCategoriesMapList = std::forward<EventCategoriesMapListT>(value); }
    template<typename EventCategoriesMapListT = Aws::Vector<EventCategoriesMap>>
    DescribeEventCategoriesResult& WithEventCategoriesMapList(EventCategoriesMapListT&& value) { SetEventCategoriesMapList(std::forward<EventCategoriesMapListT>(value)); return *this;}
    template<typename EventCategoriesMapListT = EventCategoriesMap>
    DescribeEventCategoriesResult& AddEventCategoriesMapList(EventCategoriesMapListT&& value) { m_eventCategoriesMapListHasBeenSet = true; m_eventCategoriesMapList.emplace_back(std::forward<EventCategoriesMapListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEventCategoriesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventCategoriesMap> m_eventCategoriesMapList;
    bool m_eventCategoriesMapListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
