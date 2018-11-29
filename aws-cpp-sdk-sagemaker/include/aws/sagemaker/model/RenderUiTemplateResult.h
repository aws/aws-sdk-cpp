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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RenderingError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API RenderUiTemplateResult
  {
  public:
    RenderUiTemplateResult();
    RenderUiTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RenderUiTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline const Aws::String& GetRenderedContent() const{ return m_renderedContent; }

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline void SetRenderedContent(const Aws::String& value) { m_renderedContent = value; }

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline void SetRenderedContent(Aws::String&& value) { m_renderedContent = std::move(value); }

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline void SetRenderedContent(const char* value) { m_renderedContent.assign(value); }

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline RenderUiTemplateResult& WithRenderedContent(const Aws::String& value) { SetRenderedContent(value); return *this;}

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline RenderUiTemplateResult& WithRenderedContent(Aws::String&& value) { SetRenderedContent(std::move(value)); return *this;}

    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline RenderUiTemplateResult& WithRenderedContent(const char* value) { SetRenderedContent(value); return *this;}


    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline const Aws::Vector<RenderingError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline void SetErrors(const Aws::Vector<RenderingError>& value) { m_errors = value; }

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline void SetErrors(Aws::Vector<RenderingError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline RenderUiTemplateResult& WithErrors(const Aws::Vector<RenderingError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline RenderUiTemplateResult& WithErrors(Aws::Vector<RenderingError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline RenderUiTemplateResult& AddErrors(const RenderingError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline RenderUiTemplateResult& AddErrors(RenderingError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_renderedContent;

    Aws::Vector<RenderingError> m_errors;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
