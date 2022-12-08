/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class CreateRecoveryGroupResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateRecoveryGroupResult();
    AWS_ROUTE53RECOVERYREADINESS_API CreateRecoveryGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API CreateRecoveryGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cells = value; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cells = std::move(value); }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline CreateRecoveryGroupResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline CreateRecoveryGroupResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline CreateRecoveryGroupResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline CreateRecoveryGroupResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline CreateRecoveryGroupResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}


    /**
     * <p>The name of the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupName = value; }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupName = std::move(value); }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupName.assign(value); }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}

    /**
     * <p>The name of the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}


    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline CreateRecoveryGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cells;

    Aws::String m_recoveryGroupArn;

    Aws::String m_recoveryGroupName;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
