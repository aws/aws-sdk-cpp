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
  class DeleteConfiguredModelAlgorithmRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API DeleteConfiguredModelAlgorithmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfiguredModelAlgorithm"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm that you
     * want to delete.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const { return m_configuredModelAlgorithmArn; }
    inline bool ConfiguredModelAlgorithmArnHasBeenSet() const { return m_configuredModelAlgorithmArnHasBeenSet; }
    template<typename ConfiguredModelAlgorithmArnT = Aws::String>
    void SetConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) { m_configuredModelAlgorithmArnHasBeenSet = true; m_configuredModelAlgorithmArn = std::forward<ConfiguredModelAlgorithmArnT>(value); }
    template<typename ConfiguredModelAlgorithmArnT = Aws::String>
    DeleteConfiguredModelAlgorithmRequest& WithConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) { SetConfiguredModelAlgorithmArn(std::forward<ConfiguredModelAlgorithmArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredModelAlgorithmArn;
    bool m_configuredModelAlgorithmArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
