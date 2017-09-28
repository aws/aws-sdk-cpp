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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/CreateGrokClassifierRequest.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreateClassifierRequest : public GlueRequest
  {
  public:
    CreateClassifierRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClassifier"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A grok classifier to create.</p>
     */
    inline const CreateGrokClassifierRequest& GetGrokClassifier() const{ return m_grokClassifier; }

    /**
     * <p>A grok classifier to create.</p>
     */
    inline void SetGrokClassifier(const CreateGrokClassifierRequest& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }

    /**
     * <p>A grok classifier to create.</p>
     */
    inline void SetGrokClassifier(CreateGrokClassifierRequest&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }

    /**
     * <p>A grok classifier to create.</p>
     */
    inline CreateClassifierRequest& WithGrokClassifier(const CreateGrokClassifierRequest& value) { SetGrokClassifier(value); return *this;}

    /**
     * <p>A grok classifier to create.</p>
     */
    inline CreateClassifierRequest& WithGrokClassifier(CreateGrokClassifierRequest&& value) { SetGrokClassifier(std::move(value)); return *this;}

  private:

    CreateGrokClassifierRequest m_grokClassifier;
    bool m_grokClassifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
