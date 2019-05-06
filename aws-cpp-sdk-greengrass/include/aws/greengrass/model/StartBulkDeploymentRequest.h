/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GREENGRASS_API StartBulkDeploymentRequest : public GreengrassRequest
  {
  public:
    StartBulkDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBulkDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline StartBulkDeploymentRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline StartBulkDeploymentRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline StartBulkDeploymentRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline StartBulkDeploymentRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline StartBulkDeploymentRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the execution role to associate with the bulk deployment operation.
     * This IAM role must allow the ''greengrass:CreateDeployment'' action for all
     * group versions that are listed in the input file. This IAM role must have access
     * to the S3 bucket containing the input file.
     */
    inline StartBulkDeploymentRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline const Aws::String& GetInputFileUri() const{ return m_inputFileUri; }

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline bool InputFileUriHasBeenSet() const { return m_inputFileUriHasBeenSet; }

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline void SetInputFileUri(const Aws::String& value) { m_inputFileUriHasBeenSet = true; m_inputFileUri = value; }

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline void SetInputFileUri(Aws::String&& value) { m_inputFileUriHasBeenSet = true; m_inputFileUri = std::move(value); }

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline void SetInputFileUri(const char* value) { m_inputFileUriHasBeenSet = true; m_inputFileUri.assign(value); }

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline StartBulkDeploymentRequest& WithInputFileUri(const Aws::String& value) { SetInputFileUri(value); return *this;}

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline StartBulkDeploymentRequest& WithInputFileUri(Aws::String&& value) { SetInputFileUri(std::move(value)); return *this;}

    /**
     * The URI of the input file contained in the S3 bucket. The execution role must
     * have ''getObject'' permissions on this bucket to access the input file. The
     * input file is a JSON-serialized, line delimited file with UTF-8 encoding that
     * provides a list of group and version IDs and the deployment type. This file must
     * be less than 100 MB. Currently, AWS IoT Greengrass supports only
     * ''NewDeployment'' deployment types.
     */
    inline StartBulkDeploymentRequest& WithInputFileUri(const char* value) { SetInputFileUri(value); return *this;}


    /**
     * Tag(s) to add to the new resource
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Tag(s) to add to the new resource
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * Tag(s) to add to the new resource
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * Tag(s) to add to the new resource
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline StartBulkDeploymentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_inputFileUri;
    bool m_inputFileUriHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
