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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API DescribeSolutionRequest : public PersonalizeRequest
  {
  public:
    DescribeSolutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSolution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline DescribeSolutionRequest& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline DescribeSolutionRequest& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to describe.</p>
     */
    inline DescribeSolutionRequest& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}

  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
