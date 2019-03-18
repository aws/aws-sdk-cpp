/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEPIPELINE_API JobDetails
  {
  public:
    JobDetails();
    JobDetails(Aws::Utils::Json::JsonView jsonValue);
    JobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline JobDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline JobDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline JobDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline const JobData& GetData() const{ return m_data; }

    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline void SetData(const JobData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline void SetData(JobData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline JobDetails& WithData(const JobData& value) { SetData(value); return *this;}

    /**
     * <p>Represents additional information about a job required for a job worker to
     * complete the job. </p>
     */
    inline JobDetails& WithData(JobData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline JobDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline JobDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the job.</p>
     */
    inline JobDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    JobData m_data;
    bool m_dataHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
