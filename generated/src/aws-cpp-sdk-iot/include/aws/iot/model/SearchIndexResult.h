/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ThingDocument.h>
#include <aws/iot/model/ThingGroupDocument.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class SearchIndexResult
  {
  public:
    AWS_IOT_API SearchIndexResult() = default;
    AWS_IOT_API SearchIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API SearchIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchIndexResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The things that match the search query.</p>
     */
    inline const Aws::Vector<ThingDocument>& GetThings() const { return m_things; }
    template<typename ThingsT = Aws::Vector<ThingDocument>>
    void SetThings(ThingsT&& value) { m_thingsHasBeenSet = true; m_things = std::forward<ThingsT>(value); }
    template<typename ThingsT = Aws::Vector<ThingDocument>>
    SearchIndexResult& WithThings(ThingsT&& value) { SetThings(std::forward<ThingsT>(value)); return *this;}
    template<typename ThingsT = ThingDocument>
    SearchIndexResult& AddThings(ThingsT&& value) { m_thingsHasBeenSet = true; m_things.emplace_back(std::forward<ThingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline const Aws::Vector<ThingGroupDocument>& GetThingGroups() const { return m_thingGroups; }
    template<typename ThingGroupsT = Aws::Vector<ThingGroupDocument>>
    void SetThingGroups(ThingGroupsT&& value) { m_thingGroupsHasBeenSet = true; m_thingGroups = std::forward<ThingGroupsT>(value); }
    template<typename ThingGroupsT = Aws::Vector<ThingGroupDocument>>
    SearchIndexResult& WithThingGroups(ThingGroupsT&& value) { SetThingGroups(std::forward<ThingGroupsT>(value)); return *this;}
    template<typename ThingGroupsT = ThingGroupDocument>
    SearchIndexResult& AddThingGroups(ThingGroupsT&& value) { m_thingGroupsHasBeenSet = true; m_thingGroups.emplace_back(std::forward<ThingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchIndexResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ThingDocument> m_things;
    bool m_thingsHasBeenSet = false;

    Aws::Vector<ThingGroupDocument> m_thingGroups;
    bool m_thingGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
