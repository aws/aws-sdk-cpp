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
    AWS_IOT_API ListThingPrincipalsV2Result();
    AWS_IOT_API ListThingPrincipalsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingPrincipalsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>thingPrincipalObject</code> that represents the principal and
     * the type of relation it has with the thing.</p>
     */
    inline const Aws::Vector<ThingPrincipalObject>& GetThingPrincipalObjects() const{ return m_thingPrincipalObjects; }
    inline void SetThingPrincipalObjects(const Aws::Vector<ThingPrincipalObject>& value) { m_thingPrincipalObjects = value; }
    inline void SetThingPrincipalObjects(Aws::Vector<ThingPrincipalObject>&& value) { m_thingPrincipalObjects = std::move(value); }
    inline ListThingPrincipalsV2Result& WithThingPrincipalObjects(const Aws::Vector<ThingPrincipalObject>& value) { SetThingPrincipalObjects(value); return *this;}
    inline ListThingPrincipalsV2Result& WithThingPrincipalObjects(Aws::Vector<ThingPrincipalObject>&& value) { SetThingPrincipalObjects(std::move(value)); return *this;}
    inline ListThingPrincipalsV2Result& AddThingPrincipalObjects(const ThingPrincipalObject& value) { m_thingPrincipalObjects.push_back(value); return *this; }
    inline ListThingPrincipalsV2Result& AddThingPrincipalObjects(ThingPrincipalObject&& value) { m_thingPrincipalObjects.push_back(std::move(value)); return *this; }
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
    inline ListThingPrincipalsV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListThingPrincipalsV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListThingPrincipalsV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListThingPrincipalsV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListThingPrincipalsV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListThingPrincipalsV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ThingPrincipalObject> m_thingPrincipalObjects;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
