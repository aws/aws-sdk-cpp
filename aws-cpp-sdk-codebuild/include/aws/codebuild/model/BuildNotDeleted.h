/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BuildNotDeleted
  {
  public:
    AWS_CODEBUILD_API BuildNotDeleted();
    AWS_CODEBUILD_API BuildNotDeleted(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildNotDeleted& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_idHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
