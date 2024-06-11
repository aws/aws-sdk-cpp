/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ArrayJobDependency.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents an Batch job dependency.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDependency">AWS
   * API Reference</a></p>
   */
  class JobDependency
  {
  public:
    AWS_BATCH_API JobDependency();
    AWS_BATCH_API JobDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID of the Batch job that's associated with this dependency.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobDependency& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobDependency& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobDependency& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the job dependency.</p>
     */
    inline const ArrayJobDependency& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ArrayJobDependency& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ArrayJobDependency&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline JobDependency& WithType(const ArrayJobDependency& value) { SetType(value); return *this;}
    inline JobDependency& WithType(ArrayJobDependency&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ArrayJobDependency m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
