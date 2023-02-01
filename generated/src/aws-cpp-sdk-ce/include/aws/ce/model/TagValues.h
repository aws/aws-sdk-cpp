/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/MatchOption.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The values that are available for a tag.</p> <p>If <code>Values</code> and
   * <code>Key</code> aren't specified, the <code>ABSENT</code>
   * <code>MatchOption</code> is applied to all tags. That is, it's filtered on
   * resources with no tags.</p> <p>If <code>Key</code> is provided and
   * <code>Values</code> isn't specified, the <code>ABSENT</code>
   * <code>MatchOption</code> is applied to the tag <code>Key</code> only. That is,
   * it's filtered on resources without the given tag key.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TagValues">AWS API
   * Reference</a></p>
   */
  class TagValues
  {
  public:
    AWS_COSTEXPLORER_API TagValues();
    AWS_COSTEXPLORER_API TagValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TagValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the tag.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the tag.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the tag.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the tag.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the tag.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the tag.</p>
     */
    inline TagValues& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the tag.</p>
     */
    inline TagValues& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the tag.</p>
     */
    inline TagValues& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The specific value of the tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline TagValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The specific value of the tag.</p>
     */
    inline TagValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The specific value of the tag.</p>
     */
    inline TagValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline TagValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific value of the tag.</p>
     */
    inline TagValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const{ return m_matchOptions; }

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetMatchOptions(const Aws::Vector<MatchOption>& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = value; }

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetMatchOptions(Aws::Vector<MatchOption>&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::move(value); }

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline TagValues& WithMatchOptions(const Aws::Vector<MatchOption>& value) { SetMatchOptions(value); return *this;}

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline TagValues& WithMatchOptions(Aws::Vector<MatchOption>&& value) { SetMatchOptions(std::move(value)); return *this;}

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline TagValues& AddMatchOptions(const MatchOption& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }

    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline TagValues& AddMatchOptions(MatchOption&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
