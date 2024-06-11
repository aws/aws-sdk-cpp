﻿/**
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
  class UpdateThemeResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult();
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline const Theme& GetEntity() const{ return m_entity; }
    inline void SetEntity(const Theme& value) { m_entity = value; }
    inline void SetEntity(Theme&& value) { m_entity = std::move(value); }
    inline UpdateThemeResult& WithEntity(const Theme& value) { SetEntity(value); return *this;}
    inline UpdateThemeResult& WithEntity(Theme&& value) { SetEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Theme m_entity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
