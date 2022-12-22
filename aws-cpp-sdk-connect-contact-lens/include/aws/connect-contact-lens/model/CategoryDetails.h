/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect-contact-lens/model/PointOfInterest.h>
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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>Provides information about the category rule that was matched.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/CategoryDetails">AWS
   * API Reference</a></p>
   */
  class CategoryDetails
  {
  public:
    AWS_CONNECTCONTACTLENS_API CategoryDetails();
    AWS_CONNECTCONTACTLENS_API CategoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API CategoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline const Aws::Vector<PointOfInterest>& GetPointsOfInterest() const{ return m_pointsOfInterest; }

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline void SetPointsOfInterest(const Aws::Vector<PointOfInterest>& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest = value; }

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline void SetPointsOfInterest(Aws::Vector<PointOfInterest>&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest = std::move(value); }

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline CategoryDetails& WithPointsOfInterest(const Aws::Vector<PointOfInterest>& value) { SetPointsOfInterest(value); return *this;}

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline CategoryDetails& WithPointsOfInterest(Aws::Vector<PointOfInterest>&& value) { SetPointsOfInterest(std::move(value)); return *this;}

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline CategoryDetails& AddPointsOfInterest(const PointOfInterest& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest.push_back(value); return *this; }

    /**
     * <p>The section of audio where the category rule was detected.</p>
     */
    inline CategoryDetails& AddPointsOfInterest(PointOfInterest&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PointOfInterest> m_pointsOfInterest;
    bool m_pointsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
