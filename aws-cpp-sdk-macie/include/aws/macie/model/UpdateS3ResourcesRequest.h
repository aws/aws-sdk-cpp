/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie/model/S3ResourceClassificationUpdate.h>
#include <utility>

namespace Aws
{
namespace Macie
{
namespace Model
{

  /**
   */
  class UpdateS3ResourcesRequest : public MacieRequest
  {
  public:
    AWS_MACIE_API UpdateS3ResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateS3Resources"; }

    AWS_MACIE_API Aws::String SerializePayload() const override;

    AWS_MACIE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline UpdateS3ResourcesRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline UpdateS3ResourcesRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account whose S3 resources' classification types you want to update.</p>
     */
    inline UpdateS3ResourcesRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}


    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline const Aws::Vector<S3ResourceClassificationUpdate>& GetS3ResourcesUpdate() const{ return m_s3ResourcesUpdate; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline bool S3ResourcesUpdateHasBeenSet() const { return m_s3ResourcesUpdateHasBeenSet; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline void SetS3ResourcesUpdate(const Aws::Vector<S3ResourceClassificationUpdate>& value) { m_s3ResourcesUpdateHasBeenSet = true; m_s3ResourcesUpdate = value; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline void SetS3ResourcesUpdate(Aws::Vector<S3ResourceClassificationUpdate>&& value) { m_s3ResourcesUpdateHasBeenSet = true; m_s3ResourcesUpdate = std::move(value); }

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline UpdateS3ResourcesRequest& WithS3ResourcesUpdate(const Aws::Vector<S3ResourceClassificationUpdate>& value) { SetS3ResourcesUpdate(value); return *this;}

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline UpdateS3ResourcesRequest& WithS3ResourcesUpdate(Aws::Vector<S3ResourceClassificationUpdate>&& value) { SetS3ResourcesUpdate(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline UpdateS3ResourcesRequest& AddS3ResourcesUpdate(const S3ResourceClassificationUpdate& value) { m_s3ResourcesUpdateHasBeenSet = true; m_s3ResourcesUpdate.push_back(value); return *this; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types you want to
     * update.</p>
     */
    inline UpdateS3ResourcesRequest& AddS3ResourcesUpdate(S3ResourceClassificationUpdate&& value) { m_s3ResourcesUpdateHasBeenSet = true; m_s3ResourcesUpdate.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet = false;

    Aws::Vector<S3ResourceClassificationUpdate> m_s3ResourcesUpdate;
    bool m_s3ResourcesUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
