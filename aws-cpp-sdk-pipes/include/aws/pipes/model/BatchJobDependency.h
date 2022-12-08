/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/BatchJobDependencyType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pipes
{
namespace Model
{

  /**
   * <p>An object that represents an Batch job dependency.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/BatchJobDependency">AWS
   * API Reference</a></p>
   */
  class BatchJobDependency
  {
  public:
    AWS_PIPES_API BatchJobDependency();
    AWS_PIPES_API BatchJobDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API BatchJobDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline BatchJobDependency& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline BatchJobDependency& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline BatchJobDependency& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The type of the job dependency.</p>
     */
    inline const BatchJobDependencyType& GetType() const{ return m_type; }

    /**
     * <p>The type of the job dependency.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the job dependency.</p>
     */
    inline void SetType(const BatchJobDependencyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the job dependency.</p>
     */
    inline void SetType(BatchJobDependencyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the job dependency.</p>
     */
    inline BatchJobDependency& WithType(const BatchJobDependencyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the job dependency.</p>
     */
    inline BatchJobDependency& WithType(BatchJobDependencyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    BatchJobDependencyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
