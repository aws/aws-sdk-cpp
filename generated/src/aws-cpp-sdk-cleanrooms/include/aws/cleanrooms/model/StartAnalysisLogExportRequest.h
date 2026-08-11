/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportResultConfiguration.h>
#include <aws/cleanrooms/model/LogExportAnalysisType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class StartAnalysisLogExportRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API StartAnalysisLogExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAnalysisLogExport"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique identifier for the membership to export the analysis logs for.
   * Currently accepts a membership ID.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  StartAnalysisLogExportRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the protected query that you want to export the
   * analysis logs for.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  StartAnalysisLogExportRequest& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analysis that the logs are exported for. Currently, only
   * <code>PROTECTED_QUERY</code> is supported.</p>
   */
  inline LogExportAnalysisType GetAnalysisType() const { return m_analysisType; }
  inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
  inline void SetAnalysisType(LogExportAnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline StartAnalysisLogExportRequest& WithAnalysisType(LogExportAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details needed to write the exported analysis logs.</p> <p>You don't need
   * to create an IAM role for log export. Clean Rooms writes the exported logs using
   * your own identity, so Clean Rooms writes the exported logs only where your
   * existing permissions allow.</p>
   */
  inline const AnalysisLogExportResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
  inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
  template <typename ResultConfigurationT = AnalysisLogExportResultConfiguration>
  void SetResultConfiguration(ResultConfigurationT&& value) {
    m_resultConfigurationHasBeenSet = true;
    m_resultConfiguration = std::forward<ResultConfigurationT>(value);
  }
  template <typename ResultConfigurationT = AnalysisLogExportResultConfiguration>
  StartAnalysisLogExportRequest& WithResultConfiguration(ResultConfigurationT&& value) {
    SetResultConfiguration(std::forward<ResultConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_analysisId;

  LogExportAnalysisType m_analysisType{LogExportAnalysisType::NOT_SET};

  AnalysisLogExportResultConfiguration m_resultConfiguration;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_resultConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
