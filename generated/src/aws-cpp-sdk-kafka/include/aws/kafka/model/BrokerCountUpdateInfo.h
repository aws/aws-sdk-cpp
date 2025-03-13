/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Information regarding UpdateBrokerCount.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerCountUpdateInfo">AWS
   * API Reference</a></p>
   */
  class BrokerCountUpdateInfo
  {
  public:
    AWS_KAFKA_API BrokerCountUpdateInfo() = default;
    AWS_KAFKA_API BrokerCountUpdateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerCountUpdateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Kafka Broker IDs of brokers being created.</p>
         
     */
    inline const Aws::Vector<double>& GetCreatedBrokerIds() const { return m_createdBrokerIds; }
    inline bool CreatedBrokerIdsHasBeenSet() const { return m_createdBrokerIdsHasBeenSet; }
    template<typename CreatedBrokerIdsT = Aws::Vector<double>>
    void SetCreatedBrokerIds(CreatedBrokerIdsT&& value) { m_createdBrokerIdsHasBeenSet = true; m_createdBrokerIds = std::forward<CreatedBrokerIdsT>(value); }
    template<typename CreatedBrokerIdsT = Aws::Vector<double>>
    BrokerCountUpdateInfo& WithCreatedBrokerIds(CreatedBrokerIdsT&& value) { SetCreatedBrokerIds(std::forward<CreatedBrokerIdsT>(value)); return *this;}
    inline BrokerCountUpdateInfo& AddCreatedBrokerIds(double value) { m_createdBrokerIdsHasBeenSet = true; m_createdBrokerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Kafka Broker IDs of brokers being deleted.</p>
         
     */
    inline const Aws::Vector<double>& GetDeletedBrokerIds() const { return m_deletedBrokerIds; }
    inline bool DeletedBrokerIdsHasBeenSet() const { return m_deletedBrokerIdsHasBeenSet; }
    template<typename DeletedBrokerIdsT = Aws::Vector<double>>
    void SetDeletedBrokerIds(DeletedBrokerIdsT&& value) { m_deletedBrokerIdsHasBeenSet = true; m_deletedBrokerIds = std::forward<DeletedBrokerIdsT>(value); }
    template<typename DeletedBrokerIdsT = Aws::Vector<double>>
    BrokerCountUpdateInfo& WithDeletedBrokerIds(DeletedBrokerIdsT&& value) { SetDeletedBrokerIds(std::forward<DeletedBrokerIdsT>(value)); return *this;}
    inline BrokerCountUpdateInfo& AddDeletedBrokerIds(double value) { m_deletedBrokerIdsHasBeenSet = true; m_deletedBrokerIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_createdBrokerIds;
    bool m_createdBrokerIdsHasBeenSet = false;

    Aws::Vector<double> m_deletedBrokerIds;
    bool m_deletedBrokerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
