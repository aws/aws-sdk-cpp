/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssociateS3ResourcesRequest : public MacieRequest
  {
  public:
    AWS_MACIE_API AssociateS3ResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateS3Resources"; }

    AWS_MACIE_API Aws::String SerializePayload() const override;

    AWS_MACIE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The ID of the Amazon Macie Classic member account whose
     * resources you want to associate with Macie Classic.</p>
     */
    inline AssociateS3ResourcesRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}


    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline const Aws::Vector<S3ResourceClassification>& GetS3Resources() const{ return m_s3Resources; }

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline bool S3ResourcesHasBeenSet() const { return m_s3ResourcesHasBeenSet; }

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline void SetS3Resources(const Aws::Vector<S3ResourceClassification>& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = value; }

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline void SetS3Resources(Aws::Vector<S3ResourceClassification>&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = std::move(value); }

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline AssociateS3ResourcesRequest& WithS3Resources(const Aws::Vector<S3ResourceClassification>& value) { SetS3Resources(value); return *this;}

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline AssociateS3ResourcesRequest& WithS3Resources(Aws::Vector<S3ResourceClassification>&& value) { SetS3Resources(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline AssociateS3ResourcesRequest& AddS3Resources(const S3ResourceClassification& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(value); return *this; }

    /**
     * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
     * Classic for monitoring and data classification.</p>
     */
    inline AssociateS3ResourcesRequest& AddS3Resources(S3ResourceClassification&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet = false;

    Aws::Vector<S3ResourceClassification> m_s3Resources;
    bool m_s3ResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
