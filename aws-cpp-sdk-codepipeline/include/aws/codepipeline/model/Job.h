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
   * <p>Represents information about a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/Job">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API Job
  {
  public:
    Job();
    Job(Aws::Utils::Json::JsonView jsonValue);
    Job& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Job& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline Job& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline Job& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Additional data about a job.</p>
     */
    inline const JobData& GetData() const{ return m_data; }

    /**
     * <p>Additional data about a job.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Additional data about a job.</p>
     */
    inline void SetData(const JobData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Additional data about a job.</p>
     */
    inline void SetData(JobData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Additional data about a job.</p>
     */
    inline Job& WithData(const JobData& value) { SetData(value); return *this;}

    /**
     * <p>Additional data about a job.</p>
     */
    inline Job& WithData(JobData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline const Aws::String& GetNonce() const{ return m_nonce; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline void SetNonce(const Aws::String& value) { m_nonceHasBeenSet = true; m_nonce = value; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline void SetNonce(Aws::String&& value) { m_nonceHasBeenSet = true; m_nonce = std::move(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline void SetNonce(const char* value) { m_nonceHasBeenSet = true; m_nonce.assign(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline Job& WithNonce(const Aws::String& value) { SetNonce(value); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline Job& WithNonce(Aws::String&& value) { SetNonce(std::move(value)); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Use this number in an
     * <a>AcknowledgeJob</a> request.</p>
     */
    inline Job& WithNonce(const char* value) { SetNonce(value); return *this;}


    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline Job& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline Job& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account to use when performing the job.</p>
     */
    inline Job& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    JobData m_data;
    bool m_dataHasBeenSet;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
