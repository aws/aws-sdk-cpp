/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/InstanceLimits.h>
#include <aws/opensearch/model/StorageType.h>
#include <aws/opensearch/model/AdditionalLimit.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Limits for a given instance type and for each of its roles.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/Limits">AWS
   * API Reference</a></p>
   */
  class Limits
  {
  public:
    AWS_OPENSEARCHSERVICE_API Limits();
    AWS_OPENSEARCHSERVICE_API Limits(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Limits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline const Aws::Vector<StorageType>& GetStorageTypes() const{ return m_storageTypes; }

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline bool StorageTypesHasBeenSet() const { return m_storageTypesHasBeenSet; }

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline void SetStorageTypes(const Aws::Vector<StorageType>& value) { m_storageTypesHasBeenSet = true; m_storageTypes = value; }

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline void SetStorageTypes(Aws::Vector<StorageType>&& value) { m_storageTypesHasBeenSet = true; m_storageTypes = std::move(value); }

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline Limits& WithStorageTypes(const Aws::Vector<StorageType>& value) { SetStorageTypes(value); return *this;}

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline Limits& WithStorageTypes(Aws::Vector<StorageType>&& value) { SetStorageTypes(std::move(value)); return *this;}

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline Limits& AddStorageTypes(const StorageType& value) { m_storageTypesHasBeenSet = true; m_storageTypes.push_back(value); return *this; }

    /**
     * <p>Storage-related attributes that are available for a given instance type.</p>
     */
    inline Limits& AddStorageTypes(StorageType&& value) { m_storageTypesHasBeenSet = true; m_storageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The limits for a given instance type.</p>
     */
    inline const InstanceLimits& GetInstanceLimits() const{ return m_instanceLimits; }

    /**
     * <p>The limits for a given instance type.</p>
     */
    inline bool InstanceLimitsHasBeenSet() const { return m_instanceLimitsHasBeenSet; }

    /**
     * <p>The limits for a given instance type.</p>
     */
    inline void SetInstanceLimits(const InstanceLimits& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = value; }

    /**
     * <p>The limits for a given instance type.</p>
     */
    inline void SetInstanceLimits(InstanceLimits&& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = std::move(value); }

    /**
     * <p>The limits for a given instance type.</p>
     */
    inline Limits& WithInstanceLimits(const InstanceLimits& value) { SetInstanceLimits(value); return *this;}

    /**
     * <p>The limits for a given instance type.</p>
     */
    inline Limits& WithInstanceLimits(InstanceLimits&& value) { SetInstanceLimits(std::move(value)); return *this;}


    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline const Aws::Vector<AdditionalLimit>& GetAdditionalLimits() const{ return m_additionalLimits; }

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline bool AdditionalLimitsHasBeenSet() const { return m_additionalLimitsHasBeenSet; }

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline void SetAdditionalLimits(const Aws::Vector<AdditionalLimit>& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = value; }

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline void SetAdditionalLimits(Aws::Vector<AdditionalLimit>&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = std::move(value); }

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline Limits& WithAdditionalLimits(const Aws::Vector<AdditionalLimit>& value) { SetAdditionalLimits(value); return *this;}

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline Limits& WithAdditionalLimits(Aws::Vector<AdditionalLimit>&& value) { SetAdditionalLimits(std::move(value)); return *this;}

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline Limits& AddAdditionalLimits(const AdditionalLimit& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.push_back(value); return *this; }

    /**
     * <p>List of additional limits that are specific to a given instance type for each
     * of its instance roles.</p>
     */
    inline Limits& AddAdditionalLimits(AdditionalLimit&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StorageType> m_storageTypes;
    bool m_storageTypesHasBeenSet = false;

    InstanceLimits m_instanceLimits;
    bool m_instanceLimitsHasBeenSet = false;

    Aws::Vector<AdditionalLimit> m_additionalLimits;
    bool m_additionalLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
