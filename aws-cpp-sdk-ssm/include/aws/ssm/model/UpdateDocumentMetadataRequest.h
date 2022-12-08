/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentReviews.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateDocumentMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateDocumentMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDocumentMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline UpdateDocumentMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline UpdateDocumentMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline UpdateDocumentMetadataRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline UpdateDocumentMetadataRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline UpdateDocumentMetadataRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline UpdateDocumentMetadataRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The change template review details to update.</p>
     */
    inline const DocumentReviews& GetDocumentReviews() const{ return m_documentReviews; }

    /**
     * <p>The change template review details to update.</p>
     */
    inline bool DocumentReviewsHasBeenSet() const { return m_documentReviewsHasBeenSet; }

    /**
     * <p>The change template review details to update.</p>
     */
    inline void SetDocumentReviews(const DocumentReviews& value) { m_documentReviewsHasBeenSet = true; m_documentReviews = value; }

    /**
     * <p>The change template review details to update.</p>
     */
    inline void SetDocumentReviews(DocumentReviews&& value) { m_documentReviewsHasBeenSet = true; m_documentReviews = std::move(value); }

    /**
     * <p>The change template review details to update.</p>
     */
    inline UpdateDocumentMetadataRequest& WithDocumentReviews(const DocumentReviews& value) { SetDocumentReviews(value); return *this;}

    /**
     * <p>The change template review details to update.</p>
     */
    inline UpdateDocumentMetadataRequest& WithDocumentReviews(DocumentReviews&& value) { SetDocumentReviews(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    DocumentReviews m_documentReviews;
    bool m_documentReviewsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
