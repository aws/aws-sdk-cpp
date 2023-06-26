﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class CreateDataQualityRulesetResult
  {
  public:
    AWS_GLUE_API CreateDataQualityRulesetResult();
    AWS_GLUE_API CreateDataQualityRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateDataQualityRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDataQualityRulesetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDataQualityRulesetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDataQualityRulesetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
