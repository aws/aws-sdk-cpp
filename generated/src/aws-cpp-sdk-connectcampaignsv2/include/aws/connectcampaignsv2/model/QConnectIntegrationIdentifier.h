/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Q Connect integration identifier</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/QConnectIntegrationIdentifier">AWS
   * API Reference</a></p>
   */
  class QConnectIntegrationIdentifier
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API QConnectIntegrationIdentifier();
    AWS_CONNECTCAMPAIGNSV2_API QConnectIntegrationIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API QConnectIntegrationIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline QConnectIntegrationIdentifier& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline QConnectIntegrationIdentifier& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline QConnectIntegrationIdentifier& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
