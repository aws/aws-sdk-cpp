/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{
  class UpdateCommandResult
  {
  public:
    AWS_IOT_API UpdateCommandResult();
    AWS_IOT_API UpdateCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline void SetCommandId(const Aws::String& value) { m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandId.assign(value); }
    inline UpdateCommandResult& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline UpdateCommandResult& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline UpdateCommandResult& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated user-friendly display name in the console for the command.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline UpdateCommandResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateCommandResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateCommandResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated text description of the command.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateCommandResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCommandResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCommandResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boolean that indicates whether the command was deprecated.</p>
     */
    inline bool GetDeprecated() const{ return m_deprecated; }
    inline void SetDeprecated(bool value) { m_deprecated = value; }
    inline UpdateCommandResult& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (epoch timestamp in seconds) when the command was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateCommandResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateCommandResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;

    Aws::String m_displayName;

    Aws::String m_description;

    bool m_deprecated;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
