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
  class GetConfiguredModelAlgorithmRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetConfiguredModelAlgorithmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguredModelAlgorithm"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm that you
     * want to return information about.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const{ return m_configuredModelAlgorithmArn; }
    inline bool ConfiguredModelAlgorithmArnHasBeenSet() const { return m_configuredModelAlgorithmArnHasBeenSet; }
    inline void SetConfiguredModelAlgorithmArn(const Aws::String& value) { m_configuredModelAlgorithmArnHasBeenSet = true; m_configuredModelAlgorithmArn = value; }
    inline void SetConfiguredModelAlgorithmArn(Aws::String&& value) { m_configuredModelAlgorithmArnHasBeenSet = true; m_configuredModelAlgorithmArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmArn(const char* value) { m_configuredModelAlgorithmArnHasBeenSet = true; m_configuredModelAlgorithmArn.assign(value); }
    inline GetConfiguredModelAlgorithmRequest& WithConfiguredModelAlgorithmArn(const Aws::String& value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    inline GetConfiguredModelAlgorithmRequest& WithConfiguredModelAlgorithmArn(Aws::String&& value) { SetConfiguredModelAlgorithmArn(std::move(value)); return *this;}
    inline GetConfiguredModelAlgorithmRequest& WithConfiguredModelAlgorithmArn(const char* value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredModelAlgorithmArn;
    bool m_configuredModelAlgorithmArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
