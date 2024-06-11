/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentField.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains the category by which the intent analytics were grouped and a member
   * of that category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentGroupByKey">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentGroupByKey
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentGroupByKey();
    AWS_LEXMODELSV2_API AnalyticsIntentGroupByKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentGroupByKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A category by which the intent analytics were grouped.</p>
     */
    inline const AnalyticsIntentField& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const AnalyticsIntentField& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(AnalyticsIntentField&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline AnalyticsIntentGroupByKey& WithName(const AnalyticsIntentField& value) { SetName(value); return *this;}
    inline AnalyticsIntentGroupByKey& WithName(AnalyticsIntentField&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A member of the category by which the intent analytics were grouped.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AnalyticsIntentGroupByKey& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AnalyticsIntentGroupByKey& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AnalyticsIntentGroupByKey& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    AnalyticsIntentField m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
