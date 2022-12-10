/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class UpdateKnowledgeBaseTemplateUriRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API UpdateKnowledgeBaseTemplateUriRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKnowledgeBaseTemplateUri"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The template URI to update.</p>
     */
    inline const Aws::String& GetTemplateUri() const{ return m_templateUri; }

    /**
     * <p>The template URI to update.</p>
     */
    inline bool TemplateUriHasBeenSet() const { return m_templateUriHasBeenSet; }

    /**
     * <p>The template URI to update.</p>
     */
    inline void SetTemplateUri(const Aws::String& value) { m_templateUriHasBeenSet = true; m_templateUri = value; }

    /**
     * <p>The template URI to update.</p>
     */
    inline void SetTemplateUri(Aws::String&& value) { m_templateUriHasBeenSet = true; m_templateUri = std::move(value); }

    /**
     * <p>The template URI to update.</p>
     */
    inline void SetTemplateUri(const char* value) { m_templateUriHasBeenSet = true; m_templateUri.assign(value); }

    /**
     * <p>The template URI to update.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(const Aws::String& value) { SetTemplateUri(value); return *this;}

    /**
     * <p>The template URI to update.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(Aws::String&& value) { SetTemplateUri(std::move(value)); return *this;}

    /**
     * <p>The template URI to update.</p>
     */
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(const char* value) { SetTemplateUri(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_templateUri;
    bool m_templateUriHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
