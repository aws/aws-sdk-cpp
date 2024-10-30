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
   * <p>Describes how parts of the result response match the input
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Highlight">AWS
   * API Reference</a></p>
   */
  class Highlight
  {
  public:
    AWS_GEOPLACES_API Highlight();
    AWS_GEOPLACES_API Highlight(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Highlight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start index of the highlight.</p>
     */
    inline int GetStartIndex() const{ return m_startIndex; }
    inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
    inline void SetStartIndex(int value) { m_startIndexHasBeenSet = true; m_startIndex = value; }
    inline Highlight& WithStartIndex(int value) { SetStartIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End index of the highlight.</p>
     */
    inline int GetEndIndex() const{ return m_endIndex; }
    inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
    inline void SetEndIndex(int value) { m_endIndexHasBeenSet = true; m_endIndex = value; }
    inline Highlight& WithEndIndex(int value) { SetEndIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highlight's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Highlight& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Highlight& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Highlight& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    int m_startIndex;
    bool m_startIndexHasBeenSet = false;

    int m_endIndex;
    bool m_endIndexHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
