﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class DescribeRepositoryAssociationRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRepositoryAssociation"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    DescribeRepositoryAssociationRequest& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
