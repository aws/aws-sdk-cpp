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
   * <p>The alpha-2 or alpha-3 character code for the country that the results will
   * be present in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_GEOPLACES_API Country() = default;
    AWS_GEOPLACES_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Country, represented by its alpha 2-character code. </p>
     */
    inline const Aws::String& GetCode2() const { return m_code2; }
    inline bool Code2HasBeenSet() const { return m_code2HasBeenSet; }
    template<typename Code2T = Aws::String>
    void SetCode2(Code2T&& value) { m_code2HasBeenSet = true; m_code2 = std::forward<Code2T>(value); }
    template<typename Code2T = Aws::String>
    Country& WithCode2(Code2T&& value) { SetCode2(std::forward<Code2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country, represented by its alpha t-character code. </p>
     */
    inline const Aws::String& GetCode3() const { return m_code3; }
    inline bool Code3HasBeenSet() const { return m_code3HasBeenSet; }
    template<typename Code3T = Aws::String>
    void SetCode3(Code3T&& value) { m_code3HasBeenSet = true; m_code3 = std::forward<Code3T>(value); }
    template<typename Code3T = Aws::String>
    Country& WithCode3(Code3T&& value) { SetCode3(std::forward<Code3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the country.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Country& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code2;
    bool m_code2HasBeenSet = false;

    Aws::String m_code3;
    bool m_code3HasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
