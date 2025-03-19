/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PrincipalThingObject.h>
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
  class ListPrincipalThingsV2Result
  {
  public:
    AWS_IOT_API ListPrincipalThingsV2Result() = default;
    AWS_IOT_API ListPrincipalThingsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPrincipalThingsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>thingPrincipalObject</code> that represents the principal and
     * the type of relation it has with the thing.</p>
     */
    inline const Aws::Vector<PrincipalThingObject>& GetPrincipalThingObjects() const { return m_principalThingObjects; }
    template<typename PrincipalThingObjectsT = Aws::Vector<PrincipalThingObject>>
    void SetPrincipalThingObjects(PrincipalThingObjectsT&& value) { m_principalThingObjectsHasBeenSet = true; m_principalThingObjects = std::forward<PrincipalThingObjectsT>(value); }
    template<typename PrincipalThingObjectsT = Aws::Vector<PrincipalThingObject>>
    ListPrincipalThingsV2Result& WithPrincipalThingObjects(PrincipalThingObjectsT&& value) { SetPrincipalThingObjects(std::forward<PrincipalThingObjectsT>(value)); return *this;}
    template<typename PrincipalThingObjectsT = PrincipalThingObject>
    ListPrincipalThingsV2Result& AddPrincipalThingObjects(PrincipalThingObjectsT&& value) { m_principalThingObjectsHasBeenSet = true; m_principalThingObjects.emplace_back(std::forward<PrincipalThingObjectsT>(value)); return *this; }
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
    ListPrincipalThingsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPrincipalThingsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PrincipalThingObject> m_principalThingObjects;
    bool m_principalThingObjectsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
