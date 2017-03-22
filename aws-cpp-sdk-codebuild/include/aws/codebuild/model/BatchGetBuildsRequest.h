/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API BatchGetBuildsRequest : public CodeBuildRequest
  {
  public:
    BatchGetBuildsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the builds.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>The IDs of the builds.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>The IDs of the builds.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>The IDs of the builds.</p>
     */
    inline BatchGetBuildsRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>The IDs of the builds.</p>
     */
    inline BatchGetBuildsRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(value); return *this;}

    /**
     * <p>The IDs of the builds.</p>
     */
    inline BatchGetBuildsRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>The IDs of the builds.</p>
     */
    inline BatchGetBuildsRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>The IDs of the builds.</p>
     */
    inline BatchGetBuildsRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
