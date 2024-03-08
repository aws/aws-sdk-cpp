/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Fleet.h>
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
namespace CodeBuild
{
namespace Model
{
  class UpdateFleetResult
  {
  public:
    AWS_CODEBUILD_API UpdateFleetResult();
    AWS_CODEBUILD_API UpdateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API UpdateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Fleet</code> object.</p>
     */
    inline const Fleet& GetFleet() const{ return m_fleet; }

    /**
     * <p>A <code>Fleet</code> object.</p>
     */
    inline void SetFleet(const Fleet& value) { m_fleet = value; }

    /**
     * <p>A <code>Fleet</code> object.</p>
     */
    inline void SetFleet(Fleet&& value) { m_fleet = std::move(value); }

    /**
     * <p>A <code>Fleet</code> object.</p>
     */
    inline UpdateFleetResult& WithFleet(const Fleet& value) { SetFleet(value); return *this;}

    /**
     * <p>A <code>Fleet</code> object.</p>
     */
    inline UpdateFleetResult& WithFleet(Fleet&& value) { SetFleet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Fleet m_fleet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
