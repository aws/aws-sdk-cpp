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
#include <aws/glue/model/UpdateGrokClassifierRequest.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API UpdateClassifierRequest : public GlueRequest
  {
  public:
    UpdateClassifierRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClassifier"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline const UpdateGrokClassifierRequest& GetGrokClassifier() const{ return m_grokClassifier; }

    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline void SetGrokClassifier(const UpdateGrokClassifierRequest& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }

    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline void SetGrokClassifier(UpdateGrokClassifierRequest&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }

    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline UpdateClassifierRequest& WithGrokClassifier(const UpdateGrokClassifierRequest& value) { SetGrokClassifier(value); return *this;}

    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline UpdateClassifierRequest& WithGrokClassifier(UpdateGrokClassifierRequest&& value) { SetGrokClassifier(std::move(value)); return *this;}

  private:

    UpdateGrokClassifierRequest m_grokClassifier;
    bool m_grokClassifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
