/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/Dimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/freetier/model/MatchOption.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p>Contains the specifications for the filters to use for your
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/DimensionValues">AWS
   * API Reference</a></p>
   */
  class DimensionValues
  {
  public:
    AWS_FREETIER_API DimensionValues();
    AWS_FREETIER_API DimensionValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API DimensionValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline const Dimension& GetKey() const{ return m_key; }

    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline void SetKey(const Dimension& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline void SetKey(Dimension&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline DimensionValues& WithKey(const Dimension& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline DimensionValues& WithKey(Dimension&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const{ return m_matchOptions; }

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline void SetMatchOptions(const Aws::Vector<MatchOption>& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = value; }

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline void SetMatchOptions(Aws::Vector<MatchOption>&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::move(value); }

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline DimensionValues& WithMatchOptions(const Aws::Vector<MatchOption>& value) { SetMatchOptions(value); return *this;}

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline DimensionValues& WithMatchOptions(Aws::Vector<MatchOption>&& value) { SetMatchOptions(std::move(value)); return *this;}

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline DimensionValues& AddMatchOptions(const MatchOption& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }

    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline DimensionValues& AddMatchOptions(MatchOption&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline DimensionValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline DimensionValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline DimensionValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline DimensionValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline DimensionValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Dimension m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
