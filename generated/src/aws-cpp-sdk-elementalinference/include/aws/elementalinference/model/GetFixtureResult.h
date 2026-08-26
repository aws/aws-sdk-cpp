/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/Competitor.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class GetFixtureResult {
 public:
  AWS_ELEMENTALINFERENCE_API GetFixtureResult() = default;
  AWS_ELEMENTALINFERENCE_API GetFixtureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API GetFixtureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID that you specified in the request.</p>
   */
  inline const Aws::String& GetFixtureId() const { return m_fixtureId; }
  template <typename FixtureIdT = Aws::String>
  void SetFixtureId(FixtureIdT&& value) {
    m_fixtureIdHasBeenSet = true;
    m_fixtureId = std::forward<FixtureIdT>(value);
  }
  template <typename FixtureIdT = Aws::String>
  GetFixtureResult& WithFixtureId(FixtureIdT&& value) {
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
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetFixtureResult& WithName(NameT&& value) {
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
  template <typename FixtureGroupT = Aws::String>
  void SetFixtureGroup(FixtureGroupT&& value) {
    m_fixtureGroupHasBeenSet = true;
    m_fixtureGroup = std::forward<FixtureGroupT>(value);
  }
  template <typename FixtureGroupT = Aws::String>
  GetFixtureResult& WithFixtureGroup(FixtureGroupT&& value) {
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
  template <typename ScheduledStartT = Aws::Utils::DateTime>
  void SetScheduledStart(ScheduledStartT&& value) {
    m_scheduledStartHasBeenSet = true;
    m_scheduledStart = std::forward<ScheduledStartT>(value);
  }
  template <typename ScheduledStartT = Aws::Utils::DateTime>
  GetFixtureResult& WithScheduledStart(ScheduledStartT&& value) {
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
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  GetFixtureResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of the competitors (the teams or individuals) in the fixture.</p>
   */
  inline const Aws::Vector<Competitor>& GetCompetitors() const { return m_competitors; }
  template <typename CompetitorsT = Aws::Vector<Competitor>>
  void SetCompetitors(CompetitorsT&& value) {
    m_competitorsHasBeenSet = true;
    m_competitors = std::forward<CompetitorsT>(value);
  }
  template <typename CompetitorsT = Aws::Vector<Competitor>>
  GetFixtureResult& WithCompetitors(CompetitorsT&& value) {
    SetCompetitors(std::forward<CompetitorsT>(value));
    return *this;
  }
  template <typename CompetitorsT = Competitor>
  GetFixtureResult& AddCompetitors(CompetitorsT&& value) {
    m_competitorsHasBeenSet = true;
    m_competitors.emplace_back(std::forward<CompetitorsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetFixtureResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fixtureId;

  Aws::String m_name;

  Aws::String m_fixtureGroup;

  Aws::Utils::DateTime m_scheduledStart{};

  Aws::String m_status;

  Aws::Vector<Competitor> m_competitors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fixtureIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_fixtureGroupHasBeenSet = false;
  bool m_scheduledStartHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_competitorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
