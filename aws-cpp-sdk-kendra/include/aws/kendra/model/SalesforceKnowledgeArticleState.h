/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class SalesforceKnowledgeArticleState
  {
    NOT_SET,
    DRAFT,
    PUBLISHED,
    ARCHIVED
  };

namespace SalesforceKnowledgeArticleStateMapper
{
AWS_KENDRA_API SalesforceKnowledgeArticleState GetSalesforceKnowledgeArticleStateForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSalesforceKnowledgeArticleState(SalesforceKnowledgeArticleState value);
} // namespace SalesforceKnowledgeArticleStateMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
