﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of the list on-premises instances
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstancesOutput">AWS
   * API Reference</a></p>
   */
  class ListOnPremisesInstancesResult
  {
  public:
    AWS_CODEDEPLOY_API ListOnPremisesInstancesResult();
    AWS_CODEDEPLOY_API ListOnPremisesInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListOnPremisesInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of matching on-premises instance names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNames = value; }
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNames = std::move(value); }
    inline ListOnPremisesInstancesResult& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}
    inline ListOnPremisesInstancesResult& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}
    inline ListOnPremisesInstancesResult& AddInstanceNames(const Aws::String& value) { m_instanceNames.push_back(value); return *this; }
    inline ListOnPremisesInstancesResult& AddInstanceNames(Aws::String&& value) { m_instanceNames.push_back(std::move(value)); return *this; }
    inline ListOnPremisesInstancesResult& AddInstanceNames(const char* value) { m_instanceNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list on-premises instances call to return the
     * next set of on-premises instances in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOnPremisesInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOnPremisesInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOnPremisesInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOnPremisesInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOnPremisesInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOnPremisesInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
