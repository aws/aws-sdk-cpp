/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest::SerializePayload() const
{
  return {};
}

void GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetTypeHasBeenSet)
    {
      ss << AutomatedReasoningPolicyBuildResultAssetTypeMapper::GetNameForAutomatedReasoningPolicyBuildResultAssetType(m_assetType);
      uri.AddQueryStringParameter("assetType", ss.str());
      ss.str("");
    }

}



