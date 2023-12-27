/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceSize.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class StartAudienceExportJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API StartAudienceExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAudienceExportJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline bool AudienceGenerationJobArnHasBeenSet() const { return m_audienceGenerationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline StartAudienceExportJobRequest& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline StartAudienceExportJobRequest& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline StartAudienceExportJobRequest& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}


    
    inline const AudienceSize& GetAudienceSize() const{ return m_audienceSize; }

    
    inline bool AudienceSizeHasBeenSet() const { return m_audienceSizeHasBeenSet; }

    
    inline void SetAudienceSize(const AudienceSize& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = value; }

    
    inline void SetAudienceSize(AudienceSize&& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = std::move(value); }

    
    inline StartAudienceExportJobRequest& WithAudienceSize(const AudienceSize& value) { SetAudienceSize(value); return *this;}

    
    inline StartAudienceExportJobRequest& WithAudienceSize(AudienceSize&& value) { SetAudienceSize(std::move(value)); return *this;}


    /**
     * <p>The description of the audience export job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the audience export job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience export job.</p>
     */
    inline StartAudienceExportJobRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;

    AudienceSize m_audienceSize;
    bool m_audienceSizeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
