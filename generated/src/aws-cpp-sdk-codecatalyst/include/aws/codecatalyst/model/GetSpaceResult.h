/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetSpaceResult
  {
  public:
    AWS_CODECATALYST_API GetSpaceResult();
    AWS_CODECATALYST_API GetSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetSpaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetSpaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetSpaceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline void SetRegionName(const Aws::String& value) { m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionName.assign(value); }
    inline GetSpaceResult& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline GetSpaceResult& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline GetSpaceResult& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetSpaceResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetSpaceResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetSpaceResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the space.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetSpaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetSpaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetSpaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_regionName;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
