/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/Compute.h>
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
namespace GameLift
{
namespace Model
{
  class ListComputeResult
  {
  public:
    AWS_GAMELIFT_API ListComputeResult();
    AWS_GAMELIFT_API ListComputeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListComputeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline const Aws::Vector<Compute>& GetComputeList() const{ return m_computeList; }

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline void SetComputeList(const Aws::Vector<Compute>& value) { m_computeList = value; }

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline void SetComputeList(Aws::Vector<Compute>&& value) { m_computeList = std::move(value); }

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline ListComputeResult& WithComputeList(const Aws::Vector<Compute>& value) { SetComputeList(value); return *this;}

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline ListComputeResult& WithComputeList(Aws::Vector<Compute>&& value) { SetComputeList(std::move(value)); return *this;}

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline ListComputeResult& AddComputeList(const Compute& value) { m_computeList.push_back(value); return *this; }

    /**
     * <p>A list of compute resources registered to the fleet you specified.</p>
     */
    inline ListComputeResult& AddComputeList(Compute&& value) { m_computeList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListComputeResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListComputeResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListComputeResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Compute> m_computeList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
