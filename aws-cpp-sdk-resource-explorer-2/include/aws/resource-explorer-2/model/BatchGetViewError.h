/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A collection of error messages for any views that Amazon Web Services
   * Resource Explorer couldn't retrieve details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/BatchGetViewError">AWS
   * API Reference</a></p>
   */
  class BatchGetViewError
  {
  public:
    AWS_RESOURCEEXPLORER2_API BatchGetViewError();
    AWS_RESOURCEEXPLORER2_API BatchGetViewError(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API BatchGetViewError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline BatchGetViewError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline BatchGetViewError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The description of the error for the specified view.</p>
     */
    inline BatchGetViewError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline void SetViewArn(const Aws::String& value) { m_viewArnHasBeenSet = true; m_viewArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline void SetViewArn(Aws::String&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline void SetViewArn(const char* value) { m_viewArnHasBeenSet = true; m_viewArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline BatchGetViewError& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline BatchGetViewError& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view for which Resource Explorer failed to
     * retrieve details.</p>
     */
    inline BatchGetViewError& WithViewArn(const char* value) { SetViewArn(value); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_viewArn;
    bool m_viewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
