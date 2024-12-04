/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Delete Blueprint Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteBlueprintRequest">AWS
   * API Reference</a></p>
   */
  class DeleteBlueprintRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DeleteBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBlueprint"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

    AWS_BEDROCKDATAAUTOMATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>ARN generated at the server side when a Blueprint is created</p>
     */
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline DeleteBlueprintRequest& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline DeleteBlueprintRequest& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline DeleteBlueprintRequest& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional field to delete a specific Blueprint version</p>
     */
    inline const Aws::String& GetBlueprintVersion() const{ return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    inline void SetBlueprintVersion(const Aws::String& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = value; }
    inline void SetBlueprintVersion(Aws::String&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::move(value); }
    inline void SetBlueprintVersion(const char* value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion.assign(value); }
    inline DeleteBlueprintRequest& WithBlueprintVersion(const Aws::String& value) { SetBlueprintVersion(value); return *this;}
    inline DeleteBlueprintRequest& WithBlueprintVersion(Aws::String&& value) { SetBlueprintVersion(std::move(value)); return *this;}
    inline DeleteBlueprintRequest& WithBlueprintVersion(const char* value) { SetBlueprintVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
