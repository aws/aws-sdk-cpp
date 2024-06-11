/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/JobData.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the details of a job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/JobDetails">AWS
   * API Reference</a></p>
   */
  class JobDetails
  {
  public:
    AWS_CODEPIPELINE_API JobDetails();
    AWS_CODEPIPELINE_API JobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API JobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline JobDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline JobDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline JobDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents other information about a job required for a job worker to
     * complete the job. </p>
     */
    inline const JobData& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const JobData& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(JobData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline JobDetails& WithData(const JobData& value) { SetData(value); return *this;}
    inline JobDetails& WithData(JobData&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline JobDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline JobDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline JobDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    JobData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
