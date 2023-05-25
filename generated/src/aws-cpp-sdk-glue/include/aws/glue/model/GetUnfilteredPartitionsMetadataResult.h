/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/UnfilteredPartition.h>
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
namespace Glue
{
namespace Model
{
  class GetUnfilteredPartitionsMetadataResult
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult();
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of requested partitions.</p>
     */
    inline const Aws::Vector<UnfilteredPartition>& GetUnfilteredPartitions() const{ return m_unfilteredPartitions; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline void SetUnfilteredPartitions(const Aws::Vector<UnfilteredPartition>& value) { m_unfilteredPartitions = value; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline void SetUnfilteredPartitions(Aws::Vector<UnfilteredPartition>&& value) { m_unfilteredPartitions = std::move(value); }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& WithUnfilteredPartitions(const Aws::Vector<UnfilteredPartition>& value) { SetUnfilteredPartitions(value); return *this;}

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& WithUnfilteredPartitions(Aws::Vector<UnfilteredPartition>&& value) { SetUnfilteredPartitions(std::move(value)); return *this;}

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& AddUnfilteredPartitions(const UnfilteredPartition& value) { m_unfilteredPartitions.push_back(value); return *this; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& AddUnfilteredPartitions(UnfilteredPartition&& value) { m_unfilteredPartitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetUnfilteredPartitionsMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UnfilteredPartition> m_unfilteredPartitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
