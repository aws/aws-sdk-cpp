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
  class CreateFleetResult
  {
  public:
    AWS_CODEBUILD_API CreateFleetResult();
    AWS_CODEBUILD_API CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the compute fleet</p>
     */
    inline const Fleet& GetFleet() const{ return m_fleet; }

    /**
     * <p>Information about the compute fleet</p>
     */
    inline void SetFleet(const Fleet& value) { m_fleet = value; }

    /**
     * <p>Information about the compute fleet</p>
     */
    inline void SetFleet(Fleet&& value) { m_fleet = std::move(value); }

    /**
     * <p>Information about the compute fleet</p>
     */
    inline CreateFleetResult& WithFleet(const Fleet& value) { SetFleet(value); return *this;}

    /**
     * <p>Information about the compute fleet</p>
     */
    inline CreateFleetResult& WithFleet(Fleet&& value) { SetFleet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Fleet m_fleet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
