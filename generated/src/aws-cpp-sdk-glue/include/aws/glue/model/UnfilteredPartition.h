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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  class UnfilteredPartition
  {
  public:
    AWS_GLUE_API UnfilteredPartition();
    AWS_GLUE_API UnfilteredPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UnfilteredPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Partition& GetPartition() const{ return m_partition; }

    
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    
    inline void SetPartition(const Partition& value) { m_partitionHasBeenSet = true; m_partition = value; }

    
    inline void SetPartition(Partition&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    
    inline UnfilteredPartition& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    
    inline UnfilteredPartition& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    
    inline bool AuthorizedColumnsHasBeenSet() const { return m_authorizedColumnsHasBeenSet; }

    
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = value; }

    
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = std::move(value); }

    
    inline UnfilteredPartition& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    
    inline UnfilteredPartition& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    
    inline UnfilteredPartition& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(value); return *this; }

    
    inline UnfilteredPartition& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(std::move(value)); return *this; }

    
    inline UnfilteredPartition& AddAuthorizedColumns(const char* value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(value); return *this; }


    
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    
    inline bool IsRegisteredWithLakeFormationHasBeenSet() const { return m_isRegisteredWithLakeFormationHasBeenSet; }

    
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }

    
    inline UnfilteredPartition& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}

  private:

    Partition m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedColumns;
    bool m_authorizedColumnsHasBeenSet = false;

    bool m_isRegisteredWithLakeFormation;
    bool m_isRegisteredWithLakeFormationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
