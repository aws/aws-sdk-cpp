/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class GetAudienceGenerationJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetAudienceGenerationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAudienceGenerationJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline bool AudienceGenerationJobArnHasBeenSet() const { return m_audienceGenerationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline GetAudienceGenerationJobRequest& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline GetAudienceGenerationJobRequest& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that you are
     * interested in.</p>
     */
    inline GetAudienceGenerationJobRequest& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
