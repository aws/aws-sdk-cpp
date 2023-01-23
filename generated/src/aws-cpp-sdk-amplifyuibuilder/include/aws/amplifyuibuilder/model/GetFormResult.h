/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/Form.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class GetFormResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API GetFormResult();
    AWS_AMPLIFYUIBUILDER_API GetFormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API GetFormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the configuration settings for the form.</p>
     */
    inline const Form& GetForm() const{ return m_form; }

    /**
     * <p>Represents the configuration settings for the form.</p>
     */
    inline void SetForm(const Form& value) { m_form = value; }

    /**
     * <p>Represents the configuration settings for the form.</p>
     */
    inline void SetForm(Form&& value) { m_form = std::move(value); }

    /**
     * <p>Represents the configuration settings for the form.</p>
     */
    inline GetFormResult& WithForm(const Form& value) { SetForm(value); return *this;}

    /**
     * <p>Represents the configuration settings for the form.</p>
     */
    inline GetFormResult& WithForm(Form&& value) { SetForm(std::move(value)); return *this;}

  private:

    Form m_form;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
