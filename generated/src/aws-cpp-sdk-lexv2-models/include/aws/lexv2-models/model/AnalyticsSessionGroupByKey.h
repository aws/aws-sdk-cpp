/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsSessionField.h>
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
   * <p>Contains the category by which the session analytics were grouped and a
   * member of that category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsSessionGroupByKey">AWS
   * API Reference</a></p>
   */
  class AnalyticsSessionGroupByKey
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsSessionGroupByKey();
    AWS_LEXMODELSV2_API AnalyticsSessionGroupByKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsSessionGroupByKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline const AnalyticsSessionField& GetName() const{ return m_name; }

    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline void SetName(const AnalyticsSessionField& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline void SetName(AnalyticsSessionField&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline AnalyticsSessionGroupByKey& WithName(const AnalyticsSessionField& value) { SetName(value); return *this;}

    /**
     * <p>The category by which the session analytics were grouped.</p>
     */
    inline AnalyticsSessionGroupByKey& WithName(AnalyticsSessionField&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline AnalyticsSessionGroupByKey& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline AnalyticsSessionGroupByKey& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A member of the category by which the session analytics were grouped.</p>
     */
    inline AnalyticsSessionGroupByKey& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AnalyticsSessionField m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
