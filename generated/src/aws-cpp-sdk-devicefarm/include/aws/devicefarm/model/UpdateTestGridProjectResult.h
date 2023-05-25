/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
namespace DeviceFarm
{
namespace Model
{
  class UpdateTestGridProjectResult
  {
  public:
    AWS_DEVICEFARM_API UpdateTestGridProjectResult();
    AWS_DEVICEFARM_API UpdateTestGridProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateTestGridProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The project, including updated information.</p>
     */
    inline const TestGridProject& GetTestGridProject() const{ return m_testGridProject; }

    /**
     * <p>The project, including updated information.</p>
     */
    inline void SetTestGridProject(const TestGridProject& value) { m_testGridProject = value; }

    /**
     * <p>The project, including updated information.</p>
     */
    inline void SetTestGridProject(TestGridProject&& value) { m_testGridProject = std::move(value); }

    /**
     * <p>The project, including updated information.</p>
     */
    inline UpdateTestGridProjectResult& WithTestGridProject(const TestGridProject& value) { SetTestGridProject(value); return *this;}

    /**
     * <p>The project, including updated information.</p>
     */
    inline UpdateTestGridProjectResult& WithTestGridProject(TestGridProject&& value) { SetTestGridProject(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTestGridProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTestGridProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTestGridProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TestGridProject m_testGridProject;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
