/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsBinByName.h>
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
   * <p>An object containing the criterion by which to bin the results and the value
   * that defines that bin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsBinKey">AWS
   * API Reference</a></p>
   */
  class AnalyticsBinKey
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsBinKey();
    AWS_LEXMODELSV2_API AnalyticsBinKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsBinKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline const AnalyticsBinByName& GetName() const{ return m_name; }

    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline void SetName(const AnalyticsBinByName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline void SetName(AnalyticsBinByName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline AnalyticsBinKey& WithName(const AnalyticsBinByName& value) { SetName(value); return *this;}

    /**
     * <p>The criterion by which to bin the results.</p>
     */
    inline AnalyticsBinKey& WithName(AnalyticsBinByName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the criterion that defines the bin.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The value of the criterion that defines the bin.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the criterion that defines the bin.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the criterion that defines the bin.</p>
     */
    inline AnalyticsBinKey& WithValue(long long value) { SetValue(value); return *this;}

  private:

    AnalyticsBinByName m_name;
    bool m_nameHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
