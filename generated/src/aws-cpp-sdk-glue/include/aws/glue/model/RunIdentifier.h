/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A run identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RunIdentifier">AWS
   * API Reference</a></p>
   */
  class RunIdentifier
  {
  public:
    AWS_GLUE_API RunIdentifier();
    AWS_GLUE_API RunIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RunIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Run ID.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline RunIdentifier& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline RunIdentifier& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline RunIdentifier& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Job Run ID.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }
    inline RunIdentifier& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}
    inline RunIdentifier& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}
    inline RunIdentifier& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
