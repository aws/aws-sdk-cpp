﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/CampaignConfig.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API CreateCampaignRequest : public PersonalizeRequest
  {
  public:
    CreateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline CreateCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline CreateCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the new campaign. The campaign name must be unique within your
     * account.</p>
     */
    inline CreateCampaignRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline CreateCampaignRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline CreateCampaignRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version to deploy.</p>
     */
    inline CreateCampaignRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline int GetMinProvisionedTPS() const{ return m_minProvisionedTPS; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline CreateCampaignRequest& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}


    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline const CampaignConfig& GetCampaignConfig() const{ return m_campaignConfig; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline bool CampaignConfigHasBeenSet() const { return m_campaignConfigHasBeenSet; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline void SetCampaignConfig(const CampaignConfig& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = value; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline void SetCampaignConfig(CampaignConfig&& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = std::move(value); }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline CreateCampaignRequest& WithCampaignConfig(const CampaignConfig& value) { SetCampaignConfig(value); return *this;}

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline CreateCampaignRequest& WithCampaignConfig(CampaignConfig&& value) { SetCampaignConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet;

    int m_minProvisionedTPS;
    bool m_minProvisionedTPSHasBeenSet;

    CampaignConfig m_campaignConfig;
    bool m_campaignConfigHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
