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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a budget.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BudgetDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API BudgetDetail
  {
  public:
    BudgetDetail();
    BudgetDetail(Aws::Utils::Json::JsonView jsonValue);
    BudgetDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the associated budget.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
