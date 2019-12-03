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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API CreateFaqRequest : public KendraRequest
  {
  public:
    CreateFaqRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFaq"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that should be associated with the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the FAQ.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the FAQ.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the FAQ.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the FAQ.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the FAQ.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline const S3Path& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline void SetS3Path(const S3Path& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline void SetS3Path(S3Path&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline CreateFaqRequest& WithS3Path(const S3Path& value) { SetS3Path(value); return *this;}

    /**
     * <p>The S3 location of the FAQ input data.</p>
     */
    inline CreateFaqRequest& WithS3Path(S3Path&& value) { SetS3Path(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    S3Path m_s3Path;
    bool m_s3PathHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
