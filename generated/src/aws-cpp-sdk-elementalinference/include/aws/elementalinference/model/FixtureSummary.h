/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/Competitor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains information about one fixture. It is used in the SearchFixtures
 * response.</p> <p>Elemental Inference relays the information in this structure
 * from the data source, so that you can identify the fixture that matches your
 * source media. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FixtureSummary">AWS
 * API Reference</a></p>
 */
class FixtureSummary {
 public:
  AWS_ELEMENTALINFERENCE_API FixtureSummary() = default;
  AWS_ELEMENTALINFERENCE_API FixtureSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FixtureSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the fixture. Specify this ID in the clipping output of a feed, to
   * identify the fixture whose event data you want Elemental Inference to map onto
   * the clipping metadata. </p>
   */
  inline const Aws::String& GetFixtureId() const { return m_fixtureId; }
  inline bool FixtureIdHasBeenSet() const { return m_fixtureIdHasBeenSet; }
  template <typename FixtureIdT = Aws::String>
  void SetFixtureId(FixtureIdT&& value) {
    m_fixtureIdHasBeenSet = true;
    m_fixtureId = std::forward<FixtureIdT>(value);
  }
  template <typename FixtureIdT = Aws::String>
  FixtureSummary& WithFixtureId(FixtureIdT&& value) {
    SetFixtureId(std::forward<FixtureIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the fixture, as provided by the data source. For example, the
   * names of the two competing teams. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FixtureSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group that the fixture belongs to, such as the competition, league, or
   * tournament. The data source doesn't provide this information for every fixture.
   * </p>
   */
  inline const Aws::String& GetFixtureGroup() const { return m_fixtureGroup; }
  inline bool FixtureGroupHasBeenSet() const { return m_fixtureGroupHasBeenSet; }
  template <typename FixtureGroupT = Aws::String>
  void SetFixtureGroup(FixtureGroupT&& value) {
    m_fixtureGroupHasBeenSet = true;
    m_fixtureGroup = std::forward<FixtureGroupT>(value);
  }
  template <typename FixtureGroupT = Aws::String>
  FixtureSummary& WithFixtureGroup(FixtureGroupT&& value) {
    SetFixtureGroup(std::forward<FixtureGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduled start time of the fixture, as provided by the data source. The
   * actual start time might differ. </p>
   */
  inline const Aws::Utils::DateTime& GetScheduledStart() const { return m_scheduledStart; }
  inline bool ScheduledStartHasBeenSet() const { return m_scheduledStartHasBeenSet; }
  template <typename ScheduledStartT = Aws::Utils::DateTime>
  void SetScheduledStart(ScheduledStartT&& value) {
    m_scheduledStartHasBeenSet = true;
    m_scheduledStart = std::forward<ScheduledStartT>(value);
  }
  template <typename ScheduledStartT = Aws::Utils::DateTime>
  FixtureSummary& WithScheduledStart(ScheduledStartT&& value) {
    SetScheduledStart(std::forward<ScheduledStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the fixture in its lifecycle, as provided by the data source.
   * For example, Scheduled or Completed. </p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  FixtureSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of the competitors (the teams or individuals) in the fixture.</p>
   */
  inline const Aws::Vector<Competitor>& GetCompetitors() const { return m_competitors; }
  inline bool CompetitorsHasBeenSet() const { return m_competitorsHasBeenSet; }
  template <typename CompetitorsT = Aws::Vector<Competitor>>
  void SetCompetitors(CompetitorsT&& value) {
    m_competitorsHasBeenSet = true;
    m_competitors = std::forward<CompetitorsT>(value);
  }
  template <typename CompetitorsT = Aws::Vector<Competitor>>
  FixtureSummary& WithCompetitors(CompetitorsT&& value) {
    SetCompetitors(std::forward<CompetitorsT>(value));
    return *this;
  }
  template <typename CompetitorsT = Competitor>
  FixtureSummary& AddCompetitors(CompetitorsT&& value) {
    m_competitorsHasBeenSet = true;
    m_competitors.emplace_back(std::forward<CompetitorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fixtureId;

  Aws::String m_name;

  Aws::String m_fixtureGroup;

  Aws::Utils::DateTime m_scheduledStart{};

  Aws::String m_status;

  Aws::Vector<Competitor> m_competitors;
  bool m_fixtureIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_fixtureGroupHasBeenSet = false;
  bool m_scheduledStartHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_competitorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
