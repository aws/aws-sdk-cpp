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
  class AWS_COMPREHEND_API StopTrainingEntityRecognizerRequest : public ComprehendRequest
  {
  public:
    StopTrainingEntityRecognizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopTrainingEntityRecognizer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const{ return m_entityRecognizerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline bool EntityRecognizerArnHasBeenSet() const { return m_entityRecognizerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline void SetEntityRecognizerArn(const Aws::String& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline void SetEntityRecognizerArn(Aws::String&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline void SetEntityRecognizerArn(const char* value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline StopTrainingEntityRecognizerRequest& WithEntityRecognizerArn(const Aws::String& value) { SetEntityRecognizerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline StopTrainingEntityRecognizerRequest& WithEntityRecognizerArn(Aws::String&& value) { SetEntityRecognizerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer
     * currently being trained.</p>
     */
    inline StopTrainingEntityRecognizerRequest& WithEntityRecognizerArn(const char* value) { SetEntityRecognizerArn(value); return *this;}

  private:

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
