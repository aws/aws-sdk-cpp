/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyBuildWorkflowDocument::AutomatedReasoningPolicyBuildWorkflowDocument(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildWorkflowDocument& AutomatedReasoningPolicyBuildWorkflowDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = HashingUtils::Base64Decode(jsonValue.GetString("document"));
    m_documentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentContentType"))
  {
    m_documentContentType = AutomatedReasoningPolicyBuildDocumentContentTypeMapper::GetAutomatedReasoningPolicyBuildDocumentContentTypeForName(jsonValue.GetString("documentContentType"));
    m_documentContentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentName"))
  {
    m_documentName = jsonValue.GetString("documentName");
    m_documentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentDescription"))
  {
    m_documentDescription = jsonValue.GetString("documentDescription");
    m_documentDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildWorkflowDocument::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", HashingUtils::Base64Encode(m_document));
  }

  if(m_documentContentTypeHasBeenSet)
  {
   payload.WithString("documentContentType", AutomatedReasoningPolicyBuildDocumentContentTypeMapper::GetNameForAutomatedReasoningPolicyBuildDocumentContentType(m_documentContentType));
  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("documentName", m_documentName);

  }

  if(m_documentDescriptionHasBeenSet)
  {
   payload.WithString("documentDescription", m_documentDescription);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
