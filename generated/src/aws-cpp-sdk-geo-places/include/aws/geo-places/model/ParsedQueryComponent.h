/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Parsed components in the provided QueryText.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ParsedQueryComponent">AWS
   * API Reference</a></p>
   */
  class ParsedQueryComponent
  {
  public:
    AWS_GEOPLACES_API ParsedQueryComponent() = default;
    AWS_GEOPLACES_API ParsedQueryComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API ParsedQueryComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start index of the parsed query component.</p>
     */
    inline int GetStartIndex() const { return m_startIndex; }
    inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
    inline void SetStartIndex(int value) { m_startIndexHasBeenSet = true; m_startIndex = value; }
    inline ParsedQueryComponent& WithStartIndex(int value) { SetStartIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End index of the parsed query component.</p>
     */
    inline int GetEndIndex() const { return m_endIndex; }
    inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
    inline void SetEndIndex(int value) { m_endIndexHasBeenSet = true; m_endIndex = value; }
    inline ParsedQueryComponent& WithEndIndex(int value) { SetEndIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value of the parsed query component.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ParsedQueryComponent& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address component that the parsed query component corresponds to.</p>
     */
    inline const Aws::String& GetQueryComponent() const { return m_queryComponent; }
    inline bool QueryComponentHasBeenSet() const { return m_queryComponentHasBeenSet; }
    template<typename QueryComponentT = Aws::String>
    void SetQueryComponent(QueryComponentT&& value) { m_queryComponentHasBeenSet = true; m_queryComponent = std::forward<QueryComponentT>(value); }
    template<typename QueryComponentT = Aws::String>
    ParsedQueryComponent& WithQueryComponent(QueryComponentT&& value) { SetQueryComponent(std::forward<QueryComponentT>(value)); return *this;}
    ///@}
  private:

    int m_startIndex{0};
    bool m_startIndexHasBeenSet = false;

    int m_endIndex{0};
    bool m_endIndexHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_queryComponent;
    bool m_queryComponentHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
