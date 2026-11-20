/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Bedrock {
namespace Model {

/**
 * <p>The optional named project for which to resolve participation in visible
 * trusted access programs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListTrustedAccessProgramsRequest">AWS
 * API Reference</a></p>
 */
class ListTrustedAccessProgramsRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API ListTrustedAccessProgramsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTrustedAccessPrograms"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID or ARN of a named Bedrock project owned by the calling account in this
   * Region. When omitted, resolves participation for the calling account, including
   * participation inherited from its current organization. When specified, resolves
   * participation for the project, including participation inherited from the
   * account and its current organization. You cannot specify the default project.
   * Omit this field to resolve its inherited participation. An ARN from another
   * account, Region, or partition returns ValidationException. A project that does
   * not exist in the calling account returns ResourceNotFoundException.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  ListTrustedAccessProgramsRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future pagination support. Currently ignored; the response
   * includes all visible programs.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListTrustedAccessProgramsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future pagination support. Omit this field.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTrustedAccessProgramsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectIdentifier;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_projectIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
