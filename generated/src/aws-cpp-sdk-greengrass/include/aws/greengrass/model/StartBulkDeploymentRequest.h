/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class StartBulkDeploymentRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API StartBulkDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBulkDeployment"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    StartBulkDeploymentRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    StartBulkDeploymentRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline const Aws::String& GetInputFileUri() const { return m_inputFileUri; }
    inline bool InputFileUriHasBeenSet() const { return m_inputFileUriHasBeenSet; }
    template<typename InputFileUriT = Aws::String>
    void SetInputFileUri(InputFileUriT&& value) { m_inputFileUriHasBeenSet = true; m_inputFileUri = std::forward<InputFileUriT>(value); }
    template<typename InputFileUriT = Aws::String>
    StartBulkDeploymentRequest& WithInputFileUri(InputFileUriT&& value) { SetInputFileUri(std::forward<InputFileUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Tag(s) to add to the new resource.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartBulkDeploymentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartBulkDeploymentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_inputFileUri;
    bool m_inputFileUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
