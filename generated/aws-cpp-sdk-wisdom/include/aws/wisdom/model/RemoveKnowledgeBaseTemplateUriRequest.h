﻿/**
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
  class AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriRequest : public ConnectWisdomServiceRequest
  {
  public:
    RemoveKnowledgeBaseTemplateUriRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveKnowledgeBaseTemplateUri"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline RemoveKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline RemoveKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The the identifier of the knowledge base. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline RemoveKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
