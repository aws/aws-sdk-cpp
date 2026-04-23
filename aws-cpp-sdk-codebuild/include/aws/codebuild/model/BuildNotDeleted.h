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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a build that could not be successfully
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildNotDeleted">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API BuildNotDeleted
  {
  public:
    BuildNotDeleted();
    BuildNotDeleted(Aws::Utils::Json::JsonView jsonValue);
    BuildNotDeleted& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline BuildNotDeleted& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline BuildNotDeleted& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the build that could not be successfully deleted.</p>
     */
    inline BuildNotDeleted& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline BuildNotDeleted& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline BuildNotDeleted& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>Additional information about the build that could not be successfully
     * deleted.</p>
     */
    inline BuildNotDeleted& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
