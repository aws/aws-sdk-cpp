/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
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
namespace DSQL
{
namespace Model
{
  class CreateMultiRegionClustersResult
  {
  public:
    AWS_DSQL_API CreateMultiRegionClustersResult();
    AWS_DSQL_API CreateMultiRegionClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API CreateMultiRegionClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains the ARNs of all linked clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const{ return m_linkedClusterArns; }
    inline void SetLinkedClusterArns(const Aws::Vector<Aws::String>& value) { m_linkedClusterArns = value; }
    inline void SetLinkedClusterArns(Aws::Vector<Aws::String>&& value) { m_linkedClusterArns = std::move(value); }
    inline CreateMultiRegionClustersResult& WithLinkedClusterArns(const Aws::Vector<Aws::String>& value) { SetLinkedClusterArns(value); return *this;}
    inline CreateMultiRegionClustersResult& WithLinkedClusterArns(Aws::Vector<Aws::String>&& value) { SetLinkedClusterArns(std::move(value)); return *this;}
    inline CreateMultiRegionClustersResult& AddLinkedClusterArns(const Aws::String& value) { m_linkedClusterArns.push_back(value); return *this; }
    inline CreateMultiRegionClustersResult& AddLinkedClusterArns(Aws::String&& value) { m_linkedClusterArns.push_back(std::move(value)); return *this; }
    inline CreateMultiRegionClustersResult& AddLinkedClusterArns(const char* value) { m_linkedClusterArns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMultiRegionClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMultiRegionClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMultiRegionClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedClusterArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
