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
  class DescribeEntityRecognizerRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DescribeEntityRecognizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntityRecognizer"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const { return m_entityRecognizerArn; }
    inline bool EntityRecognizerArnHasBeenSet() const { return m_entityRecognizerArnHasBeenSet; }
    template<typename EntityRecognizerArnT = Aws::String>
    void SetEntityRecognizerArn(EntityRecognizerArnT&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::forward<EntityRecognizerArnT>(value); }
    template<typename EntityRecognizerArnT = Aws::String>
    DescribeEntityRecognizerRequest& WithEntityRecognizerArn(EntityRecognizerArnT&& value) { SetEntityRecognizerArn(std::forward<EntityRecognizerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
