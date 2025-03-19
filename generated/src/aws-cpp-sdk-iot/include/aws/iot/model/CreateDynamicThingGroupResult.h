/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateDynamicThingGroupResult
  {
  public:
    AWS_IOT_API CreateDynamicThingGroupResult() = default;
    AWS_IOT_API CreateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateDynamicThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dynamic thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    CreateDynamicThingGroupResult& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const { return m_thingGroupArn; }
    template<typename ThingGroupArnT = Aws::String>
    void SetThingGroupArn(ThingGroupArnT&& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = std::forward<ThingGroupArnT>(value); }
    template<typename ThingGroupArnT = Aws::String>
    CreateDynamicThingGroupResult& WithThingGroupArn(ThingGroupArnT&& value) { SetThingGroupArn(std::forward<ThingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const { return m_thingGroupId; }
    template<typename ThingGroupIdT = Aws::String>
    void SetThingGroupId(ThingGroupIdT&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::forward<ThingGroupIdT>(value); }
    template<typename ThingGroupIdT = Aws::String>
    CreateDynamicThingGroupResult& WithThingGroupId(ThingGroupIdT&& value) { SetThingGroupId(std::forward<ThingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    CreateDynamicThingGroupResult& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    CreateDynamicThingGroupResult& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const { return m_queryVersion; }
    template<typename QueryVersionT = Aws::String>
    void SetQueryVersion(QueryVersionT&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::forward<QueryVersionT>(value); }
    template<typename QueryVersionT = Aws::String>
    CreateDynamicThingGroupResult& WithQueryVersion(QueryVersionT&& value) { SetQueryVersion(std::forward<QueryVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDynamicThingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet = false;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
