/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/Form.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateFormResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateFormResult();
    AWS_AMPLIFYUIBUILDER_API UpdateFormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API UpdateFormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the updated form.</p>
     */
    inline const Form& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the updated form.</p>
     */
    inline void SetEntity(const Form& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the updated form.</p>
     */
    inline void SetEntity(Form&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the updated form.</p>
     */
    inline UpdateFormResult& WithEntity(const Form& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the updated form.</p>
     */
    inline UpdateFormResult& WithEntity(Form&& value) { SetEntity(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFormResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFormResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFormResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Form m_entity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
