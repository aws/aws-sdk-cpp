/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/PointsOfInterest.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Provides information on any <code>TranscriptFilterType</code> categories that
   * matched your transcription output. Matches are identified for each segment upon
   * completion of that segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CategoryEvent">AWS
   * API Reference</a></p>
   */
  class CategoryEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent();
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedCategories() const{ return m_matchedCategories; }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline bool MatchedCategoriesHasBeenSet() const { return m_matchedCategoriesHasBeenSet; }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline void SetMatchedCategories(const Aws::Vector<Aws::String>& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = value; }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline void SetMatchedCategories(Aws::Vector<Aws::String>&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = std::move(value); }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline CategoryEvent& WithMatchedCategories(const Aws::Vector<Aws::String>& value) { SetMatchedCategories(value); return *this;}

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline CategoryEvent& WithMatchedCategories(Aws::Vector<Aws::String>&& value) { SetMatchedCategories(std::move(value)); return *this;}

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline CategoryEvent& AddMatchedCategories(const Aws::String& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(value); return *this; }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline CategoryEvent& AddMatchedCategories(Aws::String&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline CategoryEvent& AddMatchedCategories(const char* value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.push_back(value); return *this; }


    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline const Aws::Map<Aws::String, PointsOfInterest>& GetMatchedDetails() const{ return m_matchedDetails; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline void SetMatchedDetails(const Aws::Map<Aws::String, PointsOfInterest>& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = value; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline void SetMatchedDetails(Aws::Map<Aws::String, PointsOfInterest>&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::move(value); }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& WithMatchedDetails(const Aws::Map<Aws::String, PointsOfInterest>& value) { SetMatchedDetails(value); return *this;}

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& WithMatchedDetails(Aws::Map<Aws::String, PointsOfInterest>&& value) { SetMatchedDetails(std::move(value)); return *this;}

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(const Aws::String& key, const PointsOfInterest& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(Aws::String&& key, const PointsOfInterest& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(const Aws::String& key, PointsOfInterest&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(Aws::String&& key, PointsOfInterest&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(const char* key, PointsOfInterest&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline CategoryEvent& AddMatchedDetails(const char* key, const PointsOfInterest& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_matchedCategories;
    bool m_matchedCategoriesHasBeenSet = false;

    Aws::Map<Aws::String, PointsOfInterest> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
