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
  class DeleteAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API DeleteAudienceModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline DeleteAudienceModelRequest& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline DeleteAudienceModelRequest& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you want to
     * delete.</p>
     */
    inline DeleteAudienceModelRequest& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}

  private:

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
