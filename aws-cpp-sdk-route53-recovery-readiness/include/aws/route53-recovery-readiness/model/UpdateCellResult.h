﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ROUTE53RECOVERYREADINESS_API UpdateCellResult
  {
  public:
    UpdateCellResult();
    UpdateCellResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateCellResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The arn for the Cell
     */
    inline const Aws::String& GetCellArn() const{ return m_cellArn; }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(const Aws::String& value) { m_cellArn = value; }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(Aws::String&& value) { m_cellArn = std::move(value); }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(const char* value) { m_cellArn.assign(value); }

    /**
     * The arn for the Cell
     */
    inline UpdateCellResult& WithCellArn(const Aws::String& value) { SetCellArn(value); return *this;}

    /**
     * The arn for the Cell
     */
    inline UpdateCellResult& WithCellArn(Aws::String&& value) { SetCellArn(std::move(value)); return *this;}

    /**
     * The arn for the Cell
     */
    inline UpdateCellResult& WithCellArn(const char* value) { SetCellArn(value); return *this;}


    /**
     * The name of the Cell
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * The name of the Cell
     */
    inline void SetCellName(const Aws::String& value) { m_cellName = value; }

    /**
     * The name of the Cell
     */
    inline void SetCellName(Aws::String&& value) { m_cellName = std::move(value); }

    /**
     * The name of the Cell
     */
    inline void SetCellName(const char* value) { m_cellName.assign(value); }

    /**
     * The name of the Cell
     */
    inline UpdateCellResult& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * The name of the Cell
     */
    inline UpdateCellResult& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * The name of the Cell
     */
    inline UpdateCellResult& WithCellName(const char* value) { SetCellName(value); return *this;}


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
    inline UpdateCellResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * A list of Cell arns
     */
    inline UpdateCellResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * A list of Cell arns
     */
    inline UpdateCellResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }

    /**
     * A list of Cell arns
     */
    inline UpdateCellResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell arns
     */
    inline UpdateCellResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }


    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const{ return m_parentReadinessScopes; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline void SetParentReadinessScopes(const Aws::Vector<Aws::String>& value) { m_parentReadinessScopes = value; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline void SetParentReadinessScopes(Aws::Vector<Aws::String>&& value) { m_parentReadinessScopes = std::move(value); }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline UpdateCellResult& WithParentReadinessScopes(const Aws::Vector<Aws::String>& value) { SetParentReadinessScopes(value); return *this;}

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline UpdateCellResult& WithParentReadinessScopes(Aws::Vector<Aws::String>&& value) { SetParentReadinessScopes(std::move(value)); return *this;}

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline UpdateCellResult& AddParentReadinessScopes(const Aws::String& value) { m_parentReadinessScopes.push_back(value); return *this; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline UpdateCellResult& AddParentReadinessScopes(Aws::String&& value) { m_parentReadinessScopes.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline UpdateCellResult& AddParentReadinessScopes(const char* value) { m_parentReadinessScopes.push_back(value); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline UpdateCellResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline UpdateCellResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline UpdateCellResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline UpdateCellResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateCellResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateCellResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateCellResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateCellResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateCellResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_cellArn;

    Aws::String m_cellName;

    Aws::Vector<Aws::String> m_cells;

    Aws::Vector<Aws::String> m_parentReadinessScopes;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
