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
  class AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult
  {
  public:
    UpdateRecoveryGroupResult();
    UpdateRecoveryGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRecoveryGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of Cell arns
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * A list of Cell arns
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cells = value; }

    /**
     * A list of Cell arns
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cells = std::move(value); }

    /**
     * A list of Cell arns
     */
    inline UpdateRecoveryGroupResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * A list of Cell arns
     */
    inline UpdateRecoveryGroupResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * A list of Cell arns
     */
    inline UpdateRecoveryGroupResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }

    /**
     * A list of Cell arns
     */
    inline UpdateRecoveryGroupResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell arns
     */
    inline UpdateRecoveryGroupResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }


    /**
     * The arn for the RecoveryGroup
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArn = value; }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArn = std::move(value); }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArn.assign(value); }

    /**
     * The arn for the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}

    /**
     * The arn for the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}

    /**
     * The arn for the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}


    /**
     * The name of the RecoveryGroup
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupName = value; }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupName = std::move(value); }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupName.assign(value); }

    /**
     * The name of the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}

    /**
     * The name of the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}

    /**
     * The name of the RecoveryGroup
     */
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline UpdateRecoveryGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline UpdateRecoveryGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline UpdateRecoveryGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateRecoveryGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cells;

    Aws::String m_recoveryGroupArn;

    Aws::String m_recoveryGroupName;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
