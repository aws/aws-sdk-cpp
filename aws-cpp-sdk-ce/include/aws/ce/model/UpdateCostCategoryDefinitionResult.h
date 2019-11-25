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
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{
  class AWS_COSTEXPLORER_API UpdateCostCategoryDefinitionResult
  {
  public:
    UpdateCostCategoryDefinitionResult();
    UpdateCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArn = value; }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArn = std::move(value); }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArn.assign(value); }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStart = value; }

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStart = std::move(value); }

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline void SetEffectiveStart(const char* value) { m_effectiveStart.assign(value); }

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}

    /**
     * <p> The Cost Category's effective start date. </p>
     */
    inline UpdateCostCategoryDefinitionResult& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}

  private:

    Aws::String m_costCategoryArn;

    Aws::String m_effectiveStart;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
