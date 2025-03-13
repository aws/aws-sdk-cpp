/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DeleteDocumentClassifierRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DeleteDocumentClassifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocumentClassifier"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const { return m_documentClassifierArn; }
    inline bool DocumentClassifierArnHasBeenSet() const { return m_documentClassifierArnHasBeenSet; }
    template<typename DocumentClassifierArnT = Aws::String>
    void SetDocumentClassifierArn(DocumentClassifierArnT&& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = std::forward<DocumentClassifierArnT>(value); }
    template<typename DocumentClassifierArnT = Aws::String>
    DeleteDocumentClassifierRequest& WithDocumentClassifierArn(DocumentClassifierArnT&& value) { SetDocumentClassifierArn(std::forward<DocumentClassifierArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentClassifierArn;
    bool m_documentClassifierArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
