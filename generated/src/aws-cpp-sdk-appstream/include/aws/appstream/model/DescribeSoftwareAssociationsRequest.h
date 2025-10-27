/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppStream {
namespace Model {

/**
 */
class DescribeSoftwareAssociationsRequest : public AppStreamRequest {
 public:
  AWS_APPSTREAM_API DescribeSoftwareAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeSoftwareAssociations"; }

  AWS_APPSTREAM_API Aws::String SerializePayload() const override;

  AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the resource to describe software associations. Possible resources
   * are Image and ImageBuilder.</p>
   */
  inline const Aws::String& GetAssociatedResource() const { return m_associatedResource; }
  inline bool AssociatedResourceHasBeenSet() const { return m_associatedResourceHasBeenSet; }
  template <typename AssociatedResourceT = Aws::String>
  void SetAssociatedResource(AssociatedResourceT&& value) {
    m_associatedResourceHasBeenSet = true;
    m_associatedResource = std::forward<AssociatedResourceT>(value);
  }
  template <typename AssociatedResourceT = Aws::String>
  DescribeSoftwareAssociationsRequest& WithAssociatedResource(AssociatedResourceT&& value) {
    SetAssociatedResource(std::forward<AssociatedResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeSoftwareAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to retrieve the next page of results for this
   * operation.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeSoftwareAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associatedResource;
  bool m_associatedResourceHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
