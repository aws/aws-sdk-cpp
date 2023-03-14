/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/Theme.h>
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
  class CreateThemeResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateThemeResult();
    AWS_AMPLIFYUIBUILDER_API CreateThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API CreateThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the new theme.</p>
     */
    inline const Theme& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the new theme.</p>
     */
    inline void SetEntity(const Theme& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the new theme.</p>
     */
    inline void SetEntity(Theme&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the new theme.</p>
     */
    inline CreateThemeResult& WithEntity(const Theme& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the new theme.</p>
     */
    inline CreateThemeResult& WithEntity(Theme&& value) { SetEntity(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Theme m_entity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
