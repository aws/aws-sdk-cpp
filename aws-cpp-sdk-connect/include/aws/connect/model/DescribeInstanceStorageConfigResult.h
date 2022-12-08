/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/InstanceStorageConfig.h>
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
namespace Connect
{
namespace Model
{
  class DescribeInstanceStorageConfigResult
  {
  public:
    AWS_CONNECT_API DescribeInstanceStorageConfigResult();
    AWS_CONNECT_API DescribeInstanceStorageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeInstanceStorageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A valid storage type.</p>
     */
    inline const InstanceStorageConfig& GetStorageConfig() const{ return m_storageConfig; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageConfig(const InstanceStorageConfig& value) { m_storageConfig = value; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageConfig(InstanceStorageConfig&& value) { m_storageConfig = std::move(value); }

    /**
     * <p>A valid storage type.</p>
     */
    inline DescribeInstanceStorageConfigResult& WithStorageConfig(const InstanceStorageConfig& value) { SetStorageConfig(value); return *this;}

    /**
     * <p>A valid storage type.</p>
     */
    inline DescribeInstanceStorageConfigResult& WithStorageConfig(InstanceStorageConfig&& value) { SetStorageConfig(std::move(value)); return *this;}

  private:

    InstanceStorageConfig m_storageConfig;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
