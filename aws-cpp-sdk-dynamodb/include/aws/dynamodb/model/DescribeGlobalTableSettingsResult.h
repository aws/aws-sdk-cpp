/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaSettingsDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API DescribeGlobalTableSettingsResult
  {
  public:
    DescribeGlobalTableSettingsResult();
    DescribeGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGlobalTableSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the global table.</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }

    /**
     * <p>The name of the global table.</p>
     */
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableName = value; }

    /**
     * <p>The name of the global table.</p>
     */
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableName = std::move(value); }

    /**
     * <p>The name of the global table.</p>
     */
    inline void SetGlobalTableName(const char* value) { m_globalTableName.assign(value); }

    /**
     * <p>The name of the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The name of the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}


    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline const Aws::Vector<ReplicaSettingsDescription>& GetReplicaSettings() const{ return m_replicaSettings; }

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline void SetReplicaSettings(const Aws::Vector<ReplicaSettingsDescription>& value) { m_replicaSettings = value; }

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline void SetReplicaSettings(Aws::Vector<ReplicaSettingsDescription>&& value) { m_replicaSettings = std::move(value); }

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& WithReplicaSettings(const Aws::Vector<ReplicaSettingsDescription>& value) { SetReplicaSettings(value); return *this;}

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& WithReplicaSettings(Aws::Vector<ReplicaSettingsDescription>&& value) { SetReplicaSettings(std::move(value)); return *this;}

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& AddReplicaSettings(const ReplicaSettingsDescription& value) { m_replicaSettings.push_back(value); return *this; }

    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline DescribeGlobalTableSettingsResult& AddReplicaSettings(ReplicaSettingsDescription&& value) { m_replicaSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalTableName;

    Aws::Vector<ReplicaSettingsDescription> m_replicaSettings;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
