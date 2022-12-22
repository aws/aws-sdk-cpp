/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Liquid template for the worker user interface.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UiTemplate">AWS
   * API Reference</a></p>
   */
  class UiTemplate
  {
  public:
    AWS_SAGEMAKER_API UiTemplate();
    AWS_SAGEMAKER_API UiTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UiTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline UiTemplate& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline UiTemplate& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the Liquid template for the worker user interface.</p>
     */
    inline UiTemplate& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
