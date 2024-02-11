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
  class DeleteSpaceResult
  {
  public:
    AWS_CODECATALYST_API DeleteSpaceResult();
    AWS_CODECATALYST_API DeleteSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API DeleteSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline DeleteSpaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DeleteSpaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DeleteSpaceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline DeleteSpaceResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline DeleteSpaceResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the space displayed to users of the space in Amazon
     * CodeCatalyst.</p>
     */
    inline DeleteSpaceResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_displayName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
