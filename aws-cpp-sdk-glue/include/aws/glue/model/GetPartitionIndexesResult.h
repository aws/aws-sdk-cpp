/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/PartitionIndexDescriptor.h>
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
  class GetPartitionIndexesResult
  {
  public:
    AWS_GLUE_API GetPartitionIndexesResult();
    AWS_GLUE_API GetPartitionIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPartitionIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of index descriptors.</p>
     */
    inline const Aws::Vector<PartitionIndexDescriptor>& GetPartitionIndexDescriptorList() const{ return m_partitionIndexDescriptorList; }

    /**
     * <p>A list of index descriptors.</p>
     */
    inline void SetPartitionIndexDescriptorList(const Aws::Vector<PartitionIndexDescriptor>& value) { m_partitionIndexDescriptorList = value; }

    /**
     * <p>A list of index descriptors.</p>
     */
    inline void SetPartitionIndexDescriptorList(Aws::Vector<PartitionIndexDescriptor>&& value) { m_partitionIndexDescriptorList = std::move(value); }

    /**
     * <p>A list of index descriptors.</p>
     */
    inline GetPartitionIndexesResult& WithPartitionIndexDescriptorList(const Aws::Vector<PartitionIndexDescriptor>& value) { SetPartitionIndexDescriptorList(value); return *this;}

    /**
     * <p>A list of index descriptors.</p>
     */
    inline GetPartitionIndexesResult& WithPartitionIndexDescriptorList(Aws::Vector<PartitionIndexDescriptor>&& value) { SetPartitionIndexDescriptorList(std::move(value)); return *this;}

    /**
     * <p>A list of index descriptors.</p>
     */
    inline GetPartitionIndexesResult& AddPartitionIndexDescriptorList(const PartitionIndexDescriptor& value) { m_partitionIndexDescriptorList.push_back(value); return *this; }

    /**
     * <p>A list of index descriptors.</p>
     */
    inline GetPartitionIndexesResult& AddPartitionIndexDescriptorList(PartitionIndexDescriptor&& value) { m_partitionIndexDescriptorList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline GetPartitionIndexesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline GetPartitionIndexesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline GetPartitionIndexesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PartitionIndexDescriptor> m_partitionIndexDescriptorList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
