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
    AWS_CLEANROOMSML_API StartAudienceExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAudienceExportJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the audience export job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartAudienceExportJobRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you want
     * to export.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const { return m_audienceGenerationJobArn; }
    inline bool AudienceGenerationJobArnHasBeenSet() const { return m_audienceGenerationJobArnHasBeenSet; }
    template<typename AudienceGenerationJobArnT = Aws::String>
    void SetAudienceGenerationJobArn(AudienceGenerationJobArnT&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::forward<AudienceGenerationJobArnT>(value); }
    template<typename AudienceGenerationJobArnT = Aws::String>
    StartAudienceExportJobRequest& WithAudienceGenerationJobArn(AudienceGenerationJobArnT&& value) { SetAudienceGenerationJobArn(std::forward<AudienceGenerationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudienceSize& GetAudienceSize() const { return m_audienceSize; }
    inline bool AudienceSizeHasBeenSet() const { return m_audienceSizeHasBeenSet; }
    template<typename AudienceSizeT = AudienceSize>
    void SetAudienceSize(AudienceSizeT&& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = std::forward<AudienceSizeT>(value); }
    template<typename AudienceSizeT = AudienceSize>
    StartAudienceExportJobRequest& WithAudienceSize(AudienceSizeT&& value) { SetAudienceSize(std::forward<AudienceSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the audience export job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartAudienceExportJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;

    AudienceSize m_audienceSize;
    bool m_audienceSizeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
