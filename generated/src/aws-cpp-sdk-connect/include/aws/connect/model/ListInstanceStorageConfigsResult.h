/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListInstanceStorageConfigsResult
  {
  public:
    AWS_CONNECT_API ListInstanceStorageConfigsResult();
    AWS_CONNECT_API ListInstanceStorageConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstanceStorageConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A valid storage type.</p>
     */
    inline const Aws::Vector<InstanceStorageConfig>& GetStorageConfigs() const{ return m_storageConfigs; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageConfigs(const Aws::Vector<InstanceStorageConfig>& value) { m_storageConfigs = value; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageConfigs(Aws::Vector<InstanceStorageConfig>&& value) { m_storageConfigs = std::move(value); }

    /**
     * <p>A valid storage type.</p>
     */
    inline ListInstanceStorageConfigsResult& WithStorageConfigs(const Aws::Vector<InstanceStorageConfig>& value) { SetStorageConfigs(value); return *this;}

    /**
     * <p>A valid storage type.</p>
     */
    inline ListInstanceStorageConfigsResult& WithStorageConfigs(Aws::Vector<InstanceStorageConfig>&& value) { SetStorageConfigs(std::move(value)); return *this;}

    /**
     * <p>A valid storage type.</p>
     */
    inline ListInstanceStorageConfigsResult& AddStorageConfigs(const InstanceStorageConfig& value) { m_storageConfigs.push_back(value); return *this; }

    /**
     * <p>A valid storage type.</p>
     */
    inline ListInstanceStorageConfigsResult& AddStorageConfigs(InstanceStorageConfig&& value) { m_storageConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceStorageConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceStorageConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceStorageConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceStorageConfig> m_storageConfigs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
