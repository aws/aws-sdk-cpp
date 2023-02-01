/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteCostCategoryDefinitionResult
  {
  public:
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult();
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArn = value; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArn = std::move(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArn.assign(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline const Aws::String& GetEffectiveEnd() const{ return m_effectiveEnd; }

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline void SetEffectiveEnd(const Aws::String& value) { m_effectiveEnd = value; }

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline void SetEffectiveEnd(Aws::String&& value) { m_effectiveEnd = std::move(value); }

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline void SetEffectiveEnd(const char* value) { m_effectiveEnd.assign(value); }

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(const Aws::String& value) { SetEffectiveEnd(value); return *this;}

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(Aws::String&& value) { SetEffectiveEnd(std::move(value)); return *this;}

    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(const char* value) { SetEffectiveEnd(value); return *this;}

  private:

    Aws::String m_costCategoryArn;

    Aws::String m_effectiveEnd;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
