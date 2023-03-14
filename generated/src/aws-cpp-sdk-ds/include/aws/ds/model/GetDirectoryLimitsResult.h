/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DirectoryLimits.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>GetDirectoryLimits</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimitsResult">AWS
   * API Reference</a></p>
   */
  class GetDirectoryLimitsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult();
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline const DirectoryLimits& GetDirectoryLimits() const{ return m_directoryLimits; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline void SetDirectoryLimits(const DirectoryLimits& value) { m_directoryLimits = value; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline void SetDirectoryLimits(DirectoryLimits&& value) { m_directoryLimits = std::move(value); }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(const DirectoryLimits& value) { SetDirectoryLimits(value); return *this;}

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(DirectoryLimits&& value) { SetDirectoryLimits(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDirectoryLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDirectoryLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDirectoryLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectoryLimits m_directoryLimits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
