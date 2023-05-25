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

  /**
   * <p>A partition that contains unfiltered metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UnfilteredPartition">AWS
   * API Reference</a></p>
   */
  class UnfilteredPartition
  {
  public:
    AWS_GLUE_API UnfilteredPartition();
    AWS_GLUE_API UnfilteredPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UnfilteredPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The partition object.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>The partition object.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The partition object.</p>
     */
    inline void SetPartition(const Partition& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The partition object.</p>
     */
    inline void SetPartition(Partition&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The partition object.</p>
     */
    inline UnfilteredPartition& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>The partition object.</p>
     */
    inline UnfilteredPartition& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline bool AuthorizedColumnsHasBeenSet() const { return m_authorizedColumnsHasBeenSet; }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = value; }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns = std::move(value); }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline UnfilteredPartition& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline UnfilteredPartition& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline UnfilteredPartition& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(value); return *this; }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline UnfilteredPartition& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of columns the user has permissions to access.</p>
     */
    inline UnfilteredPartition& AddAuthorizedColumns(const char* value) { m_authorizedColumnsHasBeenSet = true; m_authorizedColumns.push_back(value); return *this; }


    /**
     * <p>A Boolean value indicating that the partition location is registered with
     * Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    /**
     * <p>A Boolean value indicating that the partition location is registered with
     * Lake Formation.</p>
     */
    inline bool IsRegisteredWithLakeFormationHasBeenSet() const { return m_isRegisteredWithLakeFormationHasBeenSet; }

    /**
     * <p>A Boolean value indicating that the partition location is registered with
     * Lake Formation.</p>
     */
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }

    /**
     * <p>A Boolean value indicating that the partition location is registered with
     * Lake Formation.</p>
     */
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
