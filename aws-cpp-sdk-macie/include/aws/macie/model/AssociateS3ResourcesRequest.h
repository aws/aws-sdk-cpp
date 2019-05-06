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
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie/model/S3ResourceClassification.h>
#include <utility>

namespace Aws
{
namespace Macie
{
namespace Model
{

  /**
   */
  class AWS_MACIE_API AssociateS3ResourcesRequest : public MacieRequest
  {
  public:
    AssociateS3ResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateS3Resources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to
     * associate with Macie. </p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}


    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline const Aws::Vector<S3ResourceClassification>& GetS3Resources() const{ return m_s3Resources; }

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline bool S3ResourcesHasBeenSet() const { return m_s3ResourcesHasBeenSet; }

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline void SetS3Resources(const Aws::Vector<S3ResourceClassification>& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = value; }

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline void SetS3Resources(Aws::Vector<S3ResourceClassification>&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = std::move(value); }

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline AssociateS3ResourcesRequest& WithS3Resources(const Aws::Vector<S3ResourceClassification>& value) { SetS3Resources(value); return *this;}

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline AssociateS3ResourcesRequest& WithS3Resources(Aws::Vector<S3ResourceClassification>&& value) { SetS3Resources(std::move(value)); return *this;}

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline AssociateS3ResourcesRequest& AddS3Resources(const S3ResourceClassification& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(value); return *this; }

    /**
     * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
     * and data classification. </p>
     */
    inline AssociateS3ResourcesRequest& AddS3Resources(S3ResourceClassification&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet;

    Aws::Vector<S3ResourceClassification> m_s3Resources;
    bool m_s3ResourcesHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
