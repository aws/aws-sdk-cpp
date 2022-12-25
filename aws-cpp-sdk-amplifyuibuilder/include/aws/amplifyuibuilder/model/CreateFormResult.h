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
  class CreateFormResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateFormResult();
    AWS_AMPLIFYUIBUILDER_API CreateFormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API CreateFormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the new form.</p>
     */
    inline const Form& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the new form.</p>
     */
    inline void SetEntity(const Form& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the new form.</p>
     */
    inline void SetEntity(Form&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the new form.</p>
     */
    inline CreateFormResult& WithEntity(const Form& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the new form.</p>
     */
    inline CreateFormResult& WithEntity(Form&& value) { SetEntity(std::move(value)); return *this;}

  private:

    Form m_entity;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
