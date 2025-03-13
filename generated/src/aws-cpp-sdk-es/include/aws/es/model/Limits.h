/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/InstanceLimits.h>
#include <aws/es/model/StorageType.h>
#include <aws/es/model/AdditionalLimit.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Limits for given InstanceType and for each of it's role. <br/> Limits
   * contains following <code> <a>StorageTypes,</a> </code> <code>
   * <a>InstanceLimits</a> </code> and <code> <a>AdditionalLimits</a> </code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/Limits">AWS API
   * Reference</a></p>
   */
  class Limits
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API Limits() = default;
    AWS_ELASTICSEARCHSERVICE_API Limits(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Limits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline const Aws::Vector<StorageType>& GetStorageTypes() const { return m_storageTypes; }
    inline bool StorageTypesHasBeenSet() const { return m_storageTypesHasBeenSet; }
    template<typename StorageTypesT = Aws::Vector<StorageType>>
    void SetStorageTypes(StorageTypesT&& value) { m_storageTypesHasBeenSet = true; m_storageTypes = std::forward<StorageTypesT>(value); }
    template<typename StorageTypesT = Aws::Vector<StorageType>>
    Limits& WithStorageTypes(StorageTypesT&& value) { SetStorageTypes(std::forward<StorageTypesT>(value)); return *this;}
    template<typename StorageTypesT = StorageType>
    Limits& AddStorageTypes(StorageTypesT&& value) { m_storageTypesHasBeenSet = true; m_storageTypes.emplace_back(std::forward<StorageTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const InstanceLimits& GetInstanceLimits() const { return m_instanceLimits; }
    inline bool InstanceLimitsHasBeenSet() const { return m_instanceLimitsHasBeenSet; }
    template<typename InstanceLimitsT = InstanceLimits>
    void SetInstanceLimits(InstanceLimitsT&& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = std::forward<InstanceLimitsT>(value); }
    template<typename InstanceLimitsT = InstanceLimits>
    Limits& WithInstanceLimits(InstanceLimitsT&& value) { SetInstanceLimits(std::forward<InstanceLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline const Aws::Vector<AdditionalLimit>& GetAdditionalLimits() const { return m_additionalLimits; }
    inline bool AdditionalLimitsHasBeenSet() const { return m_additionalLimitsHasBeenSet; }
    template<typename AdditionalLimitsT = Aws::Vector<AdditionalLimit>>
    void SetAdditionalLimits(AdditionalLimitsT&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = std::forward<AdditionalLimitsT>(value); }
    template<typename AdditionalLimitsT = Aws::Vector<AdditionalLimit>>
    Limits& WithAdditionalLimits(AdditionalLimitsT&& value) { SetAdditionalLimits(std::forward<AdditionalLimitsT>(value)); return *this;}
    template<typename AdditionalLimitsT = AdditionalLimit>
    Limits& AddAdditionalLimits(AdditionalLimitsT&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.emplace_back(std::forward<AdditionalLimitsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StorageType> m_storageTypes;
    bool m_storageTypesHasBeenSet = false;

    InstanceLimits m_instanceLimits;
    bool m_instanceLimitsHasBeenSet = false;

    Aws::Vector<AdditionalLimit> m_additionalLimits;
    bool m_additionalLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
