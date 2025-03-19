/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class DescribeImportRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DescribeImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImport"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) associated with the table you're importing
     * to. </p>
     */
    inline const Aws::String& GetImportArn() const { return m_importArn; }
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }
    template<typename ImportArnT = Aws::String>
    void SetImportArn(ImportArnT&& value) { m_importArnHasBeenSet = true; m_importArn = std::forward<ImportArnT>(value); }
    template<typename ImportArnT = Aws::String>
    DescribeImportRequest& WithImportArn(ImportArnT&& value) { SetImportArn(std::forward<ImportArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importArn;
    bool m_importArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
