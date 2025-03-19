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
    AWS_COSTEXPLORER_API TagValues() = default;
    AWS_COSTEXPLORER_API TagValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TagValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the tag.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    TagValues& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific value of the tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    TagValues& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    TagValues& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match options that you can use to filter your results.
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category. The default values for <code>MatchOptions</code> are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const { return m_matchOptions; }
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    void SetMatchOptions(MatchOptionsT&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::forward<MatchOptionsT>(value); }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    TagValues& WithMatchOptions(MatchOptionsT&& value) { SetMatchOptions(std::forward<MatchOptionsT>(value)); return *this;}
    inline TagValues& AddMatchOptions(MatchOption value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }
    ///@}
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
