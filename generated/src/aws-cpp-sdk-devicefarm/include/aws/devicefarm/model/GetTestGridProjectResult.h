/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
  class GetTestGridProjectResult
  {
  public:
    AWS_DEVICEFARM_API GetTestGridProjectResult();
    AWS_DEVICEFARM_API GetTestGridProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetTestGridProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline const TestGridProject& GetTestGridProject() const{ return m_testGridProject; }

    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline void SetTestGridProject(const TestGridProject& value) { m_testGridProject = value; }

    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline void SetTestGridProject(TestGridProject&& value) { m_testGridProject = std::move(value); }

    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline GetTestGridProjectResult& WithTestGridProject(const TestGridProject& value) { SetTestGridProject(value); return *this;}

    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline GetTestGridProjectResult& WithTestGridProject(TestGridProject&& value) { SetTestGridProject(std::move(value)); return *this;}

  private:

    TestGridProject m_testGridProject;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
