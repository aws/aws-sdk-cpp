/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class GetAnalysisLogExportRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API GetAnalysisLogExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAnalysisLogExport"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique identifier for the membership that the analysis log export belongs
   * to. Currently accepts the membership ID.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  GetAnalysisLogExportRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the analysis log export to retrieve.</p>
   */
  inline const Aws::String& GetAnalysisLogExportIdentifier() const { return m_analysisLogExportIdentifier; }
  inline bool AnalysisLogExportIdentifierHasBeenSet() const { return m_analysisLogExportIdentifierHasBeenSet; }
  template <typename AnalysisLogExportIdentifierT = Aws::String>
  void SetAnalysisLogExportIdentifier(AnalysisLogExportIdentifierT&& value) {
    m_analysisLogExportIdentifierHasBeenSet = true;
    m_analysisLogExportIdentifier = std::forward<AnalysisLogExportIdentifierT>(value);
  }
  template <typename AnalysisLogExportIdentifierT = Aws::String>
  GetAnalysisLogExportRequest& WithAnalysisLogExportIdentifier(AnalysisLogExportIdentifierT&& value) {
    SetAnalysisLogExportIdentifier(std::forward<AnalysisLogExportIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_analysisLogExportIdentifier;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_analysisLogExportIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
