/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/OverallTestResultItem.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Information about the overall test results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/OverallTestResults">AWS
   * API Reference</a></p>
   */
  class OverallTestResults
  {
  public:
    AWS_LEXMODELSV2_API OverallTestResults();
    AWS_LEXMODELSV2_API OverallTestResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API OverallTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the overall test results.</p>
     */
    inline const Aws::Vector<OverallTestResultItem>& GetItems() const{ return m_items; }

    /**
     * <p>A list of the overall test results.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list of the overall test results.</p>
     */
    inline void SetItems(const Aws::Vector<OverallTestResultItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list of the overall test results.</p>
     */
    inline void SetItems(Aws::Vector<OverallTestResultItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list of the overall test results.</p>
     */
    inline OverallTestResults& WithItems(const Aws::Vector<OverallTestResultItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of the overall test results.</p>
     */
    inline OverallTestResults& WithItems(Aws::Vector<OverallTestResultItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of the overall test results.</p>
     */
    inline OverallTestResults& AddItems(const OverallTestResultItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list of the overall test results.</p>
     */
    inline OverallTestResults& AddItems(OverallTestResultItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OverallTestResultItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
