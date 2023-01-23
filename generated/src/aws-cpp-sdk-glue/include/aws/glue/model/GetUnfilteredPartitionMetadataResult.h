/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Partition.h>
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
namespace Glue
{
namespace Model
{
  class GetUnfilteredPartitionMetadataResult
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult();
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredPartitionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Partition& GetPartition() const{ return m_partition; }

    
    inline void SetPartition(const Partition& value) { m_partition = value; }

    
    inline void SetPartition(Partition&& value) { m_partition = std::move(value); }

    
    inline GetUnfilteredPartitionMetadataResult& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataResult& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumns = value; }

    
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumns = std::move(value); }

    
    inline GetUnfilteredPartitionMetadataResult& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataResult& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumns.push_back(value); return *this; }

    
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumns.push_back(std::move(value)); return *this; }

    
    inline GetUnfilteredPartitionMetadataResult& AddAuthorizedColumns(const char* value) { m_authorizedColumns.push_back(value); return *this; }


    
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormation = value; }

    
    inline GetUnfilteredPartitionMetadataResult& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}

  private:

    Partition m_partition;

    Aws::Vector<Aws::String> m_authorizedColumns;

    bool m_isRegisteredWithLakeFormation;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
