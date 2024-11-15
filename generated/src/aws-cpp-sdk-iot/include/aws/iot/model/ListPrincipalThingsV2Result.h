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
    AWS_IOT_API ListPrincipalThingsV2Result();
    AWS_IOT_API ListPrincipalThingsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPrincipalThingsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>thingPrincipalObject</code> that represents the principal and
     * the type of relation it has with the thing.</p>
     */
    inline const Aws::Vector<PrincipalThingObject>& GetPrincipalThingObjects() const{ return m_principalThingObjects; }
    inline void SetPrincipalThingObjects(const Aws::Vector<PrincipalThingObject>& value) { m_principalThingObjects = value; }
    inline void SetPrincipalThingObjects(Aws::Vector<PrincipalThingObject>&& value) { m_principalThingObjects = std::move(value); }
    inline ListPrincipalThingsV2Result& WithPrincipalThingObjects(const Aws::Vector<PrincipalThingObject>& value) { SetPrincipalThingObjects(value); return *this;}
    inline ListPrincipalThingsV2Result& WithPrincipalThingObjects(Aws::Vector<PrincipalThingObject>&& value) { SetPrincipalThingObjects(std::move(value)); return *this;}
    inline ListPrincipalThingsV2Result& AddPrincipalThingObjects(const PrincipalThingObject& value) { m_principalThingObjects.push_back(value); return *this; }
    inline ListPrincipalThingsV2Result& AddPrincipalThingObjects(PrincipalThingObject&& value) { m_principalThingObjects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPrincipalThingsV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPrincipalThingsV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPrincipalThingsV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPrincipalThingsV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPrincipalThingsV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPrincipalThingsV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PrincipalThingObject> m_principalThingObjects;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
