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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API DeleteJobTaggingRequest : public S3ControlRequest
  {
  public:
    DeleteJobTaggingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJobTagging"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline DeleteJobTaggingRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline DeleteJobTaggingRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the Amazon Web Services account associated with the Amazon
     * S3 batch operations job you want to remove tags from.</p>
     */
    inline DeleteJobTaggingRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline DeleteJobTaggingRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline DeleteJobTaggingRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job whose tags you want to delete.</p>
     */
    inline DeleteJobTaggingRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
