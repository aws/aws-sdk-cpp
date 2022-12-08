/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeCodeRepositoryRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeCodeRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCodeRepository"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = value; }

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::move(value); }

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName.assign(value); }

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline DescribeCodeRepositoryRequest& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline DescribeCodeRepositoryRequest& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Git repository to describe.</p>
     */
    inline DescribeCodeRepositoryRequest& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}

  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
