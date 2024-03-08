/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxScalingGroup.h>
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
namespace finspace
{
namespace Model
{
  class ListKxScalingGroupsResult
  {
  public:
    AWS_FINSPACE_API ListKxScalingGroupsResult();
    AWS_FINSPACE_API ListKxScalingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxScalingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline const Aws::Vector<KxScalingGroup>& GetScalingGroups() const{ return m_scalingGroups; }

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline void SetScalingGroups(const Aws::Vector<KxScalingGroup>& value) { m_scalingGroups = value; }

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline void SetScalingGroups(Aws::Vector<KxScalingGroup>&& value) { m_scalingGroups = std::move(value); }

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline ListKxScalingGroupsResult& WithScalingGroups(const Aws::Vector<KxScalingGroup>& value) { SetScalingGroups(value); return *this;}

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline ListKxScalingGroupsResult& WithScalingGroups(Aws::Vector<KxScalingGroup>&& value) { SetScalingGroups(std::move(value)); return *this;}

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline ListKxScalingGroupsResult& AddScalingGroups(const KxScalingGroup& value) { m_scalingGroups.push_back(value); return *this; }

    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline ListKxScalingGroupsResult& AddScalingGroups(KxScalingGroup&& value) { m_scalingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxScalingGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxScalingGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxScalingGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxScalingGroup> m_scalingGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
