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
  class GetAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetAudienceModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model that you are interested
     * in.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const { return m_audienceModelArn; }
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }
    template<typename AudienceModelArnT = Aws::String>
    void SetAudienceModelArn(AudienceModelArnT&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::forward<AudienceModelArnT>(value); }
    template<typename AudienceModelArnT = Aws::String>
    GetAudienceModelRequest& WithAudienceModelArn(AudienceModelArnT&& value) { SetAudienceModelArn(std::forward<AudienceModelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
