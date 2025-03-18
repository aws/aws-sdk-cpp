/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeDefinition.h>
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
  /**
   * <p>The output for the ListThingTypes operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypesResponse">AWS
   * API Reference</a></p>
   */
  class ListThingTypesResult
  {
  public:
    AWS_IOT_API ListThingTypesResult() = default;
    AWS_IOT_API ListThingTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The thing types.</p>
     */
    inline const Aws::Vector<ThingTypeDefinition>& GetThingTypes() const { return m_thingTypes; }
    template<typename ThingTypesT = Aws::Vector<ThingTypeDefinition>>
    void SetThingTypes(ThingTypesT&& value) { m_thingTypesHasBeenSet = true; m_thingTypes = std::forward<ThingTypesT>(value); }
    template<typename ThingTypesT = Aws::Vector<ThingTypeDefinition>>
    ListThingTypesResult& WithThingTypes(ThingTypesT&& value) { SetThingTypes(std::forward<ThingTypesT>(value)); return *this;}
    template<typename ThingTypesT = ThingTypeDefinition>
    ListThingTypesResult& AddThingTypes(ThingTypesT&& value) { m_thingTypesHasBeenSet = true; m_thingTypes.emplace_back(std::forward<ThingTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThingTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThingTypeDefinition> m_thingTypes;
    bool m_thingTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
