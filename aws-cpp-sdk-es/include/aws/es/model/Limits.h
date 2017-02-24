/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/InstanceLimits.h>
#include <aws/es/model/StorageType.h>
#include <aws/es/model/AdditionalLimit.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_ELASTICSEARCHSERVICE_API Limits
  {
  public:
    Limits();
    Limits(const Aws::Utils::Json::JsonValue& jsonValue);
    Limits& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline const Aws::Vector<StorageType>& GetStorageTypes() const{ return m_storageTypes; }

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline void SetStorageTypes(const Aws::Vector<StorageType>& value) { m_storageTypesHasBeenSet = true; m_storageTypes = value; }

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline void SetStorageTypes(Aws::Vector<StorageType>&& value) { m_storageTypesHasBeenSet = true; m_storageTypes = value; }

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline Limits& WithStorageTypes(const Aws::Vector<StorageType>& value) { SetStorageTypes(value); return *this;}

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline Limits& WithStorageTypes(Aws::Vector<StorageType>&& value) { SetStorageTypes(value); return *this;}

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline Limits& AddStorageTypes(const StorageType& value) { m_storageTypesHasBeenSet = true; m_storageTypes.push_back(value); return *this; }

    /**
     * <p>StorageType represents the list of storage related types and attributes that
     * are available for given InstanceType. </p>
     */
    inline Limits& AddStorageTypes(StorageType&& value) { m_storageTypesHasBeenSet = true; m_storageTypes.push_back(value); return *this; }

    
    inline const InstanceLimits& GetInstanceLimits() const{ return m_instanceLimits; }

    
    inline void SetInstanceLimits(const InstanceLimits& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = value; }

    
    inline void SetInstanceLimits(InstanceLimits&& value) { m_instanceLimitsHasBeenSet = true; m_instanceLimits = value; }

    
    inline Limits& WithInstanceLimits(const InstanceLimits& value) { SetInstanceLimits(value); return *this;}

    
    inline Limits& WithInstanceLimits(InstanceLimits&& value) { SetInstanceLimits(value); return *this;}

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline const Aws::Vector<AdditionalLimit>& GetAdditionalLimits() const{ return m_additionalLimits; }

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline void SetAdditionalLimits(const Aws::Vector<AdditionalLimit>& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = value; }

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline void SetAdditionalLimits(Aws::Vector<AdditionalLimit>&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits = value; }

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline Limits& WithAdditionalLimits(const Aws::Vector<AdditionalLimit>& value) { SetAdditionalLimits(value); return *this;}

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline Limits& WithAdditionalLimits(Aws::Vector<AdditionalLimit>&& value) { SetAdditionalLimits(value); return *this;}

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline Limits& AddAdditionalLimits(const AdditionalLimit& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.push_back(value); return *this; }

    /**
     * <p> List of additional limits that are specific to a given InstanceType and for
     * each of it's <code> <a>InstanceRole</a> </code> . </p>
     */
    inline Limits& AddAdditionalLimits(AdditionalLimit&& value) { m_additionalLimitsHasBeenSet = true; m_additionalLimits.push_back(value); return *this; }

  private:
    Aws::Vector<StorageType> m_storageTypes;
    bool m_storageTypesHasBeenSet;
    InstanceLimits m_instanceLimits;
    bool m_instanceLimitsHasBeenSet;
    Aws::Vector<AdditionalLimit> m_additionalLimits;
    bool m_additionalLimitsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
