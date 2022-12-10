/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataStatus.h>
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
namespace Translate
{
namespace Model
{
  class CreateParallelDataResult
  {
  public:
    AWS_TRANSLATE_API CreateParallelDataResult();
    AWS_TRANSLATE_API CreateParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API CreateParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline CreateParallelDataResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline CreateParallelDataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name that you assigned to the parallel data resource.</p>
     */
    inline CreateParallelDataResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the parallel data resource. When the resource is ready for you
     * to use, the status is <code>ACTIVE</code>.</p>
     */
    inline const ParallelDataStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the parallel data resource. When the resource is ready for you
     * to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(const ParallelDataStatus& value) { m_status = value; }

    /**
     * <p>The status of the parallel data resource. When the resource is ready for you
     * to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(ParallelDataStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the parallel data resource. When the resource is ready for you
     * to use, the status is <code>ACTIVE</code>.</p>
     */
    inline CreateParallelDataResult& WithStatus(const ParallelDataStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the parallel data resource. When the resource is ready for you
     * to use, the status is <code>ACTIVE</code>.</p>
     */
    inline CreateParallelDataResult& WithStatus(ParallelDataStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    ParallelDataStatus m_status;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
