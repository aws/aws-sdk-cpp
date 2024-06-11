﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_APPCONFIG_API UpdateApplicationResult();
    AWS_APPCONFIG_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
