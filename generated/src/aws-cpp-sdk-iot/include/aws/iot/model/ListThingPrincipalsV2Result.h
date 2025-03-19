/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingPrincipalObject.h>
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
  class ListThingPrincipalsV2Result
  {
  public:
    AWS_IOT_API ListThingPrincipalsV2Result() = default;
    AWS_IOT_API ListThingPrincipalsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingPrincipalsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>thingPrincipalObject</code> that represents the principal and
     * the type of relation it has with the thing.</p>
     */
    inline const Aws::Vector<ThingPrincipalObject>& GetThingPrincipalObjects() const { return m_thingPrincipalObjects; }
    template<typename ThingPrincipalObjectsT = Aws::Vector<ThingPrincipalObject>>
    void SetThingPrincipalObjects(ThingPrincipalObjectsT&& value) { m_thingPrincipalObjectsHasBeenSet = true; m_thingPrincipalObjects = std::forward<ThingPrincipalObjectsT>(value); }
    template<typename ThingPrincipalObjectsT = Aws::Vector<ThingPrincipalObject>>
    ListThingPrincipalsV2Result& WithThingPrincipalObjects(ThingPrincipalObjectsT&& value) { SetThingPrincipalObjects(std::forward<ThingPrincipalObjectsT>(value)); return *this;}
    template<typename ThingPrincipalObjectsT = ThingPrincipalObject>
    ListThingPrincipalsV2Result& AddThingPrincipalObjects(ThingPrincipalObjectsT&& value) { m_thingPrincipalObjectsHasBeenSet = true; m_thingPrincipalObjects.emplace_back(std::forward<ThingPrincipalObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingPrincipalsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThingPrincipalsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThingPrincipalObject> m_thingPrincipalObjects;
    bool m_thingPrincipalObjectsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
