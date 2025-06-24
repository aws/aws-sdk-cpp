/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AddressComponentMatchScores.h>
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
   * <p>Indicates how well the returned title and address components matches the
   * input TextQuery. For each component a score is provied with 1 indicating all
   * tokens were matched and 0 indicating no tokens were matched.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ComponentMatchScores">AWS
   * API Reference</a></p>
   */
  class ComponentMatchScores
  {
  public:
    AWS_GEOPLACES_API ComponentMatchScores() = default;
    AWS_GEOPLACES_API ComponentMatchScores(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API ComponentMatchScores& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the match score of the title in the text query that match the found
     * title. </p>
     */
    inline double GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(double value) { m_titleHasBeenSet = true; m_title = value; }
    inline ComponentMatchScores& WithTitle(double value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const AddressComponentMatchScores& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = AddressComponentMatchScores>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = AddressComponentMatchScores>
    ComponentMatchScores& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    double m_title{0.0};
    bool m_titleHasBeenSet = false;

    AddressComponentMatchScores m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
