﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  /**
   * <p>The output from the ListThingPrincipals operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingPrincipalsResponse">AWS
   * API Reference</a></p>
   */
  class ListThingPrincipalsResult
  {
  public:
    AWS_IOT_API ListThingPrincipalsResult();
    AWS_IOT_API ListThingPrincipalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingPrincipalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The principals associated with the thing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principals = std::move(value); }
    inline ListThingPrincipalsResult& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}
    inline ListThingPrincipalsResult& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline ListThingPrincipalsResult& AddPrincipals(const Aws::String& value) { m_principals.push_back(value); return *this; }
    inline ListThingPrincipalsResult& AddPrincipals(Aws::String&& value) { m_principals.push_back(std::move(value)); return *this; }
    inline ListThingPrincipalsResult& AddPrincipals(const char* value) { m_principals.push_back(value); return *this; }
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
    inline ListThingPrincipalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListThingPrincipalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListThingPrincipalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListThingPrincipalsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListThingPrincipalsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListThingPrincipalsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_principals;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
