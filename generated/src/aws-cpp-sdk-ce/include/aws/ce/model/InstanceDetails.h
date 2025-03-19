/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/EC2InstanceDetails.h>
#include <aws/ce/model/RDSInstanceDetails.h>
#include <aws/ce/model/RedshiftInstanceDetails.h>
#include <aws/ce/model/ElastiCacheInstanceDetails.h>
#include <aws/ce/model/ESInstanceDetails.h>
#include <aws/ce/model/MemoryDBInstanceDetails.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the reservations that Amazon Web Services recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/InstanceDetails">AWS
   * API Reference</a></p>
   */
  class InstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API InstanceDetails() = default;
    AWS_COSTEXPLORER_API InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const EC2InstanceDetails& GetEC2InstanceDetails() const { return m_eC2InstanceDetails; }
    inline bool EC2InstanceDetailsHasBeenSet() const { return m_eC2InstanceDetailsHasBeenSet; }
    template<typename EC2InstanceDetailsT = EC2InstanceDetails>
    void SetEC2InstanceDetails(EC2InstanceDetailsT&& value) { m_eC2InstanceDetailsHasBeenSet = true; m_eC2InstanceDetails = std::forward<EC2InstanceDetailsT>(value); }
    template<typename EC2InstanceDetailsT = EC2InstanceDetails>
    InstanceDetails& WithEC2InstanceDetails(EC2InstanceDetailsT&& value) { SetEC2InstanceDetails(std::forward<EC2InstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon RDS reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const RDSInstanceDetails& GetRDSInstanceDetails() const { return m_rDSInstanceDetails; }
    inline bool RDSInstanceDetailsHasBeenSet() const { return m_rDSInstanceDetailsHasBeenSet; }
    template<typename RDSInstanceDetailsT = RDSInstanceDetails>
    void SetRDSInstanceDetails(RDSInstanceDetailsT&& value) { m_rDSInstanceDetailsHasBeenSet = true; m_rDSInstanceDetails = std::forward<RDSInstanceDetailsT>(value); }
    template<typename RDSInstanceDetailsT = RDSInstanceDetails>
    InstanceDetails& WithRDSInstanceDetails(RDSInstanceDetailsT&& value) { SetRDSInstanceDetails(std::forward<RDSInstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const RedshiftInstanceDetails& GetRedshiftInstanceDetails() const { return m_redshiftInstanceDetails; }
    inline bool RedshiftInstanceDetailsHasBeenSet() const { return m_redshiftInstanceDetailsHasBeenSet; }
    template<typename RedshiftInstanceDetailsT = RedshiftInstanceDetails>
    void SetRedshiftInstanceDetails(RedshiftInstanceDetailsT&& value) { m_redshiftInstanceDetailsHasBeenSet = true; m_redshiftInstanceDetails = std::forward<RedshiftInstanceDetailsT>(value); }
    template<typename RedshiftInstanceDetailsT = RedshiftInstanceDetails>
    InstanceDetails& WithRedshiftInstanceDetails(RedshiftInstanceDetailsT&& value) { SetRedshiftInstanceDetails(std::forward<RedshiftInstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const ElastiCacheInstanceDetails& GetElastiCacheInstanceDetails() const { return m_elastiCacheInstanceDetails; }
    inline bool ElastiCacheInstanceDetailsHasBeenSet() const { return m_elastiCacheInstanceDetailsHasBeenSet; }
    template<typename ElastiCacheInstanceDetailsT = ElastiCacheInstanceDetails>
    void SetElastiCacheInstanceDetails(ElastiCacheInstanceDetailsT&& value) { m_elastiCacheInstanceDetailsHasBeenSet = true; m_elastiCacheInstanceDetails = std::forward<ElastiCacheInstanceDetailsT>(value); }
    template<typename ElastiCacheInstanceDetailsT = ElastiCacheInstanceDetails>
    InstanceDetails& WithElastiCacheInstanceDetails(ElastiCacheInstanceDetailsT&& value) { SetElastiCacheInstanceDetails(std::forward<ElastiCacheInstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service reservations that Amazon Web Services
     * recommends that you purchase.</p>
     */
    inline const ESInstanceDetails& GetESInstanceDetails() const { return m_eSInstanceDetails; }
    inline bool ESInstanceDetailsHasBeenSet() const { return m_eSInstanceDetailsHasBeenSet; }
    template<typename ESInstanceDetailsT = ESInstanceDetails>
    void SetESInstanceDetails(ESInstanceDetailsT&& value) { m_eSInstanceDetailsHasBeenSet = true; m_eSInstanceDetails = std::forward<ESInstanceDetailsT>(value); }
    template<typename ESInstanceDetailsT = ESInstanceDetails>
    InstanceDetails& WithESInstanceDetails(ESInstanceDetailsT&& value) { SetESInstanceDetails(std::forward<ESInstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MemoryDB reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const MemoryDBInstanceDetails& GetMemoryDBInstanceDetails() const { return m_memoryDBInstanceDetails; }
    inline bool MemoryDBInstanceDetailsHasBeenSet() const { return m_memoryDBInstanceDetailsHasBeenSet; }
    template<typename MemoryDBInstanceDetailsT = MemoryDBInstanceDetails>
    void SetMemoryDBInstanceDetails(MemoryDBInstanceDetailsT&& value) { m_memoryDBInstanceDetailsHasBeenSet = true; m_memoryDBInstanceDetails = std::forward<MemoryDBInstanceDetailsT>(value); }
    template<typename MemoryDBInstanceDetailsT = MemoryDBInstanceDetails>
    InstanceDetails& WithMemoryDBInstanceDetails(MemoryDBInstanceDetailsT&& value) { SetMemoryDBInstanceDetails(std::forward<MemoryDBInstanceDetailsT>(value)); return *this;}
    ///@}
  private:

    EC2InstanceDetails m_eC2InstanceDetails;
    bool m_eC2InstanceDetailsHasBeenSet = false;

    RDSInstanceDetails m_rDSInstanceDetails;
    bool m_rDSInstanceDetailsHasBeenSet = false;

    RedshiftInstanceDetails m_redshiftInstanceDetails;
    bool m_redshiftInstanceDetailsHasBeenSet = false;

    ElastiCacheInstanceDetails m_elastiCacheInstanceDetails;
    bool m_elastiCacheInstanceDetailsHasBeenSet = false;

    ESInstanceDetails m_eSInstanceDetails;
    bool m_eSInstanceDetailsHasBeenSet = false;

    MemoryDBInstanceDetails m_memoryDBInstanceDetails;
    bool m_memoryDBInstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
