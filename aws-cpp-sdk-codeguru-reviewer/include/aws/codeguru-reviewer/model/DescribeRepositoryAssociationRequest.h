/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationRequest : public CodeGuruReviewerRequest
  {
  public:
    DescribeRepositoryAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRepositoryAssociation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline DescribeRepositoryAssociationRequest& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline DescribeRepositoryAssociationRequest& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the association.</p>
     */
    inline DescribeRepositoryAssociationRequest& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}

  private:

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
