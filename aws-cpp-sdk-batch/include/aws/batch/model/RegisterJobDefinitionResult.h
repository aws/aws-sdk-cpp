/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{
  class RegisterJobDefinitionResult
  {
  public:
    AWS_BATCH_API RegisterJobDefinitionResult();
    AWS_BATCH_API RegisterJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API RegisterJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}


    /**
     * <p>The revision of the job definition.</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the job definition.</p>
     */
    inline void SetRevision(int value) { m_revision = value; }

    /**
     * <p>The revision of the job definition.</p>
     */
    inline RegisterJobDefinitionResult& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::String m_jobDefinitionName;

    Aws::String m_jobDefinitionArn;

    int m_revision;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
